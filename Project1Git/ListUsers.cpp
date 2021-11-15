#include <Windows.h>
#include <string>
#include <iostream>
#include "ListUsers.h"
#include "WorkWithFiles.h"


using namespace Project1Git;

ListUsers::ListUsers()
{
	MessageBox::Show("ListUsers()");
	WorkWithFiles workWithFile;
	if (!workWithFile.isExistsFile())
	{
		//������� ����
		MessageBox::Show("File not found");
		workWithFile.createFile();
		MessageBox::Show("File created");
	}
	//��������� ����
	workWithFile.readFile();
	size = workWithFile.countRowInFile();
	user = new User[size];
	std::vector<std::string> vr = workWithFile.arrString();
	int ind = 0;
	for (std::string rowData : vr)
	{
		//����� ������ �� ;
		std::string tempRow = "";
		if (!rowData.empty())
		{
			int previousPosition = 0;
			//������ ������ ����� �� ������������ �����������
			for (int j = 0; j < 2; j++)
			{
				int newPosition = rowData.find(";", previousPosition);     //���������� ������ ��������� ������� ";"
				tempRow = rowData.substr(previousPosition, newPosition - previousPosition);   //�������� �� ������ ��������� ������� � ������� previousPosition, � ����������� �������� � ��� (newPosition - previousPosition)
				previousPosition = newPosition + 1;                         //��������� � ���������� ���������
				if (!tempRow.empty())
				{
					if (j == 0)
					{
						user[ind].setId(std::stoi(tempRow)); //��������� ������ � �����
					}
					if (j == 1)
					{
						user[ind].setLogin(tempRow);
					}
				}
			}
		}



		
		ind++;
	}
	
	/*for (int i = 0; i < size; i++)
	{
		std::string t = "E" + std::to_string(i);
		user[i].setLogin(t);
	}*/
	/*for (int i = 0; i < size; i++)
	{
		std::string t = std::to_string(user[i].getId()) + ";" + user[i].getLogin();
		System::String^ tt = gcnew System::String(t.data());
		MessageBox::Show("tt : " + tt);
	}*/
}
ListUsers::~ListUsers()
{

}
User ListUsers::getUserByLogin(std::string login)
{
	return *user;
}
int ListUsers::getSize()
{
	return this->size;
}
User ListUsers::getUserByIndex(int index)
{
	return this->user[index];
}