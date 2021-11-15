#include "Authorization.h"
#include "ListUsers.h"

using namespace Project1Git;

Authorization::Authorization()
{

}
Authorization::Authorization(std::string currentLogin)
{
	this->currentLogin = currentLogin;
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

		std::string t = "id=" + std::to_string(user.getId()) + "; log=" + user.getLogin();
		System::String^ tt = gcnew System::String(t.data());
		MessageBox::Show("tt : " + tt);


		std::string login = user.getLogin();
		if (login == currentLogin)
		{
			isRegistredUser = true;
		}
	}

	

	return isRegistredUser;
}
User Authorization::getCurrentUser()
{
	return this->currentUser;
}