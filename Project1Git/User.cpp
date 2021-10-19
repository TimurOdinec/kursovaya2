#include <string>
#include "User.h"

using namespace Project1Git;

void User::setLogin(std::string login)
{
	User::login = login;
}
std::string User::getLogin()
{
	return User::login;
}

