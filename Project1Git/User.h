#pragma once
#include <string>

namespace Project1Git 
{

	class User
	{
	public:
		User()
		{
		};
		void setLogin(std::string);
		std::string getLogin();
		~User()
		{
		};

	private:
		std::string login;
	};

}