#include "MyForm5.h"
#include "WorkWithFiles.h"

using namespace Project1Git;

/// <summary>
/// �������� ���� ����� ��� ����������, ��������������, �������� ����
/// </summary>
System::Void MyForm5::MyForm5_Load(System::Object^ sender, System::EventArgs^ e)
{
	this->Location = Point(100, 100);				//������������ �����
	this->BackColor = System::Drawing::Color::Aqua;	//���� ���� �����		
	this->label1->Text = "id:";						//������� ���� id 
	this->label2->Text = "������� ��������� ����:";	//������� ���� condition 
	this->textBox2->Select();						//����� �� ���� condition
	this->label3->Text = "��� ������:";				//������� ���� typeAvto
	this->label4->Text = "����������������:";		//������� ���� capacity
	this->button1->Text = "��������";				//������� ������ ��������
	this->button2->Text = "�������";				//������� ������ �������
	this->comboBox1->Items->Add("� �������");		//���������� ����������� ������ ��������� ����
	this->comboBox1->Items->Add("�������");			//���������� ����������� ������ ��������� ����
	this->comboBox1->Items->Add("��������");		//���������� ����������� ������ ��������� ����
	this->comboBox1->Items->Add("������");			//���������� ����������� ������ ��������� ����
	//���� ����� ������ � ������� - ���������� add
	if (*(this->editMode) == "addCar")
	{
		Carpark* carpark = new Carpark();	//�������� ������ ������ ���� � ���������
		int newId = carpark->getNewId();	//��������� �������� ������ id ��� ������ ����
		this->Text = "���������� ����";		//�������� �����
		this->textBox1->Text = gcnew String(std::to_string(newId).data());	//������ ����� id �� ���� ����� 
		this->textBox1->ReadOnly = true;	//������� id �� �������������
	}
	//���� ����� ������ � ������� - �������� del
	if (*(this->editMode) == "delCar")
	{
		this->button1->Text = "�������";	//������� ������� �� ������
		Carpark* carpark = new Carpark();	//�������� ������ ������ ���� � ���������
		Car car = carpark->getCarByIndex(this->idRowCars);									//������� ������ car �� id
		this->Text = "�������� ����";		//�������� �����
		this->textBox1->Text = gcnew String(std::to_string(car.getId()).data());			//��������� ���� id
		if (car.getId() == -1)
		{
			MessageBox::Show("������� ������ � ����� id �� ����������.");
			this->Close();	//��������� �����
		}
		this->textBox2->Text = gcnew String(car.getTypeCar().data());						//��������� ���� typrCar
		this->textBox3->Text = gcnew String(std::to_string(car.getCapacityCar()).data());	//��������� ���� capacity
		int conditionCar = car.getConditionCar();
		if (conditionCar == 1)				//������� ����������� ���� ��������� ����
		{
			this->comboBox1->Text = "� �������";
		}
		if (conditionCar == 2)
		{
			this->comboBox1->Text = "�������";
		}
		if (conditionCar == 3)
		{
			this->comboBox1->Text = "��������";
		}
		if (conditionCar == 4)
		{
			this->comboBox1->Text = "������";
		}
		this->textBox1->ReadOnly = true;		//������� id �� �������������
		this->textBox2->ReadOnly = true;		//������� typeCar �� �������������
		this->textBox3->ReadOnly = true;		//������� capacityCar �� �������������
		this->comboBox1->Enabled = false;		//������� conditionCar �� �������������
	}
	//���� ����� ������ � ������� - �������������� updCar
	if (*(this->editMode) == "updCar")
	{
		this->button1->Text = "�������������";				//������� ������� �� ������
		Carpark* carpark = new Carpark();					//�������� ������ ������ �����������
		Car car = carpark->getCarByIndex(this->idRowCars);	//������� ������ car �� id
		this->Text = "�������������� ����";		//�������� �����
		this->textBox1->Text = gcnew String(std::to_string(car.getId()).data());			//��������� ���� id
		if (car.getId() == -1)
		{
			MessageBox::Show("������� ������ � ����� id �� ����������.");
			this->Close();	//��������� �����
		}
		this->textBox2->Text = gcnew String(car.getTypeCar().data());						//��������� ���� typeCar
		this->textBox3->Text = gcnew String(std::to_string(car.getCapacityCar()).data());	//��������� ���� capacity
		int conditionCar = car.getConditionCar();			//������� ��� ��������� ����
		if (conditionCar == 1)								//������� ����������� ���� ��������� ����
		{
			this->comboBox1->Text = "� �������";
		}
		if (conditionCar == 2)
		{
			this->comboBox1->Text = "�������";
		}
		if (conditionCar == 3)
		{
			this->comboBox1->Text = "��������";
		}
		if (conditionCar == 4)
		{
			this->comboBox1->Text = "������";
		}
		this->textBox1->ReadOnly = true;		//������� id �� �������������
	}
}
/// <summary>
/// ����� ������: ����������, ��������������, ��������
/// </summary>
System::Void MyForm5::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (!validValuesMyForm5())
	{
		MessageBox::Show("�� ��� ���� ���������.");
		return;
	}

	msclr::interop::marshal_context context;
	std::string idStr = context.marshal_as<std::string>(this->textBox1->Text);				//������� id �� ���� �����
	int id = std::stoi(idStr);						//�� ������ � �����
	std::string typeCar = context.marshal_as<std::string>(this->textBox2->Text);			//������� ��� ���� �� ���� �����
	std::string capacityCarStr = context.marshal_as<std::string>(this->textBox3->Text);		//������� ���������������� �� ���� �����
	double capacityCar = std::stod(capacityCarStr);	//�� ������ � �����
	std::string conditionCarStr = context.marshal_as<std::string>(this->comboBox1->Text);	//������� ��� ��������� ���� �� ���� �����
		
	int conditionCar = 0;
	if (conditionCarStr == "� �������")	//������� ����������� ���� ��������� ����
	{
		conditionCar = 1;
	}
	else
	{
		if (conditionCarStr == "�������")
		{
			conditionCar = 2;
		}
		else
		{
			if (conditionCarStr == "��������")
			{
				conditionCar = 3;
			}
			else
			{
				if (conditionCarStr == "������")
				{
					conditionCar = 4;
				}
			}
		}
	}
	WorkWithFiles* workWithFiles = new WorkWithFiles();
	workWithFiles->createAndSaveTempFile("carpark");
	//���� ������ ����� ����������
	if (*(this->editMode) == "addCar")
	{
		//MessageBox::Show("��������");
		Car car(id, conditionCar, typeCar, capacityCar);	//������ ������ ���� ��������� ������ �� �����
		Carpark* carpark = new Carpark();
		carpark->addNewCar(car);	//��������� ���� � ������ (� ����)
	}
	//���� ������ ����� ��������
	if (*(this->editMode) == "delCar")
	{
		//MessageBox::Show("�������");
		Car car(id, conditionCar, typeCar, capacityCar);	//������ ������ ���� ��������� ������ �� �����
		Carpark* carpark = new Carpark();
		carpark->deleteCarById(id);	//������� ���� �� ������ (�� �����)
	}
	//���� ������ ����� ��������������
	if (*(this->editMode) == "updCar")
	{
		//MessageBox::Show("�������������");
		Car car(id, conditionCar, typeCar, capacityCar);	//������ ������ ���� ��������� ������ �� �����
		Carpark* carpark = new Carpark();
		carpark->updateCar(car);	//����������� ���� � ������ (� �����)
	}
	this->Close();	//������� ������� �����
}
/// <summary>
/// ������� �� ������ exit
/// </summary>
System::Void MyForm5::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->Close();	//������� ������� �����
}
/// <summary>
/// ����� ��������� ���������� ���� �����
/// </summary>
/// <returns></returns>
bool MyForm5::validValuesMyForm5()
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
					isValid = true;
				}
			}
		}
	}
	return isValid;
}