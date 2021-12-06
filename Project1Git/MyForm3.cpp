#include "MyForm3.h"

using namespace Project1Git;

/// <summary>
/// �������� ���� ����� ��� ����������, ��������������, ��������
/// </summary>
System::Void MyForm3::MyForm3_Load(System::Object^ sender, System::EventArgs^ e)
{
	this->Location = Point(100, 100);					//������������ �����
	this->BackColor = System::Drawing::Color::Aqua;		//���� ���� �����
	this->label1->Text = "id:";							//������� ���� id 
	this->label2->Text = "�����:";						//������� ���� ����� 
	this->label3->Text = "������:";						//������� ���� ������ 
	this->label4->Text = "��� ������������:";			//������� ���� ��� �������. 
	this->label5->Text = "����������� ������������:";   //������� ���� ���������� �������. 
	this->textBox2->Select();							//����� �� ���� �����
	this->button1->Text = "��������";					//������� ������ ��������
	this->button2->Text = "�������";					//������� ������ �������
	this->comboBox1->Items->Add("�������������");		//���������� ����������� ������ ���� ������������
	this->comboBox1->Items->Add("������������");		//���������� ����������� ������ ���� ������������
	this->comboBox2->Items->Add("���������������");		//���������� ����������� ������ ��������� �����������
	this->comboBox2->Items->Add("�� ���������������");	//���������� ����������� ������ ��������� �����������
	//���� ����� ������ � ������� - ���������� add
	if (*(this->editMode) == "add")
	{
		ListUsers* listUsers = new ListUsers();	//�������� ������ ������ �������������
		int newId = listUsers->getNewId();		//��������� �������� ������ id ��� ������ ������������
		this->Text = "���������� ������������"; //�������� �����
		this->textBox1->Text = gcnew String(std::to_string(newId).data());	//������ ����� id �� ���� ����� 
		this->textBox1->ReadOnly = true;		//������� id �� �������������
	}
	//���� ����� ������ � ������� - �������� del
	if (*(this->editMode) == "del")
	{
		this->button1->Text = "�������";		//������� ������� �� ������
		ListUsers* listUsers = new ListUsers();	//�������� ������ ������ �������������
		User user = listUsers->getUserByIndex(this->idRowListUsers);				//������� ������ user �� id
		this->Text = "�������� ������������";	//�������� �����
		this->textBox1->Text = gcnew String(std::to_string(user.getId()).data());	//��������� ���� id
		this->textBox2->Text = gcnew String((user.getLogin()).data());				//��������� ���� login
		this->textBox3->Text = gcnew String((user.getPassword()).data());			//��������� ���� password
		int userType = user.getUserType();		//������� ��� ���� ������������
		if (userType == 1)						//������� ����������� ���� ������������
		{
			this->comboBox1->Text = "�������������";
		}
		if (userType == 2)
		{
			this->comboBox1->Text = "������������";
		}
		int userRegister = user.getUserRegister();	//������� ��� ��������� ���������� ������������
		if (userRegister == 1)						//�������� ����������� ���� ����������� ������������
		{
			this->comboBox2->Text = "���������������";
		}
		if (userRegister == 0)
		{
			this->comboBox2->Text = "�� ���������������";
		}
		this->textBox1->ReadOnly = true;		//������� id �� �������������
		this->textBox2->ReadOnly = true;		//������� login �� �������������
		this->textBox3->ReadOnly = true;		//������� password �� �������������
		this->comboBox1->Enabled = false;		//������� type �� �������������
		this->comboBox2->Enabled = false;		//������� register �� �������������
	}
	//���� ����� ������ � ������� - �������������� upd
	if (*(this->editMode) == "upd")
	{
		this->button1->Text = "�������������";		//������� ������� �� ������
		ListUsers* listUsers = new ListUsers();		//�������� ������ ������ �������������
		User user = listUsers->getUserByIndex(this->idRowListUsers);				//������� ������ user �� id
		this->Text = "�������������� ������������"; //�������� �����
		this->textBox1->Text = gcnew String(std::to_string(user.getId()).data());	//��������� ���� id
		this->textBox2->Text = gcnew String((user.getLogin()).data());				//��������� ���� login
		this->textBox3->Text = gcnew String((user.getPassword()).data());			//��������� ���� password
		int userType = user.getUserType();			//������� ��� ���� ������������
		if (userType == 1)							//������� ����������� ���� ������������
		{
			this->comboBox1->Text = "�������������";
		}
		if (userType == 2)
		{
			this->comboBox1->Text = "������������";
		}
		int userRegister = user.getUserRegister();	//������� ��� ��������� ���������� ������������
		if (userRegister == 1)						//�������� ����������� ���� ����������� ������������
		{
			this->comboBox2->Text = "���������������";
		}
		if (userRegister == 0)
		{
			this->comboBox2->Text = "�� ���������������";
		}
		this->textBox1->ReadOnly = true;		//������� id �� �������������
	}
}
/// <summary>
/// ����� ������: ���������� �������������� ��������
/// </summary>
System::Void MyForm3::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	msclr::interop::marshal_context context;
	std::string idStr = context.marshal_as<std::string>(this->textBox1->Text);			//������� id �� ���� �����
	int id = std::stoi(idStr);	//�� ������ � �����
	std::string login = context.marshal_as<std::string>(this->textBox2->Text);			//������� ����� �� ���� �����
	std::string password = context.marshal_as<std::string>(this->textBox3->Text);		//������� ������ �� ���� �����
	std::string userTypeStr = context.marshal_as<std::string>(this->comboBox1->Text);	//������� ��� ������������ �� ���� �����
	std::string userRegisterStr = context.marshal_as<std::string>(this->comboBox2->Text);//������� ��� ����������� ������������ �� ���� �����

	if (!validValuesMyForm3())
	{
		MessageBox::Show("�� ��� ���� ���������.");
		return;
	}
	
	int userType = 0;
	if (userTypeStr == "�������������")			//������� ����������� ���� ������������
	{
		userType = 1;
	}
	else
	{
		if (userTypeStr == "������������")
		{
			userType = 2;
		}
	}
	int userRegister = 0;
	if (userRegisterStr == "���������������") // �������� ����������� ���� ����������� ������������
	{
		userRegister = 1;
	}
	else
	{
		if (userRegisterStr == "�� ���������������")
		{
			userRegister = 0;
		}
	}
	//���� ������ ����� ����������
	if (*(this->editMode) == "add")
	{
		//MessageBox::Show("��������");
		User user(id, login, userType, userRegister, password);	//������ ������ ������������ ��������� ������ �� �����
		ListUsers* listUsers = new ListUsers();
		listUsers->addNewUser(user);	//��������� ������������ � ������ (� ����)
	}
	//���� ������ ����� ��������
	if (*(this->editMode) == "del")
	{
		//MessageBox::Show("�������");
		User user(id, login, userType, userRegister, password);	//������ ������ ������������ ��������� ������ �� �����
		ListUsers* listUsers = new ListUsers();
		listUsers->deleteUserById(id);	//������� ������������ �� ������ (�� �����)
	}
	//���� ������ ����� ��������������
	if (*(this->editMode) == "upd")
	{
		//MessageBox::Show("�������������");
		User user(id, login, userType, userRegister, password);	//������ ������ ������������ ��������� ������ �� �����
		ListUsers* listUsers = new ListUsers();
		listUsers->updateUser(user);	//����������� ������������ �� ������ (�� �����)
	}
	this->Close();	//��������� �����
}
/// <summary>
/// ������� �� ������ exit
/// </summary>
System::Void MyForm3::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->Close();	//������� ������� �����
}
/// <summary>
/// ����� ��������� ���������� ���� �����
/// </summary>
/// <returns></returns>
bool MyForm3::validValuesMyForm3()
{
	bool isValid = false;
	if (this->textBox1->Text->Length != 0)
	{
		if (this->textBox2->Text->Length != 0)
		{
			if (this->textBox3->Text->Length != 0)
			{
				if (this->comboBox1->Text->Length != 0)
				{
					if (this->comboBox2->Text->Length != 0)
					{
						isValid = true;
					}
				}
			}
		}
	}
	return isValid;
}


