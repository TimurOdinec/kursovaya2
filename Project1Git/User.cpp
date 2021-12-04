#include <string>

#include "User.h"

using namespace Project1Git;

/// <summary>
/// конструктор
/// </summary>
User::User()
{
	login = "";
	userType = 0;			
	userRegister = 0;		
	password = "";	
}
/// <summary>
/// коснтруктор с параметрами
/// </summary>
/// <param name="id"></param>
/// <param name="login"></param>
/// <param name="userType"></param>
/// <param name="userRegister"></param>
/// <param name="password"></param>
User::User(int id, std::string login, int userType, int userRegister, std::string password)
{
	this->id = id;
	this->login = login;
	this->userType = userType;
	this->userRegister = userRegister;
	this->password = password;
}
/// <summary>
/// установить логин
/// </summary>
/// <param name="login"></param>
void User::setLogin(std::string login)
{
	this->login = login;
}
/// <summary>
/// получить логин
/// </summary>
/// <returns></returns>
std::string User::getLogin()
{
	return this->login;
}
/// <summary>
/// установить id
/// </summary>
/// <param name="id"></param>
void User::setId(int id)
{
	this->id = id;
}
/// <summary>
/// получить id
/// </summary>
/// <returns></returns>
int User::getId()
{
	return this->id;
}
/// <summary>
/// установить код типа пользователя
/// </summary>
/// <param name="userType"></param>
void User::setUserType(int userType)
{
	this->userType = userType;
}
/// <summary>
/// получить код типа пользователя
/// </summary>
/// <returns></returns>
int User::getUserType()
{
	return this->userType;
}
/// <summary>
/// установить код регистрации пользователя
/// </summary>
/// <param name="userRegister"></param>
void User::setUserRegister(int userRegister)
{
	this->userRegister = userRegister;
}
/// <summary>
/// получить код регистрации пользователя
/// </summary>
/// <returns></returns>
int User::getUserRegister()
{
	return this->userRegister;
}
/// <summary>
/// установить пароль
/// </summary>
/// <param name="password"></param>
void User::setPassword(std::string password)
{
	this->password = password;
}
/// <summary>
/// получить пароль
/// </summary>
/// <returns></returns>
std::string User::getPassword()
{
	return this->password;
}
//деструктор
User::~User()
{

}

