#pragma once
#include <string>

namespace Project1Git 
{
	class User
	{
	public:
		//конструктор
		User(std::string);
		void setLogin(std::string);
		std::string getLogin();
		//деструктор
		~User();

	private:
		std::string login;
	};

}