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
	//�������� �� ���� ������� � ��������� ���������� ������ � ������
	for (int i = 0; i < sizeList; i++)
	{
		User user = listUsers->getUserByIndex(listUsers->getUserIndex(i));	//�������� id ������ � �����
		std::string login = user.getLogin();		//�������� ����� �� ������ � �����
		std::string password = user.getPassword();	//�������� ������ �� ������ � �����
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
				break;
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