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
	this->button2->Text = "�����";										//������� ������ Exit
	this->label1->Text = "������� ������ (��� ������ ������������)";	//������� �� �����
	this->label2->Text = "�����:";										//������� ���� ����� ������
	this->label3->Text = "������:";										//������� ���� ����� ������
}
/// <summary>
/// ������� �� ������ Sign up
/// </summary>
System::Void MyForm2::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	ListUsers *listUsers = new ListUsers();		//�������� ������ ������ �������������
	msclr::interop::marshal_context context;
	std::string login = context.marshal_as<std::string>(this->textBox2->Text);		//������� ����� �� ���� �����
	std::string password = context.marshal_as<std::string>(this->textBox3->Text);	//������� ������ �� ���� �����
	if (!validValuesMyForm2())
	{
		MessageBox::Show("�� ��� ���� ���������.");
		return;
	}
	int newId = listUsers->getNewId();			//��������� �������� ������ id ��� ������ ������������
	int id = newId;
	int userType = 2;							//��� ������ ������������ - ��� - ������������ (�� �������������)
	int userRegister = 0;						//������� - ������������ �� ���������������
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
/// <summary>
/// ����� ��������� ���������� ���� �����
/// </summary>
/// <returns></returns>
bool MyForm2::validValuesMyForm2()
{
	bool isValid = false;
	if (this->textBox2->Text->Length != 0)
	{
		if (this->textBox3->Text->Length != 0)
		{
			isValid = true;
		}
	}
	return isValid;
}
