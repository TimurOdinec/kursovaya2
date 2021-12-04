#pragma once

#include "User.h"

namespace Project1Git
{
	using namespace System::Windows::Forms;
	/// <summary>
	/// ����� ��� �������� ������� - ������ �������������
	/// </summary>
	public class ListUsers
	{
	private:
		int size;	//���-�� ������� � ������ �������������
		User *user;	//��������� �� ������� - ������������

	public:
		ListUsers();						//�����������
		int getSize();						//�������� ���-�� ������� � ������ ������������� (� �����)
		User getUserByLogin(std::string);	//�������� ������-������������ �� ����������� ������
		int getUserIndex(int);				//�������� id ������������ �� ����������� ������� (������ ������-������ � �����)
		User getUserByIndex(int);			//�������� ������-������������ �� ����������� index
		int getNewId();						//�������� ����� id ��� ���������� ������������ (��������� �� ������� ������������ id)
		void addNewUser(User);				//�������� ������ ������������ � ������ (���� ������ �� �������������)
		void deleteUserById(int);			//������� ������������ �� ������ �� id (�� �����)
		void updateUser(User);				//������������� ������������ (������� ������� ��� �������� ������)
		~ListUsers();						//����������
	};
}
