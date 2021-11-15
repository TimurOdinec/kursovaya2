#include <string>
#include "User.h"

using namespace Project1Git;
User::User()
{
	login = "";
}
//конструктор
User::User(std::string login) 
{
	this->setLogin(login);
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
//деструктор
User::~User()
{

}

