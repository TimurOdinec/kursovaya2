#include <Windows.h>
#include <string>
#include <iostream>
#include "ListUsers.h"
#include "WorkWithFiles.h"


using namespace Project1Git;

ListUsers::ListUsers()
{
	//MessageBox::Show("ListUsers()");
	WorkWithFiles workWithFile;
	if (!workWithFile.isExistsFile())
	{
		//создаем файл
		MessageBox::Show("File not found");
		workWithFile.createFile();
		MessageBox::Show("File created");
	}
	//считываем файл
	workWithFile.readFile();
	size = workWithFile.countRowInFile();
	user = new User[size];
	std::vector<std::string> vr = workWithFile.arrString();
	int ind = 0;
	

	for (std::string rowData : vr)
	{
		//режем строку по ;
		std::string tempRow = "";
		if (!rowData.empty())
		{
			int previousPosition = 0;
			//кол-во параметров в файле: id, login, typeUser, userRegister, password
			int countParameters = 5;
			//каждую строку режем по специальному разделителю
			for (int j = 0; j < countParameters; j++)
			{
				int newPosition = rowData.find(";", previousPosition);     //определяем индекс вхождения символа ";"
				tempRow = rowData.substr(previousPosition, newPosition - previousPosition);   //вырезаем из строки подстроку начиная с позиции previousPosition, с количеством символов в ней (newPosition - previousPosition)
				previousPosition = newPosition + 1;                         //переходим к следующему вхождению
				if (!tempRow.empty())
				{
					if (j == 0)
					{
						user[ind].setId(std::stoi(tempRow)); //переводим строку в число
					}
					if (j == 1)
					{
						user[ind].setLogin(tempRow);
					}
					if (j == 2)
					{
						user[ind].setUserType(std::stoi(tempRow));
					}
					if (j == 3)
					{
						user[ind].setUserRegister(std::stoi(tempRow));
					}
					if (j == 4)
					{
						user[ind].setPassword(tempRow);
					}
				}
			}
		}

		ind++;
	}
	
	/*for (int i = 0; i < size; i++)
	{
		std::string t = std::to_string(user[i].getId()) + ";" 
			+ user[i].getLogin() + ";" 
			+ std::to_string(user[i].getUserType()) + ";"
			+ std::to_string(user[i].getUserRegister()) + ";"
			+ user[i].getPassword();
		System::String^ tt = gcnew System::String(t.data());
		MessageBox::Show("tt : " + tt);
	}*/
}
ListUsers::~ListUsers()
{

}
User ListUsers::getUserByLogin(std::string login)
{
	User user(-1, "", -1, -1, "");
	System::String^ tt = gcnew System::String(login.data());
	MessageBox::Show("tt : " + tt);
	for (int i = 0; i < this->size; i++)
	{
		std::string loginRow = this->user[i].getLogin();
		System::String^ tt = gcnew System::String(loginRow.data());
		MessageBox::Show("tt : " + tt);
		if (loginRow == login)
		{
			return this->user[i];
		}
	}
	return user;
}
int ListUsers::getSize()
{
	return this->size;
}
int ListUsers::getUserIndex(int index)
{
	return this->user[index].getId();
}
User ListUsers::getUserByIndex(int index)
{
	User user(-1, "", -1, -1, "");
	//System::String^ tt = gcnew System::String(std::to_string(index).data());
	//MessageBox::Show("getUserByIndex tt : " + tt);
	for (int i = 0; i < this->size; i++)
	{
		int idRow = this->user[i].getId();
		//System::String^ tt = gcnew System::String(std::to_string(idRow).data());
		//MessageBox::Show("tt : " + tt);
		if (idRow == index)
		{
			return this->user[i];
		}
	}
	return user;
	//return this->user[index];
}
int ListUsers::getNewId()
{
	int lastId = user[size - 1].getId();
	return lastId + 1;
}
void ListUsers::addNewUser(User user)
{
	std::vector<std::string> vr;
	for (int i = 0; i < this->size; i++)
	{
		std::string row = std::to_string(this->user[i].getId()) + ";" +
							this->user[i].getLogin() + ";" +
							std::to_string(this->user[i].getUserType()) + ";" +
							std::to_string(this->user[i].getUserRegister()) + ";" +
							this->user[i].getPassword() + "\n";
		vr.push_back(row);
	}
	std::string newRow = std::to_string(user.getId()) + ";" +
							user.getLogin() + ";" +
							std::to_string(user.getUserType()) + ";" +
							std::to_string(user.getUserRegister()) + ";" +
							user.getPassword();
	vr.push_back(newRow);
	WorkWithFiles workWithFile;
	workWithFile.saveDataFile(vr);
}
void ListUsers::deleteUserById(int indexUser)
{
	std::vector<std::string> vr;
	for (int i = 0; i < this->size; i++)
	{
		int idUser = this->user[i].getId();
		if (idUser == indexUser)
		{
			continue;
		}
		std::string row = std::to_string(this->user[i].getId()) + ";" +
			this->user[i].getLogin() + ";" +
			std::to_string(this->user[i].getUserType()) + ";" +
			std::to_string(this->user[i].getUserRegister()) + ";" +
			this->user[i].getPassword();
		if (i != (this->size - 1))
		{
			row += "\n";
		}
		vr.push_back(row);
	}
	WorkWithFiles workWithFile;
	workWithFile.saveDataFile(vr);
}
void ListUsers::updateUser(User user)
{
	std::vector<std::string> vr;
	for (int i = 0; i < this->size; i++)
	{
		int idUser = this->user[i].getId();
		int idUserUpd = user.getId();
		std::string row = "";
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
		
		if (i != (this->size - 1))
		{
			row += "\n";
		}
		vr.push_back(row);
	}
	WorkWithFiles workWithFile;
	workWithFile.saveDataFile(vr);
}

