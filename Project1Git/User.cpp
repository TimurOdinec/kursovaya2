#include <string>
#include "User.h"

using namespace Project1Git;
//�����������
User::User(std::string login) 
{
	User::setLogin(login);
}
void User::setLogin(std::string login)
{
	User::login = login;
}
std::string User::getLogin()
{
	return User::login;
}
//����������
User::~User()
{

}

