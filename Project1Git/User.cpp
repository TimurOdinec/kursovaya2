#include <string>
#include "User.h"

using namespace Project1Git;
User::User()
{
	login = "";
}
//конструктор
//User::User(std::string login) 
//{
//	this->setLogin(login);
//}
User::User(int id, std::string login, int userType, int userRegister, std::string password)
{
	this->id = id;
	this->login = login;
	this->userType = userType;
	this->userRegister = userRegister;
	this->password = password;
}
void User::setLogin(std::string login)
{
	this->login = login;
}
std::string User::getLogin()
{
	return this->login;
}
void User::setId(int id)
{
	this->id = id;
}
int User::getId()
{
	return this->id;
}
void User::setUserType(int userType)
{
	this->userType = userType;
}
int User::getUserType()
{
	return this->userType;
}
void User::setUserRegister(int userRegister)
{
	this->userRegister = userRegister;
}
int User::getUserRegister()
{
	return this->userRegister;
}
void User::setPassword(std::string password)
{
	this->password = password;
}
std::string User::getPassword()
{
	return this->password;
}
//деструктор
User::~User()
{

}

