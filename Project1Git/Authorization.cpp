#include "Authorization.h"
#include "ListUsers.h"

using namespace Project1Git;

/// <summary>
/// конструктор
/// </summary>
Authorization::Authorization()
{

}
/// <summary>
/// конструктор с параметрами
/// </summary>
/// <param name="currentLogin"></param>
/// <param name="currentPassword"></param>
Authorization::Authorization(std::string currentLogin, std::string currentPassword)
{
	this->currentLogin = currentLogin;
	this->currentPassword = currentPassword;
}
/// <summary>
/// метод проверяет наличие записи о пользователе (пароль, логин) в списке пользователей
/// </summary>
/// <returns></returns>
bool Authorization::checkCurrentUser()
{
	bool isRegistredUser = false;
	ListUsers *listUsers = new ListUsers();	//создаем объект - список пользователей
	int sizeList = listUsers->getSize();	//получаем кол-во записей в файле пользователей
	//проходим по всем записям и проверяем совпадение логина и пароля
	for (int i = 0; i < sizeList; i++)
	{
		User user = listUsers->getUserByIndex(listUsers->getUserIndex(i));	//получаем id записи в файле
		std::string login = user.getLogin();		//получаем логин из записи в файле
		std::string password = user.getPassword();	//получаем пароль из записи в файле
		//проверяем совпадение логина и пароля текущего пользователя и записи в файле
		if (login == currentLogin && password == currentPassword)
		{
			//проверяем зарегистрирован пользователь или нет
			int registered = user.getUserRegister();
			//если пользователь зарегистрирован, то запоминаем пользователя, логин, пароль
			if (registered == 1)
			{
				isRegistredUser = true;
				this->currentUser = user;
				this->currentLogin = login;
				this->currentPassword = password;
				break;
			}
		}
	}
	return isRegistredUser;
}
/// <summary>
/// метод возвращает текущего пользователя
/// </summary>
/// <returns></returns>
User Authorization::getCurrentUser()
{
	return this->currentUser;
}
/// <summary>
/// метод устанавливает текущего пользователя
/// </summary>
/// <param name="user"></param>
void Authorization::setCurrentUser(User user)
{
	this->currentUser = user;
}
/// <summary>
/// деструктор
/// </summary>
Authorization::~Authorization()
{

}