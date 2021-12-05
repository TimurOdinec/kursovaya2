#include <Windows.h>
#include <string>
#include <iostream>

#include "ListUsers.h"
#include "WorkWithFiles.h"

using namespace Project1Git;

/// <summary>
/// �����������
/// </summary>
ListUsers::ListUsers()
{
	//������� ������ ������ � �������
	WorkWithFiles workWithFile;
	//���� ����� � ������� �� ������������� ���, �� ������� ���
	if (!workWithFile.isExistsFile("users"))
	{
		//������� ����
		MessageBox::Show("File not found");
		workWithFile.createFile("users");
		MessageBox::Show("File created");
	}
	//��������� ����
	workWithFile.readFile("users");
	//�������� ���-�� ������� � ����� �������������
	size = workWithFile.countRowInFile("users");
	//������� ������ �������� - �������������
	user = new User[size];
	//��������� ������ �� ����� � ������ - ���������
	std::vector<std::string> vr = workWithFile.arrString("users");
	//������ ������� ������������ (�� ����� id !!!)
	int ind = 0;
	//��������� ������� ������� - ������������ ��� ������
	for (std::string rowData : vr)
	{
		//����� ������ �� ����������� - ";"
		std::string tempRow = "";
		//��������� ������ �� �������
		if (!rowData.empty())
		{
			int previousPosition = 0;
			//���-�� ���������� � �����: id, login, typeUser, userRegister, password - 5
			int countParameters = 5;
			//������ ������ ����� �� ������������ ����������� �� 5 ������
			for (int j = 0; j < countParameters; j++)
			{
				int newPosition = rowData.find(";", previousPosition);     //���������� ������ ��������� ������� ";"
				tempRow = rowData.substr(previousPosition, newPosition - previousPosition);   //�������� �� ������ ��������� ������� � ������� previousPosition, � ����������� �������� � ��� (newPosition - previousPosition)
				previousPosition = newPosition + 1;                         //��������� � ���������� ���������
				if (!tempRow.empty())
				{
					//1 ����� ������ ������� � �������� id ������������
					if (j == 0)
					{
						user[ind].setId(std::stoi(tempRow)); //��������� ������ � �����
					}
					//2 ����� ������ ������� � ����� ������������
					if (j == 1)
					{
						user[ind].setLogin(tempRow);
					}
					//3 ����� ������ ������� � ��� ���� ������������
					if (j == 2)
					{
						user[ind].setUserType(std::stoi(tempRow));
					}
					//4 ����� ������ ������� � ��� ����������� ������������
					if (j == 3)
					{
						user[ind].setUserRegister(std::stoi(tempRow));
					}
					//5 ����� ������ ������� � ������ ������������
					if (j == 4)
					{
						user[ind].setPassword(tempRow);
					}
				}
			}
		}
		ind++;
	}
}
/// <summary>
/// �������� ���-�� ������� � ������ ������������� (� �����)
/// </summary>
/// <returns></returns>
int ListUsers::getSize()
{
	return this->size;
}
/// <summary>
/// �������� ������-������������ �� ����������� ������
/// </summary>
/// <param name="login"></param>
/// <returns></returns>
User ListUsers::getUserByLogin(std::string login)
{
	User user(-1, "", -1, -1, "");	//������� ������ ������������ �� ���������
	//���� �� ������� �������������
	for (int i = 0; i < this->size; i++)
	{
		std::string loginRow = this->user[i].getLogin();
		//���� ����� ������������ �� ������� ��������� � ����������, �� ���������� ����� ������������
		if (loginRow == login)
		{
			return this->user[i];
		}
	}
	return user;
}
/// <summary>
/// �������� id ������������ �� ����������� ������� (������ ������-������ � �����)
/// </summary>
/// <param name="index"></param>
/// <returns></returns>
int ListUsers::getUserIndex(int index)
{
	return this->user[index].getId();
}
/// <summary>
/// �������� ������-������������ �� ����������� index
/// </summary>
/// <param name="index"></param>
/// <returns></returns>
User ListUsers::getUserByIndex(int index)
{
	User user(-1, "", -1, -1, "");	//������� ������ ������������ �� ���������
	//���� �� ������� �������������
	for (int i = 0; i < this->size; i++)
	{
		int idRow = this->user[i].getId();
		///////////////////////////////////////////////////////////////////////
		//System::String^ t = gcnew System::String(std::to_string(index).data());
		//System::String^ t1 = gcnew System::String(std::to_string(idRow).data());
		//MessageBox::Show("getUserByIndex:idRow():" + t1 + "\n index:" + t);
		///////////////////////////////////////////////////////////////////////
		//���� id ������������ �� ������� ��������� � ����������, �� ���������� ����� ������������
		if (idRow == index)
		{
			return this->user[i];
		}
	}
	return user;
}
/// <summary>
/// �������� ����� id ��� ���������� ������������ (��������� �� ������� ������������ id)
/// </summary>
/// <returns></returns>
int ListUsers::getNewId()
{
	//�������� ��������� id �� ������� �������������
	int lastId = user[size - 1].getId();
	//�������� ��������� ���������� id+1
	return lastId + 1;
}
/// <summary>
/// �������� ������ ������������ � ������ (���� ������ �� �������������)
/// </summary>
/// <param name="user"></param>
void ListUsers::addNewUser(User user)
{
	//�������� ������ ��������� �������  �� ������� �������� - �������������� �� ������
	std::vector<std::string> vr;
	//���� �� ������� �������������
	for (int i = 0; i < this->size; i++)
	{
		std::string row = std::to_string(this->user[i].getId()) + ";" +
							this->user[i].getLogin() + ";" +
							std::to_string(this->user[i].getUserType()) + ";" +
							std::to_string(this->user[i].getUserRegister()) + ";" +
							this->user[i].getPassword() + "\n";
		vr.push_back(row);
	}
	//���������� ����� ������ ������������ ������� ��������� ������� � ������
	std::string newRow = std::to_string(user.getId()) + ";" +
							user.getLogin() + ";" +
							std::to_string(user.getUserType()) + ";" +
							std::to_string(user.getUserRegister()) + ";" +
							user.getPassword();
	vr.push_back(newRow);
	//�������� ������ ������ � �������
	WorkWithFiles workWithFile;
	//������� ������ ������� � ���� ������ �������������
	workWithFile.saveDataFile(vr, "users");
}
/// <summary>
/// ������� ������������ �� ������ �� id (�� �����)
/// </summary>
/// <param name="indexUser"></param>
void ListUsers::deleteUserById(int indexUser)
{
	//�������� ������ ��������� �������  �� ������� �������� - ���� �� ���������
	std::vector<std::string> vr;
	//���� �� ������� �������������
	for (int i = 0; i < this->size; i++)
	{
		int idUser = this->user[i].getId();
		//���� id ������������ ��������� � ���������� ��������, �� ��������� ��� ������ � ������
		if (idUser == indexUser)
		{
			continue;
		}
		std::string row = std::to_string(this->user[i].getId()) + ";" +
			this->user[i].getLogin() + ";" +
			std::to_string(this->user[i].getUserType()) + ";" +
			std::to_string(this->user[i].getUserRegister()) + ";" +
			this->user[i].getPassword();
		//���� ������ �� �������� ���������, �� ��������� � ����� ������� �� ����� ������
		if (i != (this->size - 1))
		{
			row += "\n";
		}
		vr.push_back(row);
	}
	//�������� ������ ������ � �������
	WorkWithFiles workWithFile;
	//������� ������ ������� � ���� ���������
	workWithFile.saveDataFile(vr, "users");
}
/// <summary>
/// ������������� ������������ (������� ������� ��� �������� ������)
/// </summary>
/// <param name="user"></param>
void ListUsers::updateUser(User user)
{
	int idUserUpd = user.getId();	//������� id �������������� ������������
	//�������� ������ ��������� �������  �� ������� �������� - ���� �� ���������
	std::vector<std::string> vr;
	//���� �� ������� ����
	for (int i = 0; i < this->size; i++)
	{
		int idUser = this->user[i].getId();
		std::string row = "";
		//���� id ������������ ��������� � ������������� �������������, �� �������������� ����� ������ � ������
		//����� ����� � ������ ������ ������
		if (idUser == idUserUpd)
		{
			row = std::to_string(user.getId()) + ";" +
				user.getLogin() + ";" +
				std::to_string(user.getUserType()) + ";" +
				std::to_string(user.getUserRegister()) + ";" +
				user.getPassword();
		}
		else
		{
			row = std::to_string(this->user[i].getId()) + ";" +
				this->user[i].getLogin() + ";" +
				std::to_string(this->user[i].getUserType()) + ";" +
				std::to_string(this->user[i].getUserRegister()) + ";" +
				this->user[i].getPassword();
		}
		//���� ������ �� �������� ���������, �� ��������� � ����� ������� �� ����� ������
		if (i != (this->size - 1))
		{
			row += "\n";
		}
		vr.push_back(row);
	}
	//�������� ������ ������ � �������
	WorkWithFiles workWithFile;
	//������� ������ ������� � ���� ���������
	workWithFile.saveDataFile(vr, "users");
}
/// <summary>
/// ����������
/// </summary>
ListUsers::~ListUsers()
{

}

