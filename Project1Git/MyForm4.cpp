#include "MyForm4.h"

using namespace Project1Git;

/// <summary>
/// �������� ���� ����� ��� ����� �������������� ������: id, login (��� ��������������, ��������, ������)
/// </summary>
/// <param name="sender"></param>
/// <param name="e"></param>
/// <returns></returns>
System::Void MyForm4::MyForm4_Load(System::Object^ sender, System::EventArgs^ e)
{
	this->Location = Point(150, 150);				//������������ �����
	this->BackColor = System::Drawing::Color::Aqua;	//���� ���� �����
	this->button1->Text = "OK";						//������� ������ ��
	this->Text = "���� ������";						//�������� �����
	//�������� ������� �� ����� � ����������� �� ���������� ������: ���������, ��������������, �����
	if (*(this->editMode) == "del")
	{
		this->label1->Text = "������� id ������� ������ ��� ��������:";
	}
	if (*(this->editMode) == "upd")
	{
		this->label1->Text = "������� id ������� ������ ��� ��������������:";
	}
	if (*(this->editMode) == "search")
	{
		this->label1->Text = "������� login ������������:";
	}
	if (*(this->editMode) == "delCar")
	{
		this->label1->Text = "������� id ���� ��������:";
	}
	if (*(this->editMode) == "updCar")
	{
		this->label1->Text = "������� id ���� ��� ��������������:";
	}
}
/// <summary>
/// �������� �������������� ������ ��� ���������� ��������������, ��������, ������
/// </summary>
/// <param name="sender"></param>
/// <param name="e"></param>
/// <returns></returns>
System::Void MyForm4::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	//��� ������ �������� �� ����� ����� ������������
	if (*(this->editMode) == "search")
	{
		loginSearchUser = this->textBox1->Text;
		//MessageBox::Show("loginSearchUser : "+ loginSearchUser);
	}
	//��� �������� � �������������� ������������� �������� �������� id �� ����� 
	if ((*(this->editMode) == "del") || (*(this->editMode) == "upd"))
	{
		msclr::interop::marshal_context context;
		std::string idStr = context.marshal_as<std::string>(this->textBox1->Text);
		int id = std::stoi(idStr);
		this->idRowListUsers = id;
		//������� ����� � ������� � ������������
		Project1Git::MyForm3^ myForm3 = gcnew Project1Git::MyForm3();
		myForm3->editMode = this->editMode;				//�������� ����� (��������������, ��������)
		myForm3->idRowListUsers = this->idRowListUsers;	//�������� id ������
		this->Visible = false;							//������ ������� �����
		myForm3->ShowDialog();							//��������� ����� � ������� � ������������
	}
	//��� �������� � �������������� ����� �������� �������� id �� ����� 
	if ((*(this->editMode) == "delCar") || (*(this->editMode) == "updCar"))
	{
		msclr::interop::marshal_context context;
		std::string idStr = context.marshal_as<std::string>(this->textBox1->Text);
		int id = std::stoi(idStr);
		this->idRowCars = id;
		//������� ����� � ������� � ������
		Project1Git::MyForm5^ myForm5 = gcnew Project1Git::MyForm5();
		myForm5->editMode = this->editMode;		//�������� ����� (��������������, ��������)
		myForm5->idRowCars = this->idRowCars;	//�������� id ������
		this->Visible = false;					//������ ������� �����
		myForm5->ShowDialog();					//��������� ����� � ������� � ������������
	}
	this->Close();	//��������� ������� �����
}