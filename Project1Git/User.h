#pragma once
#include <string>

namespace Project1Git 
{
	public class User
	{
	private:
		std::string login;
		int id;
		int userType;
		int userRegister;
		std::string password;
	public:
		User();
		//конструктор
		//User(std::string);
		User(int, std::string, int, int, std::string);
		void setLogin(std::string);
		std::string getLogin();
		void setId(int);
		int getId();
		void setUserType(int);
		int getUserType();
		void setUserRegister(int);
		int getUserRegister();
		void setPassword(std::string);
		std::string getPassword();
		//деструктор
		~User();
	
	};

}