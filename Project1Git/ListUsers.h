#pragma once

#include "User.h"

namespace Project1Git
{
	using namespace System::Windows::Forms;
	/// <summary>
	/// класс для создания объекта - списка пользователей
	/// </summary>
	public class ListUsers
	{
	private:
		int size;	//кол-во записей в списке пользователей
		User *user;	//указатель на объекты - пользователи

	public:
		ListUsers();						//конструктор
		int getSize();						//получить кол-во записей в списке пользователей (в файле)
		User getUserByLogin(std::string);	//получить объект-пользователь по переданному логину
		int getUserIndex(int);				//получить id пользователя по переданному индексу (номеру строки-записи в файле)
		User getUserByIndex(int);			//получить объект-пользователя по переданному index
		int getNewId();						//получить новый id для добавления пользователя (следующий за текущим максимальным id)
		void addNewUser(User);				//добавить нового пользователя в список (файл данных по пользователям)
		void deleteUserById(int);			//удалить пользователя из списка по id (из файла)
		void updateUser(User);				//редактировать пользователя (который передан как параметр метода)
		~ListUsers();						//деструктор
	};
}
