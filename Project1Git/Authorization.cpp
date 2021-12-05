#include "Authorization.h"
#include "ListUsers.h"

using namespace Project1Git;

/// <summary>
/// �����������
/// </summary>
Authorization::Authorization()
{

}
/// <summary>
/// ����������� � �����������
/// </summary>
/// <param name="currentLogin"></param>
/// <param name="currentPassword"></param>
Authorization::Authorization(std::string currentLogin, std::string currentPassword)
{
	///////////////////////////////////////////////////////////////////////
	//System::String^ t1 = gcnew System::String(currentLogin.data());
	//System::String^ t2 = gcnew System::String(currentPassword.data());
	//MessageBox::Show("Authorization:" + t1 + ":" + t2);
	///////////////////////////////////////////////////////////////////////
	this->currentLogin = currentLogin;
	this->currentPassword = currentPassword;
}
/// <summary>
/// ����� ��������� ������� ������ � ������������ (������, �����) � ������ �������������
/// </summary>
/// <returns></returns>
bool Authorization::checkCurrentUser()
{
	bool isRegistredUser = false;
	ListUsers *listUsers = new ListUsers();	//������� ������ - ������ �������������
	int sizeList = listUsers->getSize();	//�������� ���-�� ������� � ����� �������������
	///////////////////////////////////////////////////////////////////////
	//System::String^ t = gcnew System::String(std::to_string(sizeList).data());
	//MessageBox::Show("Authorization:getSize():" + t);
	///////////////////////////////////////////////////////////////////////
	//�������� �� ���� ������� � ��������� ���������� ������ � ������
	for (int i = 0; i < sizeList; i++)
	{
		User user = listUsers->getUserByIndex(i);	//�������� id ������ � �����
		std::string login = user.getLogin();		//�������� ����� �� ������ � �����
		std::string password = user.getPassword();	//�������� ������ �� ������ � �����
		///////////////////////////////////////////////////////////////////////
		//System::String^ t1 = gcnew System::String(currentLogin.data());
		//System::String^ t2 = gcnew System::String(currentPassword.data());
		//System::String^ t3 = gcnew System::String(login.data());
		//System::String^ t4 = gcnew System::String(password.data());
		//MessageBox::Show("Authorization:" + t1 + ":" + t2 + "\n" + t3 + ":" + t4);
		///////////////////////////////////////////////////////////////////////
		//��������� ���������� ������ � ������ �������� ������������ � ������ � �����
		if (login == currentLogin && password == currentPassword)
		{
			//��������� ��������������� ������������ ��� ���
			int registered = user.getUserRegister();
			//���� ������������ ���������������, �� ���������� ������������, �����, ������
			if (registered == 1)
			{
				isRegistredUser = true;
				this->currentUser = user;
				this->currentLogin = login;
				this->currentPassword = password;
			}
		}
	}
	return isRegistredUser;
}
/// <summary>
/// ����� ���������� �������� ������������
/// </summary>
/// <returns></returns>
User Authorization::getCurrentUser()
{
	return this->currentUser;
}
/// <summary>
/// ����� ������������� �������� ������������
/// </summary>
/// <param name="user"></param>
void Authorization::setCurrentUser(User user)
{
	this->currentUser = user;
}
/// <summary>
/// ����������
/// </summary>
Authorization::~Authorization()
{

}