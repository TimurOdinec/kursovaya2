#include <Windows.h>

#include "MyForm.h"

using namespace Project1Git;

/// <summary>
/// ����� ����� � ���������
/// </summary>
/// <param name=""></param>
/// <param name=""></param>
/// <param name=""></param>
/// <param name=""></param>
/// <returns></returns>
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm);

	return 0;
}

/// <summary>
/// ����� ��������� ���� ��������������
/// </summary>
/// <returns></returns>
System::Void MyForm::CreateMenuAdministrator()
{
	
	this->toolStripMenuItem1->Text = "���� ��������������";
	this->p1ToolStripMenuItem->Text = "������ � �������� �������";
	this->p11ToolStripMenuItem->Text = "�������� ������� ������";
	this->p12ToolStripMenuItem->Text = "���������� ������� ������";
	this->p13ToolStripMenuItem->Text = "�������� ������� ������";
	this->p14ToolStripMenuItem->Text = "�������������� ������� ������";
	this->p15ToolStripMenuItem->Text = "����� ������� ������";
	this->p151ToolStripMenuItem->Text = "����� �� ������";
	this->p152ToolStripMenuItem->Text = "����� �������������������� �������������";
	this->p1ToolStripMenuItem->Available = true;
	this->p11ToolStripMenuItem->Available = true;
	this->p12ToolStripMenuItem->Available = true;
	this->p13ToolStripMenuItem->Available = true;
	this->p14ToolStripMenuItem->Available = true;
	this->p15ToolStripMenuItem->Available = true;

	this->p2ToolStripMenuItem->Text = "������ � ������� �� ���������";
	this->p21ToolStripMenuItem->Text = "�������� ������";
	this->p22ToolStripMenuItem->Text = "���������� ������";
	this->p23ToolStripMenuItem->Text = "�������� ������";
	this->p24ToolStripMenuItem->Text = "�������������� ������";
	this->p25ToolStripMenuItem->Text = "����� ������";
	this->p251ToolStripMenuItem->Text = "����� ��������� �����";
	this->p252ToolStripMenuItem->Text = "����� ������� �����";
	this->p253ToolStripMenuItem->Text = "����� ������������� �����";
	this->p254ToolStripMenuItem->Text = "����� ��������� �����";
	this->p26ToolStripMenuItem->Text = "���������� ������";
	this->p261ToolStripMenuItem->Text = "���������� �� ��������� �����";
	this->p262ToolStripMenuItem->Text = "���������� �� ���� �����";
	this->p263ToolStripMenuItem->Text = "���������� �� ����������������";
	this->p3ToolStripMenuItem->Text = "������� ������������";
	this->p4ToolStripMenuItem->Text = "�����";
	this->p22ToolStripMenuItem->Available = true;
	this->p23ToolStripMenuItem->Available = true;
	this->p24ToolStripMenuItem->Available = true;
}
/// <summary>
/// ����� ��������� ���� ������������
/// </summary>
/// <returns></returns>
System::Void MyForm::CreateMenuUser()
{
	this->toolStripMenuItem1->Text = "���� ������������";
	this->p1ToolStripMenuItem->Available = false;
	this->p11ToolStripMenuItem->Available = false;
	this->p12ToolStripMenuItem->Available = false;
	this->p13ToolStripMenuItem->Available = false;
	this->p14ToolStripMenuItem->Available = false;
	this->p15ToolStripMenuItem->Available = false;

	this->p2ToolStripMenuItem->Text = "������ � ������� �� ���������";
	this->p21ToolStripMenuItem->Text = "�������� ������";
	this->p22ToolStripMenuItem->Available = false;
	this->p23ToolStripMenuItem->Available = false;
	this->p24ToolStripMenuItem->Available = false;
	this->p25ToolStripMenuItem->Text = "����� ������";
	this->p251ToolStripMenuItem->Text = "����� ��������� �����";
	this->p252ToolStripMenuItem->Text = "����� ������� �����";
	this->p253ToolStripMenuItem->Text = "����� ������������� �����";
	this->p254ToolStripMenuItem->Text = "����� ��������� �����";
	this->p26ToolStripMenuItem->Text = "���������� ������";
	this->p261ToolStripMenuItem->Text = "���������� �� ��������� �����";
	this->p262ToolStripMenuItem->Text = "���������� �� ���� �����";
	this->p263ToolStripMenuItem->Text = "���������� �� ����������������";
	this->p3ToolStripMenuItem->Text = "������� ������������";
	this->p4ToolStripMenuItem->Text = "�����";
}
/// <summary>
/// ����� ������� grid ������� ������
/// </summary>
/// <returns></returns>
System::Void MyForm::DataGridView1Clear()
{
	this->dataGridView1->Rows->Clear();
	this->dataGridView1->Columns->Clear();
	this->dataGridView1->Visible = true;
}
/// <summary>
/// ����� ������������ �������� �������� ��� ������ ������ � �������������
/// </summary>
/// <returns></returns>
System::Void MyForm::DataGridViewTextBoxColumnAddUsers()
{
	//������� � �������� ������� � ������������ ����������
	DataGridViewTextBoxColumn^ colFullName = gcnew DataGridViewTextBoxColumn;
	colFullName->Name = "id";
	this->dataGridView1->Columns->Add(colFullName);
	DataGridViewTextBoxColumn^ colFullName1 = gcnew DataGridViewTextBoxColumn;
	colFullName1->Name = "Login";
	this->dataGridView1->Columns->Add(colFullName1);
	DataGridViewTextBoxColumn^ colFullName2 = gcnew DataGridViewTextBoxColumn;
	colFullName2->Name = "User type";
	this->dataGridView1->Columns->Add(colFullName2);
	DataGridViewTextBoxColumn^ colFullName3 = gcnew DataGridViewTextBoxColumn;
	colFullName3->Name = "User registered";
	this->dataGridView1->Columns->Add(colFullName3);
	DataGridViewTextBoxColumn^ colFullName4 = gcnew DataGridViewTextBoxColumn;
	colFullName4->Name = "Password";
	this->dataGridView1->Columns->Add(colFullName4);
}
/// <summary>
/// ����� ������������ �������� �������� ��� ������ ������ � �����������
/// </summary>
/// <returns></returns>
System::Void MyForm::DataGridViewTextBoxColumnAddCars()
{
	//������� � �������� ������� � ������������ ����������
	DataGridViewTextBoxColumn^ colFullName = gcnew DataGridViewTextBoxColumn;
	colFullName->Name = "id";
	this->dataGridView1->Columns->Add(colFullName);
	DataGridViewTextBoxColumn^ colFullName1 = gcnew DataGridViewTextBoxColumn;
	colFullName1->Name = "conditionCar";
	this->dataGridView1->Columns->Add(colFullName1);
	DataGridViewTextBoxColumn^ colFullName2 = gcnew DataGridViewTextBoxColumn;
	colFullName2->Name = "carType";
	this->dataGridView1->Columns->Add(colFullName2);
	DataGridViewTextBoxColumn^ colFullName3 = gcnew DataGridViewTextBoxColumn;
	colFullName3->Name = "capacityCar";
	this->dataGridView1->Columns->Add(colFullName3);
}
/// <summary>
/// ����� ���������� �� ���� ������������ ���� ������������ ��� �������
/// </summary>
/// <param name="userTypeStr"></param>
/// <returns></returns>
System::String^ MyForm::GetNameTypeByCode(int userTypeStr)
{
	System::String^ result = "";
	if (userTypeStr == 1)
	{
		result = "�������������";
	}
	else
	{
		if (userTypeStr == 2)
		{
			result = "������������";
		}
	}
	return result;
}
/// <summary>
/// ����� ���������� �� ���� ������������ ��������� ����������� ������������ ��� �������
/// </summary>
/// <param name="userRegisterStr"></param>
/// <returns></returns>
System::String^ MyForm::GetNameRegisterByCode(int userRegisterStr)
{
	System::String^ result = "";
	if (userRegisterStr == 1)
	{
		result = "���������������";
	}
	else
	{
		if (userRegisterStr == 0)
		{
			result = "�� ���������������";
		}
	}
	return result;
}
/// <summary>
/// ����� ���������� �� ���� ������������ ��������� ������ ��� �������
/// </summary>
/// <param name="conditionCar"></param>
/// <returns></returns>
System::String^ MyForm::GetNameConditionByCode(int conditionCar)
{
	System::String^ result = "";
	//� �������, �������, ��������, ������
	if (conditionCar == 1)
	{
		result = "� �������";
	}
	else
	{
		if (conditionCar == 2)
		{
			result = "�������";
		}
		else
		{
			if (conditionCar == 3)
			{
				result = "��������";
			}
			else
			{
				if (conditionCar == 4)
				{
					result = "������";
				}
			}
		}
	}
	return result;
}
/// <summary>
/// ����� ������ � ����������� ��� �� ����������� ��������� - ��������� 
/// </summary>
/// <param name="typeConditionCar"></param>
void MyForm::FindDataCar(std::string typeConditionCar)
{
	Carpark* carpark = new Carpark();
	int sizeList = carpark->getSize();
	for (int i = 0; i < sizeList; i++)
	{
		int index = carpark->getCarIndex(i);
		Car car = carpark->getCarByIndex(index);

		System::String^ id = gcnew System::String(std::to_string(car.getId()).data());
		int conditionCar = car.getConditionCar();
		System::String^ conditionCarStr = GetNameConditionByCode(conditionCar);
		System::String^ carType = gcnew System::String(car.getTypeCar().data());
		System::String^ capacityCar = gcnew System::String(std::to_string(car.getCapacityCar()).data());
		array<String^>^ carRecord = { id, conditionCarStr, carType, capacityCar };
		if (typeConditionCar == "decommissioned�ar")
		{
			if (conditionCar == 2)
			{
				this->dataGridView1->Rows->Add(carRecord);
			}
		}
		if (typeConditionCar == "repaired�ar")
		{
			if (conditionCar == 1)
			{
				this->dataGridView1->Rows->Add(carRecord);
			}
		}
		if (typeConditionCar == "busy�ar")
		{
			if (conditionCar == 4)
			{
				this->dataGridView1->Rows->Add(carRecord);
			}
		}
		if (typeConditionCar == "free�ar")
		{
			if (conditionCar == 3)
			{
				this->dataGridView1->Rows->Add(carRecord);
			}
		}
	}
}
/// <summary>
/// ����� ��������� ������ ������ ��� ���� �� ����������� ��������� (���������, ����, ����������������)
/// </summary>
/// <param name="nameSorted"></param>
void MyForm::DataGridViewRowsAdd(std::string nameSorted)
{
	Carpark* carpark = new Carpark();
	if (nameSorted == "sortByConditionCar")
	{
		carpark->sortByConditionCar();
	}
	if (nameSorted == "sortByTypeCar")
	{
		carpark->sortByTypeCar();
	}
	if (nameSorted == "sortByCapacityCar")
	{
		carpark->sortByCapacityCar();
	}
	int sizeList = carpark->getSize();
	for (int i = 0; i < sizeList; i++)
	{
		int index = carpark->getCarIndex(i);
		Car car = carpark->getCarByIndex(index);
		System::String^ id = gcnew System::String(std::to_string(car.getId()).data());
		int conditionCar = car.getConditionCar();
		System::String^ conditionCarStr = GetNameConditionByCode(conditionCar);
		System::String^ carType = gcnew System::String(car.getTypeCar().data());
		System::String^ capacityCar = gcnew System::String(std::to_string(car.getCapacityCar()).data());
		array<String^>^ carRecord = { id, conditionCarStr, carType, capacityCar };
		this->dataGridView1->Rows->Add(carRecord);
	}
}
/// <summary>
/// �������� �������� �����
/// </summary>
System::Void MyForm::MyForm_Load(System::Object^ sender, System::EventArgs^ e)
{
	this->Location = Point(20, 20);										//������� ���� �����
	this->BackColor = System::Drawing::Color::FromArgb(60, 160, 208);	//���� ���� �����
	this->Text = "��������";											//�������� �����
	this->button3->Text = "�����";										//�������� ������
	this->dataGridView1->Visible = false;								//������ �������
	//�������� ����� ����� �����������
	Project1Git::MyForm1^ myForm1 = gcnew Project1Git::MyForm1();
	myForm1->ShowDialog();	//�������� ������ ����� �����������
	//��������� ���� �� ������� ������ � ���� login
	if ((myForm1->login)->Length == 0)
	{
		this->label1->Text = "����������� �� ������";
		this->Close();
	}
	else
	{
		this->label1->Text = "����� ����������!  " + (myForm1->login);
		System::String^ test = myForm1->currentLogin;
		msclr::interop::marshal_context context;
		std::string loginTest = context.marshal_as<std::string>(test);

		int currentTypeTest = myForm1->currentType;
		if (currentTypeTest == 1)
		{
			CreateMenuAdministrator();
		}
		else
		{
			if (currentTypeTest == 2)
			{
				CreateMenuUser();
			}
			else
			{
				MessageBox::Show("�� �� ��������������.");
				myForm1->ShowDialog();	//�������� ������ ����� �����������
			}
		}
	}
}
/// <summary>
/// ����� � ���� ����������� (����� ���� "������� ������������")
/// </summary>
System::Void  MyForm::p3ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->SetVisibleCore(false);	//������� �����
	//�������� ����� ����� �����������
	Project1Git::MyForm1^ myForm1 = gcnew Project1Git::MyForm1();
	myForm1->ShowDialog();			//�������� ������ ����� �����������
	this->SetVisibleCore(true);		//������� �����
	int currentTypeTest = myForm1->currentType;
	DataGridView1Clear();

	this->label1->Text = "����� ����������!  " + (myForm1->login);
	System::String^ test = myForm1->currentLogin;
	msclr::interop::marshal_context context;
	std::string loginTest = context.marshal_as<std::string>(test);

	if (currentTypeTest == 1)
	{
		CreateMenuAdministrator();
	}
	else
	{
		if (currentTypeTest == 2)
		{
			CreateMenuUser();
		}
		else
		{
			MessageBox::Show("�� �� ��������������.");
			myForm1->ShowDialog();	//�������� ������ ����� �����������
		}
	}
}
/// <summary>
/// �������� ������� �������
/// </summary>
System::Void  MyForm::p11ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	//MessageBox::Show("�������� ��.������.");
	DataGridView1Clear();
	DataGridViewTextBoxColumnAddUsers();
	
	//����� ������ �������������
	ListUsers* listUsers = new ListUsers();
	int sizeList = listUsers->getSize();
	for (int i = 0; i < sizeList; i++)
	{
		int index = listUsers->getUserIndex(i);
		User user = listUsers->getUserByIndex(index);
		
		System::String^ id = gcnew System::String(std::to_string(user.getId()).data());
		System::String^ login = gcnew System::String(user.getLogin().data());
		int userTypeStr = user.getUserType();
		System::String^ userType = GetNameTypeByCode(userTypeStr);
		int userRegisterStr = user.getUserRegister();
		System::String^ userRegister = GetNameRegisterByCode(userRegisterStr);
		System::String^ password = gcnew System::String(user.getPassword().data());
		array<String^>^ userRecord = { id, login, userType, userRegister, password };
		this->dataGridView1->Rows->Add(userRecord);
	}
}
/// <summary>
/// ���������� ��.������
/// </summary>
System::Void  MyForm::p12ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	MessageBox::Show("���������� ��.������.");
	Project1Git::MyForm3^ myForm3 = gcnew Project1Git::MyForm3();
	std::string editMode = "add";
	myForm3->editMode = &editMode;
	myForm3->ShowDialog();	//�������� ������ ����� �����������
	DataGridView1Clear();
}
/// <summary>
/// �������� ��.������
/// </summary>
System::Void  MyForm::p13ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	MessageBox::Show("�������� ��.������.");
	Project1Git::MyForm4^ myForm4 = gcnew Project1Git::MyForm4();
	std::string editMode = "del";
	myForm4->editMode = &editMode;
	myForm4->ShowDialog();	//�������� ������ ����� �������������
	DataGridView1Clear();
}
/// <summary>
/// �������������� ��.������
/// </summary>
System::Void  MyForm::p14ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	MessageBox::Show("�������������� ��.������.");
	Project1Git::MyForm4^ myForm4 = gcnew Project1Git::MyForm4();
	std::string editMode = "upd";
	myForm4->editMode = &editMode;
	myForm4->ShowDialog();	//�������� ������ ����� �������������
	DataGridView1Clear();
}
/// <summary>
/// ����� ��.������ �� ������
/// </summary>
System::Void  MyForm::p151ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	MessageBox::Show("����� �� ������");
	Project1Git::MyForm4^ myForm4 = gcnew Project1Git::MyForm4();
	std::string editMode = "search";
	myForm4->editMode = &editMode;
	myForm4->ShowDialog();	//�������� ������ ����� �������������
	DataGridView1Clear();

	System::String^ loginSearchUser = myForm4->loginSearchUser;
	msclr::interop::marshal_context context;
	std::string loginUserSearch = context.marshal_as<std::string>(loginSearchUser);
	MessageBox::Show("loginSearchUser:" + loginSearchUser);

	ListUsers* listUsers = new ListUsers();
	User user = listUsers->getUserByLogin(loginUserSearch);
	if (user.getId() == -1)
	{
		MessageBox::Show("User not found");
	}
	else
	{
		MessageBox::Show("testing2");
		DataGridViewTextBoxColumnAddUsers();
		
		System::String^ id = gcnew System::String(std::to_string(user.getId()).data());
		System::String^ login = gcnew System::String(user.getLogin().data());
		//System::String^ userType = gcnew System::String(std::to_string(user.getUserType()).data());
		int userTypeStr = user.getUserType();
		System::String^ userType = GetNameTypeByCode(userTypeStr);
		int userRegisterStr = user.getUserRegister();
		System::String^ userRegister = GetNameRegisterByCode(userRegisterStr);
		System::String^ password = gcnew System::String(user.getPassword().data());
		array<String^>^ userRecord = { id, login, userType, userRegister, password };
		this->dataGridView1->Rows->Add(userRecord);
	}
}
/// <summary>
/// ����� �������.�������������
/// </summary>
System::Void  MyForm::p152ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	MessageBox::Show("����� �����������.�������������");
	DataGridView1Clear();
	DataGridViewTextBoxColumnAddUsers();
	
	//����� ������ �������������
	ListUsers* listUsers = new ListUsers();
	int sizeList = listUsers->getSize();
	for (int i = 0; i < sizeList; i++)
	{
		int index = listUsers->getUserIndex(i);
		User user = listUsers->getUserByIndex(index);

		System::String^ id = gcnew System::String(std::to_string(user.getId()).data());
		System::String^ login = gcnew System::String(user.getLogin().data());
		int userTypeStr = user.getUserType();
		System::String^ userType = GetNameTypeByCode(userTypeStr);
		int userRegisterStr = user.getUserRegister();
		System::String^ userRegister = GetNameRegisterByCode(userRegisterStr);
		System::String^ password = gcnew System::String(user.getPassword().data());
		array<String^>^ userRecord = { id, login, userType, userRegister, password };
		if (userRegisterStr == 0)
		{
			this->dataGridView1->Rows->Add(userRecord);
		}
	}
}
/// <summary>
/// �������� ���������
/// </summary>
System::Void  MyForm::p21ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	DataGridView1Clear();
	DataGridViewTextBoxColumnAddCars();

	//����� ������ auto
	Carpark* carpark = new Carpark();
	int sizeList = carpark->getSize();
	for (int i = 0; i < sizeList; i++)
	{
		int index = carpark->getCarIndex(i);
		Car car = carpark->getCarByIndex(index);

		System::String^ id = gcnew System::String(std::to_string(car.getId()).data());
		int conditionCar = car.getConditionCar();
		System::String^ conditionCarStr = GetNameConditionByCode(conditionCar);
		System::String^ carType = gcnew System::String(car.getTypeCar().data());
		System::String^ capacityCar = gcnew System::String(std::to_string(car.getCapacityCar()).data());
		array<String^>^ carRecord = { id, conditionCarStr, carType, capacityCar };
		this->dataGridView1->Rows->Add(carRecord);
	}
}
/// <summary>
/// ���������� ����
/// </summary>
System::Void  MyForm::p22ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	MessageBox::Show("���������� ����");
	Project1Git::MyForm5^ myForm5 = gcnew Project1Git::MyForm5();
	std::string editMode = "addCar";
	myForm5->editMode = &editMode;
	myForm5->ShowDialog();	//�������� ������ ����� �����������
	DataGridView1Clear();
}
/// <summary>
/// �������� ����
/// </summary>
System::Void  MyForm::p23ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	MessageBox::Show("�������� ����");
	Project1Git::MyForm4^ myForm4 = gcnew Project1Git::MyForm4();
	std::string editMode = "delCar";
	myForm4->editMode = &editMode;
	myForm4->ShowDialog();	//�������� ������ ����� �������������
	DataGridView1Clear();
}
/// <summary>
/// �������������� ������ �� ���������
/// </summary>
System::Void  MyForm::p24ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	MessageBox::Show("�������������� ����");
	Project1Git::MyForm4^ myForm4 = gcnew Project1Git::MyForm4();
	std::string editMode = "updCar";
	myForm4->editMode = &editMode;
	myForm4->ShowDialog();	//�������� ������ ����� �������������
	DataGridView1Clear();
}
/// <summary>
/// ����� ������/����� ��.�����
/// </summary>
System::Void  MyForm::p251ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	DataGridView1Clear();
	DataGridViewTextBoxColumnAddCars();
	FindDataCar("free�ar");
}
/// <summary>
/// ����� ������/����� ���.�����
/// </summary>
System::Void  MyForm::p252ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	DataGridView1Clear();
	DataGridViewTextBoxColumnAddCars();
	FindDataCar("busy�ar");
}
/// <summary>
/// ����� ������/����� ���.�����
/// </summary>
System::Void  MyForm::p253ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	DataGridView1Clear();
	DataGridViewTextBoxColumnAddCars();
	FindDataCar("repaired�ar");
}
/// <summary>
/// ����� ������/����� ����.�����
/// </summary>
System::Void  MyForm::p254ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	DataGridView1Clear();
	DataGridViewTextBoxColumnAddCars();
	FindDataCar("decommissioned�ar");
}
/// <summary>
/// ���������� �� ��������� �����
/// </summary>
System::Void  MyForm::p261ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	DataGridView1Clear();
	DataGridViewTextBoxColumnAddCars();
	DataGridViewRowsAdd("sortByConditionCar");
}
/// <summary>
/// ���������� �� ���� �����
/// </summary>
System::Void  MyForm::p262ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	DataGridView1Clear();
	DataGridViewTextBoxColumnAddCars();
	DataGridViewRowsAdd("sortByTypeCar");
}
/// <summary>
/// ���������� ���� �� ����������������
/// </summary>
System::Void  MyForm::p263ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	DataGridView1Clear();
	DataGridViewTextBoxColumnAddCars();
	DataGridViewRowsAdd("sortByCapacityCar");
}
/// <summary>
/// ������� �� ������ �����
/// </summary>
System::Void  MyForm::button3_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->Close();	//�������� �����
}
/// <summary>
/// ����� ������ ���� "�����"
/// </summary>
System::Void  MyForm::p4ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->Close();	//�������� �����
}

