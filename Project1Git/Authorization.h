#pragma once

#include "User.h"

namespace Project1Git
{
	/// <summary>
	/// ����� ��� �������� ������� �����������
	/// </summary>
	public class Authorization
	{
	private:
		std::string currentLogin;	//����� �������� ������������
		std::string currentPassword;//������ �������� ������������
		User currentUser;			//������ �������� ������������
	public:
		Authorization();						//�����������
		Authorization(std::string, std::string);//����������� � �����������
		bool checkCurrentUser();				//����� ��������� ������� ������ � ������������ (������, �����) � ������ �������������
		User getCurrentUser();					//����� ���������� �������� ������������
		void setCurrentUser(User);				//����� ������������� �������� ������������
		~Authorization();						//����������
	};
}
