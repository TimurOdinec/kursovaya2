#include <Windows.h>
#include <string>
#include <iostream>

#include "ListUsers.h"
#include "WorkWithFiles.h"

using namespace Project1Git;

/// <summary>
/// конструктор
/// </summary>
ListUsers::ListUsers()
{
	//создаем объект работы с файлами
	WorkWithFiles workWithFile;
	//если файла с данными по пользователям нет, то создаем его
	if (!workWithFile.isExistsFile("users"))
	{
		//создаем файл
		MessageBox::Show("File not found");
		workWithFile.createFile("users");
		MessageBox::Show("File created");
	}
	//считываем файл
	workWithFile.readFile("users");
	//получаем кол-во записей в файле пользователей
	size = workWithFile.countRowInFile("users");
	//создаем массив объектов - пользователей
	user = new User[size];
	//считываем данные из файла в вектор - построчно
	std::vector<std::string> vr = workWithFile.arrString("users");
	//индекс объекта пользователь (НЕ РАВЕН id !!!)
	int ind = 0;
	//заполняем данными объекты - пользователи для списка
	for (std::string rowData : vr)
	{
		//режем строку по разделителю - ";"
		std::string tempRow = "";
		//проверяем строку на пустоту
		if (!rowData.empty())
		{
			int previousPosition = 0;
			//кол-во параметров в файле: id, login, typeUser, userRegister, password - 5
			int countParameters = 5;
			//каждую строку режем по специальному разделителю на 5 частей
			for (int j = 0; j < countParameters; j++)
			{
				int newPosition = rowData.find(";", previousPosition);     //определяем индекс вхождения символа ";"
				tempRow = rowData.substr(previousPosition, newPosition - previousPosition);   //вырезаем из строки подстроку начиная с позиции previousPosition, с количеством символов в ней (newPosition - previousPosition)
				previousPosition = newPosition + 1;                         //переходим к следующему вхождению
				if (!tempRow.empty())
				{
					//1 часть строки заносим в свойство id пользователя
					if (j == 0)
					{
						user[ind].setId(std::stoi(tempRow)); //переводим строку в число
					}
					//2 часть строки заносим в логин пользователя
					if (j == 1)
					{
						user[ind].setLogin(tempRow);
					}
					//3 часть строки заносим в код типа пользователя
					if (j == 2)
					{
						user[ind].setUserType(std::stoi(tempRow));
					}
					//4 часть строки заносим в код регистрации пользователя
					if (j == 3)
					{
						user[ind].setUserRegister(std::stoi(tempRow));
					}
					//5 часть строки заносим в пароль пользователя
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
/// получить кол-во записей в списке пользователей (в файле)
/// </summary>
/// <returns></returns>
int ListUsers::getSize()
{
	return this->size;
}
/// <summary>
/// получить объект-пользователь по переданному логину
/// </summary>
/// <param name="login"></param>
/// <returns></returns>
User ListUsers::getUserByLogin(std::string login)
{
	User user(-1, "", -1, -1, "");	//создаем объект пользователя по умолчанию
	//идем по массиву пользователей
	for (int i = 0; i < this->size; i++)
	{
		std::string loginRow = this->user[i].getLogin();
		//если логин пользователя из массива совпадает с переданным, то возвращаем этого пользователя
		if (loginRow == login)
		{
			return this->user[i];
		}
	}
	return user;
}
/// <summary>
/// получить id пользователя по переданному индексу (номеру строки-записи в файле)
/// </summary>
/// <param name="index"></param>
/// <returns></returns>
int ListUsers::getUserIndex(int index)
{
	return this->user[index].getId();
}
/// <summary>
/// получить объект-пользователя по переданному index
/// </summary>
/// <param name="index"></param>
/// <returns></returns>
User ListUsers::getUserByIndex(int index)
{
	User user(-1, "", -1, -1, "");	//создаем объект пользователя по умолчанию
	//идем по массиву пользователей
	for (int i = 0; i < this->size; i++)
	{
		int idRow = this->user[i].getId();
		///////////////////////////////////////////////////////////////////////
		//System::String^ t = gcnew System::String(std::to_string(index).data());
		//System::String^ t1 = gcnew System::String(std::to_string(idRow).data());
		//MessageBox::Show("getUserByIndex:idRow():" + t1 + "\n index:" + t);
		///////////////////////////////////////////////////////////////////////
		//если id пользователя из массива совпадает с переданным, то возвращаем этого пользователя
		if (idRow == index)
		{
			return this->user[i];
		}
	}
	return user;
}
/// <summary>
/// получить новый id для добавления пользователя (следующий за текущим максимальным id)
/// </summary>
/// <returns></returns>
int ListUsers::getNewId()
{
	//получаем последний id из массива пользователей
	int lastId = user[size - 1].getId();
	//передаем последний полученный id+1
	return lastId + 1;
}
/// <summary>
/// добавить нового пользователя в список (файл данных по пользователям)
/// </summary>
/// <param name="user"></param>
void ListUsers::addNewUser(User user)
{
	//заполним вектор построчно данными  из массива объектов - пользователями из списка
	std::vector<std::string> vr;
	//идем по массиву пользователей
	for (int i = 0; i < this->size; i++)
	{
		std::string row = std::to_string(this->user[i].getId()) + ";" +
							this->user[i].getLogin() + ";" +
							std::to_string(this->user[i].getUserType()) + ";" +
							std::to_string(this->user[i].getUserRegister()) + ";" +
							this->user[i].getPassword() + "\n";
		vr.push_back(row);
	}
	//переданный новый объект пользователя запишем последней строкой в вектор
	std::string newRow = std::to_string(user.getId()) + ";" +
							user.getLogin() + ";" +
							std::to_string(user.getUserType()) + ";" +
							std::to_string(user.getUserRegister()) + ";" +
							user.getPassword();
	vr.push_back(newRow);
	//создадим объект работы с файлами
	WorkWithFiles workWithFile;
	//запишем данные вектора в файл списка пользователей
	workWithFile.saveDataFile(vr, "users");
}
/// <summary>
/// удалить пользователя из списка по id (из файла)
/// </summary>
/// <param name="indexUser"></param>
void ListUsers::deleteUserById(int indexUser)
{
	//заполним вектор построчно данными  из массива объектов - авто из автопарка
	std::vector<std::string> vr;
	//идем по массиву пользователей
	for (int i = 0; i < this->size; i++)
	{
		int idUser = this->user[i].getId();
		//если id пользователя совпадает с переданным индексом, то пропустим его запись в вектор
		if (idUser == indexUser)
		{
			continue;
		}
		std::string row = std::to_string(this->user[i].getId()) + ";" +
			this->user[i].getLogin() + ";" +
			std::to_string(this->user[i].getUserType()) + ";" +
			std::to_string(this->user[i].getUserRegister()) + ";" +
			this->user[i].getPassword();
		//если запись не является последней, то вставляем в конце переход на новую строку
		if (i != (this->size - 1))
		{
			row += "\n";
		}
		vr.push_back(row);
	}
	//создадим объект работы с файлами
	WorkWithFiles workWithFile;
	//запишем данные вектора в файл автопарка
	workWithFile.saveDataFile(vr, "users");
}
/// <summary>
/// редактировать пользователя (который передан как параметр метода)
/// </summary>
/// <param name="user"></param>
void ListUsers::updateUser(User user)
{
	int idUserUpd = user.getId();	//получим id редактируемого пользователя
	//заполним вектор построчно данными  из массива объектов - авто из автопарка
	std::vector<std::string> vr;
	//идем по массиву авто
	for (int i = 0; i < this->size; i++)
	{
		int idUser = this->user[i].getId();
		std::string row = "";
		//если id пользователя совпадает с редактируемым пользователем, то перезаписываем новые данные в вектор
		//иначе пишем в вектор старые данные
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
		//если запись не является последней, то вставляем в конце переход на новую строку
		if (i != (this->size - 1))
		{
			row += "\n";
		}
		vr.push_back(row);
	}
	//создадим объект работы с файлами
	WorkWithFiles workWithFile;
	//запишем данные вектора в файл автопарка
	workWithFile.saveDataFile(vr, "users");
}
/// <summary>
/// деструктор
/// </summary>
ListUsers::~ListUsers()
{

}

