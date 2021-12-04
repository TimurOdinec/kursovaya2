#pragma once

#include <string>

namespace Project1Git 
{
	/// <summary>
	/// класс для создания объекта - пользователь
	/// </summary>
	public class User
	{
	private:
		int id;					//id пользователя
		std::string login;		//логин пользователя
		int userType;			//код типа пользователя
		int userRegister;		//код регистрации пользователя
		std::string password;	//пароль ползователя
	public:
		User();											//конструктор
		User(int, std::string, int, int, std::string);	//коснтруктор с параметрами
		void setLogin(std::string);						//установить логин
		std::string getLogin();							//получить логин
		void setId(int);								//установить id
		int getId();									//получить id
		void setUserType(int);							//установить код типа пользователя
		int getUserType();								//получить код типа пользователя
		void setUserRegister(int);						//установить код регистрации пользователя
		int getUserRegister();							//получить код регистрации пользователя
		void setPassword(std::string);					//установить пароль
		std::string getPassword();						//получить пароль
		~User();										//деструктор
	};
}