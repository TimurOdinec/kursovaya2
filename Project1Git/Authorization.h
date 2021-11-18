#pragma once
#include "User.h"

namespace Project1Git
{
	class Authorization
	{
	private:
		std::string currentLogin;
		std::string currentPassword;
		User currentUser;
	public:
		Authorization();
		Authorization(std::string, std::string);
		~Authorization();
		bool checkCurrentUser();
		User getCurrentUser();
		void setCurrentUser(User);
	};
}
