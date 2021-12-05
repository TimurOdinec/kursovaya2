#include <Windows.h>
#include <msclr\marshal_cppstd.h>

#include "MyForm.h"
#include "MyForm1.h"
#include "MyForm2.h"
#include "User.h"
#include "ListUsers.h"
#include "Authorization.h"

using namespace Project1Git;

/// <summary>
/// �������� ���� ����� � ������������
/// </summary>
System::Void MyForm1::MyForm1_Load(System::Object^ sender, System::EventArgs^ e)
{
	this->Location = Point(100, 100);				//������������ �����
	this->BackColor = System::Drawing::Color::Aqua;	//���� ���� �����
	this->Text = "����������� ������������";		//�������� �����
	this->button1->Text = "Sign in";				//������� ������ Sign in
	this->button2->Text = "Sign up";				//������� ������ Sign up
	this->button3->Text = "Exit";					//������� ������ Exit
	this->label1->Text = "�����:";					//������� ���� ����� ������
	this->label2->Text = "������:";					//������� ���� ����� ������
	login = "";										//����� ��� �������� �����
	password = "";									//������ ��� �������� �����
}
/// <summary>
/// ������� �� ������ sign in
/// </summary>
System::Void MyForm1::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	login = this->textBox1->Text;		//���������� � ����� ����� �� ���� textBox1
	password = this->textBox2->Text;	//���������� � ������ ����� �� ���� textBox2
	checkUser(login, password);			//�������� �������� ������������ (������� ������ � ����/�����)
	this->Close();						//��������� ������� �����
}
/// <summary>
/// ����� �������� �������� ������������ �� ���������� ������ � ������
/// </summary>
/// <param name="login"></param>
/// <param name="password"></param>
void MyForm1::checkUser(System::String^ login, System::String^ password)
{
	msclr::interop::marshal_context context;	//����������� ����� marshal_context ��� �������������� ������, ���������� ���������.
	std::string loginString = context.marshal_as<std::string>(login);		//��������� login �� ���� � ����������
	std::string passwordString = context.marshal_as<std::string>(password);	//��������� password �� ���� � ����������
	///////////////////////////////////////////////////////////////////////
	//System::String^ t1 = gcnew System::String(loginString.data());
	//System::String^ t2 = gcnew System::String(passwordString.data());
	//MessageBox::Show("MyForm1:" + t1 + ":" + t2);
	///////////////////////////////////////////////////////////////////////					
	//������� ������ �����������, �������� ��������� �� ����� ����� � ������
	Authorization authorization(loginString, passwordString);
	//��������� ���� �� ������ �������� ������������ � ����� �������������
	if (authorization.checkCurrentUser())
	{
		//�������� �������� ������������ (��� ������)
		User currentUser = authorization.getCurrentUser();
		//���������� � �������� ������ ������ �� �������� ������������
		currentLogin = gcnew System::String(currentUser.getLogin().data());
		currentType = currentUser.getUserType();
	}
	else
	{
		//���� ������ ������������ �� ������� ������� ���������
		MessageBox::Show("���� ������� ������ �� ����������������.");
	}
}
/// <summary>
/// ������� �� ������ sign up
/// </summary>
System::Void MyForm1::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	Project1Git::MyForm2^ myForm2 = gcnew Project1Git::MyForm2();
	myForm2->ShowDialog();
}
/// <summary>
/// ������� �� ������ exit
/// </summary>
System::Void MyForm1::button3_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->Close();
}