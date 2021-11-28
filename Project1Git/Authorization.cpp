#include "Authorization.h"
#include "ListUsers.h"

using namespace Project1Git;

Authorization::Authorization()
{

}
Authorization::Authorization(std::string currentLogin, std::string currentPassword)
{
	this->currentLogin = currentLogin;
	this->currentPassword = currentPassword;
}
Authorization::~Authorization()
{

}
bool Authorization::checkCurrentUser()
{
	bool isRegistredUser = false;
	
	ListUsers *listUsers = new ListUsers();
	int sizeList = listUsers->getSize();
	for (int i = 0; i < sizeList; i++)
	{
		User user = listUsers->getUserByIndex(i);

		/*std::string t = "id=" + std::to_string(user.getId()) + "; log=" + user.getLogin();
		System::String^ tt = gcnew System::String(t.data());
		MessageBox::Show("tt : " + tt);*/

		std::string login = user.getLogin();
		std::string password = user.getPassword();
		if (login == currentLogin && password == currentPassword)
		{
			//проверяем зарегистрирован пользователь или нет
			int registered = user.getUserRegister();
			if (registered == 1)
			{
				isRegistredUser = true;
				this->currentUser = user;
				this->currentPassword = password;
			}
		}
	}

	return isRegistredUser;
}
User Authorization::getCurrentUser()
{
	return this->currentUser;
}
void Authorization::setCurrentUser(User user)
{
	this->currentUser = user;
}