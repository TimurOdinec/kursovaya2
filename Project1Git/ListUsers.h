#pragma once
#include "User.h"

namespace Project1Git
{
	using namespace System::Windows::Forms;

	public class ListUsers
	{
	private:
		int size;
		User *user;

	public:
		ListUsers();
		~ListUsers();
		int getSize();
		int getUserIndex(int);
		User getUserByLogin(std::string);
		User getUserByIndex(int);
		int getNewId();	//получить id для новой записи
		void addNewUser(User);
		void deleteUserById(int);
		void updateUser(User);
	};
}
