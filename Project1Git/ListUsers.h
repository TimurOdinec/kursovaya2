#pragma once
#include "User.h"
#include "User.cpp"

namespace ProjectGit1
{
	class ListUsers
	{
	public:
		ListUsers();
		User getUserByLogin(std::string login);
		~ListUsers();
	private:
		int id;
		User* user;
	};
}
