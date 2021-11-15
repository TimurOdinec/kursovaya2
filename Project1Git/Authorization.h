#pragma once
#include "User.h"

namespace Project1Git
{
	class Authorization
	{
	private:
		std::string currentLogin;
		User currentUser;
	public:
		Authorization();
		Authorization(std::string);
		~Authorization();
		bool checkCurrentUser();
		User getCurrentUser();
	};
}
