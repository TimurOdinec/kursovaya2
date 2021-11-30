#include "MyForm3.h"

using namespace Project1Git;

/// <summary>
/// загрузка окна формы для добавления, редактирования, удаления
/// </summary>
System::Void MyForm3::MyForm3_Load(System::Object^ sender, System::EventArgs^ e)
{
	this->Location = Point(100, 100);					//расположение формы
	this->BackColor = System::Drawing::Color::Aqua;		//цвет фона формы
	this->label1->Text = "id";							//подпись поля id 
	this->label2->Text = "Логин:";						//подпись поля логин 
	this->label3->Text = "Пароль:";						//подпись поля пароль 
	this->label4->Text = "Тип пользователя:";			//подпись поля тип пользов. 
	this->label5->Text = "Регистрация пользователя:";   //подпись поля регистация пользов. 
	this->textBox2->Select();							//фокус на поле логин
	this->button1->Text = "Добавить";					//надпись кнопки Добавить
	this->button2->Text = "Закрыть";					//надпись кнопки Закрыть
	this->comboBox1->Items->Add("администратор");		//заполнение выпадающего списка типа пользователя
	this->comboBox1->Items->Add("пользователь");		//заполнение выпадающего списка типа пользователя
	this->comboBox2->Items->Add("зарегистрирован");		//заполнение выпадающего списка призанака регистрации
	this->comboBox2->Items->Add("не зарегистрирован");	//заполнение выпадающего списка призанака регистрации
	//если режим работы с данными - добавление add
	if (*(this->editMode) == "add")
	{
		ListUsers* listUsers = new ListUsers();	//создадим объект списка пользователей
		int newId = listUsers->getNewId();		//высчитаем значение нового id для записи пользователя
		this->textBox1->Text = gcnew String(std::to_string(newId).data());	//внесем новый id на поле формы 
		this->textBox1->ReadOnly = true;		//сделаем id не редактируемым
	}
	//если режим работы с данными - удаление del
	if (*(this->editMode) == "del")
	{
		this->button1->Text = "Удалить";		//изменим надпись на кнопке
		ListUsers* listUsers = new ListUsers();	//создадим объект списка пользователей
		User user = listUsers->getUserByIndex(this->idRowListUsers);	//получим объект user по id
		this->textBox1->Text = gcnew String(std::to_string(user.getId()).data());
		this->textBox2->Text = gcnew String((user.getLogin()).data());
		this->textBox3->Text = gcnew String((user.getPassword()).data());
		int userType = user.getUserType();
		if (userType == 1)
		{
			this->comboBox1->Text = "администратор";
		}
		if (userType == 2)
		{
			this->comboBox1->Text = "пользователь";
		}
		int userRegister = user.getUserRegister();
		if (userRegister == 1)
		{
			this->comboBox2->Text = "зарегистрирован";
		}
		if (userRegister == 0)
		{
			this->comboBox2->Text = "не зарегистрирован";
		}
	}
	if (*(this->editMode) == "upd")
	{
		this->button1->Text = "Редактировать";
		ListUsers* listUsers = new ListUsers();
		User user = listUsers->getUserByIndex(this->idRowListUsers);

		this->textBox1->Text = gcnew String(std::to_string(user.getId()).data());
		this->textBox2->Text = gcnew String((user.getLogin()).data());
		this->textBox3->Text = gcnew String((user.getPassword()).data());
		int userType = user.getUserType();
		if (userType == 1)
		{
			this->comboBox1->Text = "администратор";
		}
		if (userType == 2)
		{
			this->comboBox1->Text = "пользователь";
		}
		int userRegister = user.getUserRegister();
		if (userRegister == 1)
		{
			this->comboBox2->Text = "зарегистрирован";
		}
		if (userRegister == 0)
		{
			this->comboBox2->Text = "не зарегистрирован";
		}
	}
}
/// <summary>
/// вызов режима: добавление редактирование удаление
/// </summary>
System::Void MyForm3::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	msclr::interop::marshal_context context;
	std::string idStr = context.marshal_as<std::string>(this->textBox1->Text);
	int id = std::stoi(idStr);
	std::string login = context.marshal_as<std::string>(this->textBox2->Text);
	std::string userTypeStr = context.marshal_as<std::string>(this->comboBox1->Text);
	int userType = 0;
	if (userTypeStr == "администратор")
	{
		userType = 1;
	}
	else
	{
		if (userTypeStr == "пользователь")
		{
			userType = 2;
		}
	}
	std::string userRegisterStr = context.marshal_as<std::string>(this->comboBox2->Text);
	int userRegister = 0;
	if (userRegisterStr == "зарегистрирован")
	{
		userRegister = 1;
	}
	else
	{
		if (userRegisterStr == "не зарегистрирован")
		{
			userRegister = 0;
		}
	}
	std::string password = context.marshal_as<std::string>(this->textBox3->Text);
	if (*(this->editMode) == "add")
	{
		MessageBox::Show("ДОБАВИТЬ");

		User user(id, login, userType, userRegister, password);
		ListUsers* listUsers = new ListUsers();
		listUsers->addNewUser(user);
	}
	if (*(this->editMode) == "del")
	{
		MessageBox::Show("УДАЛИТЬ");

		User user(id, login, userType, userRegister, password);
		ListUsers* listUsers = new ListUsers();
		listUsers->deleteUserById(id);
	}
	if (*(this->editMode) == "upd")
	{
		MessageBox::Show("РЕДАКТИРОВАТЬ");

		User user(id, login, userType, userRegister, password);
		ListUsers* listUsers = new ListUsers();
		listUsers->updateUser(user);
	}
	this->Close();
}
/// <summary>
/// нажатие на кнопку exit
/// </summary>
System::Void MyForm3::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->Close();	//закроем текущую форму
}

