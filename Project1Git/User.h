#pragma once
#include <string>

namespace Project1Git 
{
	public class User
	{
	private:
		std::string login;
		int id;
	public:
		User();
		//конструктор
		User(std::string);
		void setLogin(std::string);
		std::string getLogin();
		void setId(int);
		int getId();
		//деструктор
		~User();
	
	};

}