#include <Windows.h>

#include "MyForm.h"
#include "WorkWithFiles.h"

using namespace Project1Git;

/// <summary>
/// точка входа в программу
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
/// метод формирует меню администратора
/// </summary>
/// <returns></returns>
System::Void MyForm::CreateMenuAdministrator()
{
	this->toolStripMenuItem1->Text = "Меню администратора";
	this->p1ToolStripMenuItem->Text = "Работа с учетными данными";
	this->p11ToolStripMenuItem->Text = "Просмотр учетных данных";
	this->p12ToolStripMenuItem->Text = "Добавление учетных данных";
	this->p13ToolStripMenuItem->Text = "Удаление учетных данных";
	this->p14ToolStripMenuItem->Text = "Редактирование учетных данных";
	this->p15ToolStripMenuItem->Text = "Поиск учетных данных";
	this->p151ToolStripMenuItem->Text = "Поиск по логину";
	this->p152ToolStripMenuItem->Text = "Поиск незарегистрированных пользователей";
	this->p1ToolStripMenuItem->Available = true;
	this->p11ToolStripMenuItem->Available = true;
	this->p12ToolStripMenuItem->Available = true;
	this->p13ToolStripMenuItem->Available = true;
	this->p14ToolStripMenuItem->Available = true;
	this->p15ToolStripMenuItem->Available = true;

	this->p2ToolStripMenuItem->Text = "Работа с данными по автопарку";
	this->p21ToolStripMenuItem->Text = "Просмотр данных";
	this->p22ToolStripMenuItem->Text = "Добавление данных";
	this->p23ToolStripMenuItem->Text = "Удаление данных";
	this->p24ToolStripMenuItem->Text = "Редактирование данных";
	this->p25ToolStripMenuItem->Text = "Поиск данных";
	this->p251ToolStripMenuItem->Text = "Поиск свободных машин";
	this->p252ToolStripMenuItem->Text = "Поиск занятых машин";
	this->p253ToolStripMenuItem->Text = "Поиск ремонтируемых машин";
	this->p254ToolStripMenuItem->Text = "Поиск списанных машин";
	this->p26ToolStripMenuItem->Text = "Сортировка данных";
	this->p261ToolStripMenuItem->Text = "Сортировка по состоянию машин";
	this->p262ToolStripMenuItem->Text = "Сортировка по типу машин";
	this->p263ToolStripMenuItem->Text = "Сортировка по грузоподъемности";
	this->p3ToolStripMenuItem->Text = "Сменить пользователя";
	this->p4ToolStripMenuItem->Text = "Выход";
	this->p22ToolStripMenuItem->Available = true;
	this->p23ToolStripMenuItem->Available = true;
	this->p24ToolStripMenuItem->Available = true;

	this->toolStripMenuItem2->Text = "Правка";
	this->pp1ToolStripMenuItem->Text = "Отменить последнее действие (добавление/удаление/редактирование)";
	this->pp11ToolStripMenuItem->Text = "для учетных данных";
	this->pp12ToolStripMenuItem->Text = "для данных автопарка";
	this->toolStripMenuItem2->Available = true;
	this->pp1ToolStripMenuItem->Available = true;
	this->pp11ToolStripMenuItem->Available = true;
	this->pp12ToolStripMenuItem->Available = true;
	this->pp11ToolStripMenuItem->Enabled = false;
	this->pp12ToolStripMenuItem->Enabled = false;
}
/// <summary>
/// метод формирует меню пользователя
/// </summary>
/// <returns></returns>
System::Void MyForm::CreateMenuUser()
{
	this->toolStripMenuItem1->Text = "Меню пользователя";
	this->p1ToolStripMenuItem->Available = false;
	this->p11ToolStripMenuItem->Available = false;
	this->p12ToolStripMenuItem->Available = false;
	this->p13ToolStripMenuItem->Available = false;
	this->p14ToolStripMenuItem->Available = false;
	this->p15ToolStripMenuItem->Available = false;

	this->p2ToolStripMenuItem->Text = "Работа с данными по автопарку";
	this->p21ToolStripMenuItem->Text = "Просмотр данных";
	this->p22ToolStripMenuItem->Available = false;
	this->p23ToolStripMenuItem->Available = false;
	this->p24ToolStripMenuItem->Available = false;
	this->p25ToolStripMenuItem->Text = "Поиск данных";
	this->p251ToolStripMenuItem->Text = "Поиск свободных машин";
	this->p252ToolStripMenuItem->Text = "Поиск занятых машин";
	this->p253ToolStripMenuItem->Text = "Поиск ремонтируемых машин";
	this->p254ToolStripMenuItem->Text = "Поиск списанных машин";
	this->p26ToolStripMenuItem->Text = "Сортировка данных";
	this->p261ToolStripMenuItem->Text = "Сортировка по состоянию машин";
	this->p262ToolStripMenuItem->Text = "Сортировка по типу машин";
	this->p263ToolStripMenuItem->Text = "Сортировка по грузоподъемности";
	this->p3ToolStripMenuItem->Text = "Сменить пользователя";
	this->p4ToolStripMenuItem->Text = "Выход";

	this->toolStripMenuItem2->Available = false;
	this->pp1ToolStripMenuItem->Available = false;
	this->pp11ToolStripMenuItem->Available = false;
	this->pp12ToolStripMenuItem->Available = false;
}
/// <summary>
/// метод очищает grid таблицу данных
/// </summary>
/// <returns></returns>
System::Void MyForm::DataGridView1Clear()
{
	this->dataGridView1->Rows->Clear();
	this->dataGridView1->Columns->Clear();
	this->dataGridView1->Visible = true;
}
/// <summary>
/// метод скрывает надипси и окна с данными по машинам
/// </summary>
/// <returns></returns>
System::Void MyForm::HideLabelsAndTextBoxes()
{
	this->textBox1->ReadOnly = true;									//делаем кол-во всех авто не редактируемым
	this->textBox1->Visible = false;									//прячем кол-во всех авто
	this->textBox2->ReadOnly = true;									//делаем кол-во в ремонте не редактируемым
	this->textBox2->Visible = false;									//прячем кол-во в ремонте
	this->textBox3->ReadOnly = true;									//делаем кол-во списаных не редактируемым
	this->textBox3->Visible = false;									//прячем кол-во списаных
	this->textBox4->ReadOnly = true;									//делаем кол-во свободных не редактируемым
	this->textBox4->Visible = false;									//прячем кол-во свободных
	this->textBox5->ReadOnly = true;									//делаем кол-во занятых не редактируемым
	this->textBox5->Visible = false;									//прячем кол-во занятых
	this->label2->Visible = false;										//прячем надпись кол-во всех авто
	this->label3->Visible = false;										//прячем надпись Кол-во машин (в ремонте)
	this->label4->Visible = false;										//прячем надпись Кол-во машин (списаных)
	this->label5->Visible = false;										//прячем надпись Кол-во машин (свободных)
	this->label6->Visible = false;										//прячем надпись Кол-во машин (занятых)
	this->groupBox1->Visible = false;									//прячем рамку
}
/// <summary>
/// метод формирования названий столбцов для вывода данных о пользователях
/// </summary>
/// <returns></returns>
System::Void MyForm::DataGridViewTextBoxColumnAddUsers()
{
	//вариант с ячейками столбца и направлением сортировки
	DataGridViewTextBoxColumn^ colFullName = gcnew DataGridViewTextBoxColumn;
	colFullName->Name = "id";
	colFullName->Width = 30;
	this->dataGridView1->Columns->Add(colFullName);
	DataGridViewTextBoxColumn^ colFullName1 = gcnew DataGridViewTextBoxColumn;
	colFullName1->Name = "ЛОГИН";
	colFullName1->Width = 80;
	this->dataGridView1->Columns->Add(colFullName1);
	DataGridViewTextBoxColumn^ colFullName2 = gcnew DataGridViewTextBoxColumn;
	colFullName2->Name = "ТИП ПОЛЬЗОВАТЕЛЯ";
	colFullName2->Width = 110;
	this->dataGridView1->Columns->Add(colFullName2);
	DataGridViewTextBoxColumn^ colFullName3 = gcnew DataGridViewTextBoxColumn;
	colFullName3->Name = "ТИП РЕГИСТРАЦИИ";
	colFullName3->Width = 120;
	this->dataGridView1->Columns->Add(colFullName3);
	DataGridViewTextBoxColumn^ colFullName4 = gcnew DataGridViewTextBoxColumn;
	colFullName4->Name = "ПАРОЛЬ";
	this->dataGridView1->Columns->Add(colFullName4);
}
/// <summary>
/// метод формирования названий столбцов для вывода данных о автомобилях
/// </summary>
/// <returns></returns>
System::Void MyForm::DataGridViewTextBoxColumnAddCars()
{
	//вариант с ячейками столбца и направлением сортировки
	DataGridViewTextBoxColumn^ colFullName = gcnew DataGridViewTextBoxColumn;
	colFullName->Name = "id";
	colFullName->Width = 30;
	this->dataGridView1->Columns->Add(colFullName);
	DataGridViewTextBoxColumn^ colFullName1 = gcnew DataGridViewTextBoxColumn;
	colFullName1->Name = "СОСТОЯНИЕ АВТО";
	this->dataGridView1->Columns->Add(colFullName1);
	DataGridViewTextBoxColumn^ colFullName2 = gcnew DataGridViewTextBoxColumn;
	colFullName2->Name = "ТИП АВТО";
	this->dataGridView1->Columns->Add(colFullName2);
	DataGridViewTextBoxColumn^ colFullName3 = gcnew DataGridViewTextBoxColumn;
	colFullName3->Name = "ГРУЗПОДЪЕМНОСТЬ (Т)";
	colFullName3->Width = 140;
	this->dataGridView1->Columns->Add(colFullName3);
}
/// <summary>
/// метод возвращает по коду наименование типа пользователя для таблицы
/// </summary>
/// <param name="userTypeStr"></param>
/// <returns></returns>
System::String^ MyForm::GetNameTypeByCode(int userTypeStr)
{
	System::String^ result = "";
	if (userTypeStr == 1)
	{
		result = "администратор";
	}
	else
	{
		if (userTypeStr == 2)
		{
			result = "пользователь";
		}
	}
	return result;
}
/// <summary>
/// метод возвращает по коду наименование состояния регистрации пользователя для таблицы
/// </summary>
/// <param name="userRegisterStr"></param>
/// <returns></returns>
System::String^ MyForm::GetNameRegisterByCode(int userRegisterStr)
{
	System::String^ result = "";
	if (userRegisterStr == 1)
	{
		result = "зарегистрирован";
	}
	else
	{
		if (userRegisterStr == 0)
		{
			result = "не зарегистрирован";
		}
	}
	return result;
}
/// <summary>
/// метод возвращает по коду наименование состояния машины для таблицы
/// </summary>
/// <param name="conditionCar"></param>
/// <returns></returns>
System::String^ MyForm::GetNameConditionByCode(int conditionCar)
{
	System::String^ result = "";
	//в ремонте, списали, свободна, занята
	if (conditionCar == 1)
	{
		result = "в ремонте";
	}
	else
	{
		if (conditionCar == 2)
		{
			result = "списали";
		}
		else
		{
			if (conditionCar == 3)
			{
				result = "свободна";
			}
			else
			{
				if (conditionCar == 4)
				{
					result = "занята";
				}
			}
		}
	}
	return result;
}
/// <summary>
/// метод поиска и отображения авт по переданному прарметру - состоянию 
/// </summary>
/// <param name="typeConditionCar"></param>
void MyForm::FindDataCar(std::string typeConditionCar)
{
	Carpark* carpark = new Carpark();
	int sizeList = carpark->getSize();
	int countCarRepair = 0;
	int countCarWriteOff = 0;
	int countCarFree = 0;
	int countCarBusy = 0;
	for (int i = 0; i < sizeList; i++)
	{
		int index = carpark->getCarIndex(i);
		Car car = carpark->getCarByIndex(index);

		System::String^ id = gcnew System::String(std::to_string(car.getId()).data());
		int conditionCar = car.getConditionCar();
		if (conditionCar == 1)
		{
			countCarRepair++;
		}
		if (conditionCar == 2)
		{
			countCarWriteOff++;
		}
		if (conditionCar == 3)
		{
			countCarFree++;
		}
		if (conditionCar == 4)
		{
			countCarBusy++;
		}
		System::String^ conditionCarStr = GetNameConditionByCode(conditionCar);
		System::String^ carType = gcnew System::String(car.getTypeCar().data());
		System::String^ capacityCar = gcnew System::String(std::to_string(car.getCapacityCar()).data());
		array<String^>^ carRecord = { id, conditionCarStr, carType, capacityCar };
		if (typeConditionCar == "decommissionedСar")
		{
			if (conditionCar == 2)
			{
				this->dataGridView1->Rows->Add(carRecord);
			}
		}
		if (typeConditionCar == "repairedСar")
		{
			if (conditionCar == 1)
			{
				this->dataGridView1->Rows->Add(carRecord);
			}
		}
		if (typeConditionCar == "busyСar")
		{
			if (conditionCar == 4)
			{
				this->dataGridView1->Rows->Add(carRecord);
			}
		}
		if (typeConditionCar == "freeСar")
		{
			if (conditionCar == 3)
			{
				this->dataGridView1->Rows->Add(carRecord);
			}
		}
	}
	this->label2->Visible = true;
	this->textBox1->Visible = true;
	this->textBox1->Text = gcnew System::String(std::to_string(sizeList).data());
	this->label3->Visible = true;
	this->textBox2->Visible = true;
	this->textBox2->Text = gcnew System::String(std::to_string(countCarRepair).data());
	this->label4->Visible = true;
	this->textBox3->Visible = true;
	this->textBox3->Text = gcnew System::String(std::to_string(countCarWriteOff).data());
	this->label5->Visible = true;
	this->textBox4->Visible = true;
	this->textBox4->Text = gcnew System::String(std::to_string(countCarFree).data());
	this->label6->Visible = true;
	this->textBox5->Visible = true;
	this->textBox5->Text = gcnew System::String(std::to_string(countCarBusy).data());
	this->groupBox1->Visible = true;
}
/// <summary>
/// метод сортирует строки данных для авто по переданному прарметру (состоянию, типу, грузоподъемности)
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
/// загрузка основной формы
/// </summary>
System::Void MyForm::MyForm_Load(System::Object^ sender, System::EventArgs^ e)
{
	this->Location = Point(20, 20);										//верхний угол формы
	this->BackColor = System::Drawing::Color::FromArgb(60, 160, 208);	//цвет фона формы
	this->Text = "Автопарк";											//название формы
	this->button3->Text = "Выход";										//название кнопки
	this->dataGridView1->Visible = false;								//прячем таблицу
	this->label2->Text = "Кол-во всех машин в автопарке:";
	this->label3->Text = "Кол-во машин (в ремонте):";
	this->label4->Text = "Кол-во машин (списаных):";
	this->label5->Text = "Кол-во машин (свободных):";
	this->label6->Text = "Кол-во машин (занятых):";
	this->groupBox1->Text = "Информация о машинах:";					
	HideLabelsAndTextBoxes();
	
	//создание новой формы авторизации
	Project1Git::MyForm1^ myForm1 = gcnew Project1Git::MyForm1();
	myForm1->ShowDialog();	//передача фокуса форме авторизации
	//проверяем была ли введена строка в поле login
	if ((myForm1->login)->Length == 0)
	{
		this->label1->Text = "Авторизация не прошла";
		this->Close();
	}
	else
	{
		this->label1->Text = "Добро пожаловать!  " + (myForm1->login);
		int currentTypeInt = myForm1->currentType;
		if (currentTypeInt == 1)
		{
			CreateMenuAdministrator();
		}
		else
		{
			if (currentTypeInt == 2)
			{
				CreateMenuUser();
			}
			else
			{
				MessageBox::Show("Вы не авторизированы.");
				myForm1->ShowDialog();	//передача фокуса форме авторизации
			}
		}
	}
}
/// <summary>
/// выход в окно авторизации (пункт меню "Сменить пользователя")
/// </summary>
System::Void  MyForm::p3ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->SetVisibleCore(false);	//скрытие формы
	//создание новой формы авторизации
	Project1Git::MyForm1^ myForm1 = gcnew Project1Git::MyForm1();
	myForm1->ShowDialog();			//передача фокуса форме авторизации
	this->SetVisibleCore(true);		//скрытие формы
	//проверяем была ли введена строка в поле login
	if ((myForm1->login)->Length == 0)
	{
		this->label1->Text = "Авторизация не прошла";
		this->Close();
	}
	else
	{
		this->label1->Text = "Добро пожаловать!  " + (myForm1->login);
		int currentTypeInt = myForm1->currentType;
		if (currentTypeInt == 1)
		{
			CreateMenuAdministrator();
		}
		else
		{
			if (currentTypeInt == 2)
			{
				CreateMenuUser();
			}
			else
			{
				MessageBox::Show("Вы не авторизированы.");
				myForm1->ShowDialog();	//передача фокуса форме авторизации
			}
		}
		DataGridView1Clear();
		HideLabelsAndTextBoxes();
	}
}
/// <summary>
/// просмотр учетных записей
/// </summary>
System::Void  MyForm::p11ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	//MessageBox::Show("Просомтр уч.данных.");
	DataGridView1Clear();
	DataGridViewTextBoxColumnAddUsers();
	HideLabelsAndTextBoxes();
	
	//берем список пользователей
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
/// добавление уч.записи
/// </summary>
System::Void  MyForm::p12ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	MessageBox::Show("Добавление уч.данных.");
	Project1Git::MyForm3^ myForm3 = gcnew Project1Git::MyForm3();
	std::string editMode = "add";
	myForm3->editMode = &editMode;
	myForm3->ShowDialog();	//передача фокуса форме авторизации
	DataGridView1Clear();
	HideLabelsAndTextBoxes();
	this->pp11ToolStripMenuItem->Enabled = true;
}
/// <summary>
/// удаление уч.записи
/// </summary>
System::Void  MyForm::p13ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	MessageBox::Show("Удаление уч.данных.");
	Project1Git::MyForm4^ myForm4 = gcnew Project1Git::MyForm4();
	std::string editMode = "del";
	myForm4->editMode = &editMode;
	myForm4->ShowDialog();	//передача фокуса форме идентификации
	DataGridView1Clear();
	HideLabelsAndTextBoxes();
	this->pp11ToolStripMenuItem->Enabled = true;
}
/// <summary>
/// редактирование уч.записи
/// </summary>
System::Void  MyForm::p14ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	MessageBox::Show("Редактирование уч.данных.");
	Project1Git::MyForm4^ myForm4 = gcnew Project1Git::MyForm4();
	std::string editMode = "upd";
	myForm4->editMode = &editMode;
	myForm4->ShowDialog();	//передача фокуса форме идентификации
	DataGridView1Clear();
	HideLabelsAndTextBoxes();
	this->pp11ToolStripMenuItem->Enabled = true;
}
/// <summary>
/// поиск уч.данных по логину
/// </summary>
System::Void  MyForm::p151ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	MessageBox::Show("Поиск по логину");
	Project1Git::MyForm4^ myForm4 = gcnew Project1Git::MyForm4();
	std::string editMode = "search";
	myForm4->editMode = &editMode;
	myForm4->ShowDialog();	//передача фокуса форме идентификации
	DataGridView1Clear();
	HideLabelsAndTextBoxes();

	System::String^ loginSearchUser = myForm4->loginSearchUser;
	msclr::interop::marshal_context context;
	std::string loginUserSearch = context.marshal_as<std::string>(loginSearchUser);
	//MessageBox::Show("loginSearchUser:" + loginSearchUser);

	ListUsers* listUsers = new ListUsers();
	User user = listUsers->getUserByLogin(loginUserSearch);
	if (user.getId() == -1)
	{
		MessageBox::Show("Пользователь не найден.");
	}
	else
	{
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
/// поиск незарег.пользователей
/// </summary>
System::Void  MyForm::p152ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	MessageBox::Show("Поиск незарегистр.пользователей");
	DataGridView1Clear();
	DataGridViewTextBoxColumnAddUsers();
	HideLabelsAndTextBoxes();
	
	//берем список пользователей
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
/// просмотр автопарка
/// </summary>
System::Void  MyForm::p21ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	DataGridView1Clear();
	DataGridViewTextBoxColumnAddCars();
	HideLabelsAndTextBoxes();
	
	//берем список auto
	Carpark* carpark = new Carpark();
	int sizeList = carpark->getSize();
	int countCarRepair = 0;
	int countCarWriteOff = 0;
	int countCarFree = 0;
	int countCarBusy = 0;
	for (int i = 0; i < sizeList; i++)
	{
		int index = carpark->getCarIndex(i);
		Car car = carpark->getCarByIndex(index);

		System::String^ id = gcnew System::String(std::to_string(car.getId()).data());
		int conditionCar = car.getConditionCar();
		if (conditionCar == 1)
		{
			countCarRepair ++;
		}
		if (conditionCar == 2)
		{
			countCarWriteOff ++;
		}
		if (conditionCar == 3)
		{
			countCarFree ++;
		}
		if (conditionCar == 4)
		{
			countCarBusy ++;
		}
		System::String^ conditionCarStr = GetNameConditionByCode(conditionCar);
		System::String^ carType = gcnew System::String(car.getTypeCar().data());
		System::String^ capacityCar = gcnew System::String(std::to_string(car.getCapacityCar()).data());
		array<String^>^ carRecord = { id, conditionCarStr, carType, capacityCar };
		this->dataGridView1->Rows->Add(carRecord);
	}
	this->label2->Visible = true;
	this->textBox1->Visible = true;
	this->textBox1->Text = gcnew System::String(std::to_string(sizeList).data());
	this->label3->Visible = true;
	this->textBox2->Visible = true;
	this->textBox2->Text = gcnew System::String(std::to_string(countCarRepair).data());
	this->label4->Visible = true;
	this->textBox3->Visible = true;
	this->textBox3->Text = gcnew System::String(std::to_string(countCarWriteOff).data());
	this->label5->Visible = true;
	this->textBox4->Visible = true;
	this->textBox4->Text = gcnew System::String(std::to_string(countCarFree).data());
	this->label6->Visible = true;
	this->textBox5->Visible = true;
	this->textBox5->Text = gcnew System::String(std::to_string(countCarBusy).data());
	this->groupBox1->Visible = true;

}
/// <summary>
/// добавление авто
/// </summary>
System::Void  MyForm::p22ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	MessageBox::Show("Добавление авто");
	Project1Git::MyForm5^ myForm5 = gcnew Project1Git::MyForm5();
	std::string editMode = "addCar";
	myForm5->editMode = &editMode;
	myForm5->ShowDialog();	//передача фокуса форме авторизации
	DataGridView1Clear();
	HideLabelsAndTextBoxes();
	this->pp12ToolStripMenuItem->Enabled = true;
}
/// <summary>
/// удаление авто
/// </summary>
System::Void  MyForm::p23ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	MessageBox::Show("Удаление авто");
	Project1Git::MyForm4^ myForm4 = gcnew Project1Git::MyForm4();
	std::string editMode = "delCar";
	myForm4->editMode = &editMode;
	myForm4->ShowDialog();	//передача фокуса форме идентификации
	DataGridView1Clear();
	HideLabelsAndTextBoxes();
	this->pp12ToolStripMenuItem->Enabled = true;
}
/// <summary>
/// редактирование данных по автопарку
/// </summary>
System::Void  MyForm::p24ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	MessageBox::Show("Редактирование авто");
	Project1Git::MyForm4^ myForm4 = gcnew Project1Git::MyForm4();
	std::string editMode = "updCar";
	myForm4->editMode = &editMode;
	myForm4->ShowDialog();	//передача фокуса форме идентификации
	DataGridView1Clear();
	HideLabelsAndTextBoxes();
	this->pp12ToolStripMenuItem->Enabled = true;
}
/// <summary>
/// поиск данных/поиск св.машин
/// </summary>
System::Void  MyForm::p251ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	DataGridView1Clear();
	DataGridViewTextBoxColumnAddCars();
	HideLabelsAndTextBoxes();
	FindDataCar("freeСar");
}
/// <summary>
/// поиск данных/поиск зан.машин
/// </summary>
System::Void  MyForm::p252ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	DataGridView1Clear();
	DataGridViewTextBoxColumnAddCars();
	HideLabelsAndTextBoxes();
	FindDataCar("busyСar");
}
/// <summary>
/// поиск данных/поиск рем.машин
/// </summary>
System::Void  MyForm::p253ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	DataGridView1Clear();
	DataGridViewTextBoxColumnAddCars();
	HideLabelsAndTextBoxes();
	FindDataCar("repairedСar");
}
/// <summary>
/// поиск данных/поиск спис.машин
/// </summary>
System::Void  MyForm::p254ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	DataGridView1Clear();
	DataGridViewTextBoxColumnAddCars();
	HideLabelsAndTextBoxes();
	FindDataCar("decommissionedСar");
}
/// <summary>
/// сортировка по состоянию машин
/// </summary>
System::Void  MyForm::p261ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	DataGridView1Clear();
	DataGridViewTextBoxColumnAddCars();
	DataGridViewRowsAdd("sortByConditionCar");
	HideLabelsAndTextBoxes();
}
/// <summary>
/// сортировка по типу машин
/// </summary>
System::Void  MyForm::p262ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	DataGridView1Clear();
	DataGridViewTextBoxColumnAddCars();
	DataGridViewRowsAdd("sortByTypeCar");
	HideLabelsAndTextBoxes();
}
/// <summary>
/// сортировка авто по грузоподъемности
/// </summary>
System::Void  MyForm::p263ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	DataGridView1Clear();
	DataGridViewTextBoxColumnAddCars();
	DataGridViewRowsAdd("sortByCapacityCar");
	HideLabelsAndTextBoxes();
}
/// <summary>
/// выбор пункта меню - отмены последних действий с учетными данными
/// </summary>
/// <param name=""></param>
/// <param name=""></param>
/// <returns></returns>
System::Void MyForm::pp11ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	WorkWithFiles* workWithFiles = new WorkWithFiles();
	workWithFiles->createAndSaveTempFile("usersTemp");
	DataGridView1Clear();
	HideLabelsAndTextBoxes();
}
/// <summary>
/// выбор пункта меню - отмены последних действий с данными автопарка
/// </summary>
/// <param name="sender"></param>
/// <param name="e"></param>
/// <returns></returns>
System::Void MyForm::pp12ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	WorkWithFiles* workWithFiles = new WorkWithFiles();
	workWithFiles->createAndSaveTempFile("carparkTemp");
	DataGridView1Clear();
	HideLabelsAndTextBoxes();
}
/// <summary>
/// нажатие на кнопку Выход
/// </summary>
System::Void  MyForm::button3_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->Close();	//закрытие формы
}
/// <summary>
/// выбор пункта меню "Выход"
/// </summary>
System::Void  MyForm::p4ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->Close();	//закрытие формы
}

