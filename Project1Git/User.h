#pragma once

#include <string>

namespace Project1Git 
{
	/// <summary>
	/// ����� ��� �������� ������� - ������������
	/// </summary>
	public class User
	{
	private:
		int id;					//id ������������
		std::string login;		//����� ������������
		int userType;			//��� ���� ������������
		int userRegister;		//��� ����������� ������������
		std::string password;	//������ �����������
	public:
		User();											//�����������
		User(int, std::string, int, int, std::string);	//����������� � �����������
		void setLogin(std::string);						//���������� �����
		std::string getLogin();							//�������� �����
		void setId(int);								//���������� id
		int getId();									//�������� id
		void setUserType(int);							//���������� ��� ���� ������������
		int getUserType();								//�������� ��� ���� ������������
		void setUserRegister(int);						//���������� ��� ����������� ������������
		int getUserRegister();							//�������� ��� ����������� ������������
		void setPassword(std::string);					//���������� ������
		std::string getPassword();						//�������� ������
		~User();										//����������
	};
}