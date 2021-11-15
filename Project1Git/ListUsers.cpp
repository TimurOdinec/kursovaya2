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
		//סמחהאול פאיכ
		MessageBox::Show("File not found");
		workWithFile.createFile();
		MessageBox::Show("File created");
	}
	//סקטעûגאול פאיכ
	workWithFile.readFile();
	size = workWithFile.countRowInFile();
	user = new User[size];
	std::vector<std::string> vr = workWithFile.arrString();
	int ind = 0;
	for (std::string tempStr : vr)
	{
		user[ind].setId(ind);
		user[ind].setLogin(tempStr);
		ind++;
	}
	
	/*for (int i = 0; i < size; i++)
	{
		std::string t = "E" + std::to_string(i);
		user[i].setLogin(t);
	}*/
	for (int i = 0; i < size; i++)
	{
		std::string t = std::to_string(user[i].getId()) + ";" + user[i].getLogin();
		System::String^ tt = gcnew System::String(t.data());
		MessageBox::Show("tt : " + tt);
	}
}
ListUsers::~ListUsers()
{

}
User ListUsers::getUserByLogin(std::string login)
{
	return *user;
}
