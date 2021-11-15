#pragma once
#include "User.h"

namespace Project1Git
{
	using namespace System::Windows::Forms;

	class ListUsers
	{
	private:
		int size;
		User *user;

	public:
		ListUsers();
		User getUserByLogin(std::string);
		~ListUsers();
		int getSize();
		User getUserByIndex(int);
	};
}
