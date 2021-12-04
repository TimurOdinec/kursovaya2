#include <string>

#include "User.h"

using namespace Project1Git;

/// <summary>
/// �����������
/// </summary>
User::User()
{
	login = "";
	userType = 0;			
	userRegister = 0;		
	password = "";	
}
/// <summary>
/// ����������� � �����������
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
/// ���������� �����
/// </summary>
/// <param name="login"></param>
void User::setLogin(std::string login)
{
	this->login = login;
}
/// <summary>
/// �������� �����
/// </summary>
/// <returns></returns>
std::string User::getLogin()
{
	return this->login;
}
/// <summary>
/// ���������� id
/// </summary>
/// <param name="id"></param>
void User::setId(int id)
{
	this->id = id;
}
/// <summary>
/// �������� id
/// </summary>
/// <returns></returns>
int User::getId()
{
	return this->id;
}
/// <summary>
/// ���������� ��� ���� ������������
/// </summary>
/// <param name="userType"></param>
void User::setUserType(int userType)
{
	this->userType = userType;
}
/// <summary>
/// �������� ��� ���� ������������
/// </summary>
/// <returns></returns>
int User::getUserType()
{
	return this->userType;
}
/// <summary>
/// ���������� ��� ����������� ������������
/// </summary>
/// <param name="userRegister"></param>
void User::setUserRegister(int userRegister)
{
	this->userRegister = userRegister;
}
/// <summary>
/// �������� ��� ����������� ������������
/// </summary>
/// <returns></returns>
int User::getUserRegister()
{
	return this->userRegister;
}
/// <summary>
/// ���������� ������
/// </summary>
/// <param name="password"></param>
void User::setPassword(std::string password)
{
	this->password = password;
}
/// <summary>
/// �������� ������
/// </summary>
/// <returns></returns>
std::string User::getPassword()
{
	return this->password;
}
//����������
User::~User()
{

}

