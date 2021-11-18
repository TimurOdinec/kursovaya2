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
		std::string password;
	public:
		User();
		//конструктор
		User(std::string);
		void setLogin(std::string);
		std::string getLogin();
		void setId(int);
		int getId();
		void setUserType(int);
		int getUserType();
		void setPassword(std::string);
		std::string getPassword();
		//деструктор
		~User();
	
	};

}