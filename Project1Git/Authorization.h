#pragma once

#include "User.h"

namespace Project1Git
{
	/// <summary>
	/// класс для создания объекта авторизации
	/// </summary>
	public class Authorization
	{
	private:
		std::string currentLogin;	//логин текущего пользователя
		std::string currentPassword;//пароль текущего пользователя
		User currentUser;			//объект текущего пользователя
	public:
		Authorization();						//конструктор
		Authorization(std::string, std::string);//конструктор с параметрами
		bool checkCurrentUser();				//метод проверяет наличие записи о пользователе (пароль, логин) в списке пользователей
		User getCurrentUser();					//метод возвращает текущего пользователя
		void setCurrentUser(User);				//метод устанавливает текущего пользователя
		~Authorization();						//деструктор
	};
}
