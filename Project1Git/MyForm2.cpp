#include <Windows.h>

#include "MyForm.h"
#include "MyForm1.h"
#include "MyForm2.h"

using namespace Project1Git;

/// <summary>
/// �������� ���� ����� ��� ������������ ����� �� ����������� ������ ������������
/// </summary>
System::Void MyForm2::MyForm2_Load(System::Object^ sender, System::EventArgs^ e)
{
	this->Location = Point(100, 100);									//������������ �����
	this->BackColor = System::Drawing::Color::Aqua;						//���� ���� �����
	this->button1->Text = "Sign up";									//������� ������ Sign up
	this->button2->Text = "Back";										//������� ������ Exit
	this->label1->Text = "������� ������ (��� ������ ������������)";	//������� �� �����
	this->label2->Text = "Login:";										//������� ���� ����� ������
	this->label3->Text = "Password:";									//������� ���� ����� ������
}
/// <summary>
/// ������� �� ������ Sign up
/// </summary>
System::Void MyForm2::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	ListUsers *listUsers = new ListUsers();		//�������� ������ ������ �������������
	int newId = listUsers->getNewId();			//��������� �������� ������ id ��� ������ ������������
	int id = newId;
	msclr::interop::marshal_context context;
	std::string login = context.marshal_as<std::string>(this->textBox2->Text);		//������� ����� �� ���� �����
	int userType = 2;							//��� ������ ������������ - ��� - ������������ (�� �������������)
	int userRegister = 0;						//������� - ������������ �� ���������������
	std::string password = context.marshal_as<std::string>(this->textBox3->Text);	//������� ������ �� ���� �����
	User user(id, login, userType, userRegister, password);	//������� ������ ������������ � ���������� ����������
	listUsers->addNewUser(user);				//������� ������ ������������ � ������ (� ����)
	MessageBox::Show("����� ������������ ��������� �� �����������.");
	this->Close();								//������� ������� �����
}
/// <summary>
/// ������� �� ������ exit
/// </summary>
System::Void MyForm2::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->Close();	//������� ������� �����
}
