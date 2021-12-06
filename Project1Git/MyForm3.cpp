#include "MyForm3.h"

using namespace Project1Git;

/// <summary>
/// загрузка окна формы для добавления, редактирования, удаления
/// </summary>
System::Void MyForm3::MyForm3_Load(System::Object^ sender, System::EventArgs^ e)
{
	this->Location = Point(100, 100);					//расположение формы
	this->BackColor = System::Drawing::Color::Aqua;		//цвет фона формы
	this->label1->Text = "id:";							//подпись поля id 
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
		this->Text = "Добавление пользователя"; //название формы
		this->textBox1->Text = gcnew String(std::to_string(newId).data());	//внесем новый id на поле формы 
		this->textBox1->ReadOnly = true;		//сделаем id не редактируемым
	}
	//если режим работы с данными - удаление del
	if (*(this->editMode) == "del")
	{
		this->button1->Text = "Удалить";		//изменим надпись на кнопке
		ListUsers* listUsers = new ListUsers();	//создадим объект списка пользователей
		User user = listUsers->getUserByIndex(this->idRowListUsers);				//получим объект user по id
		this->Text = "Удаление пользователя";	//название формы
		this->textBox1->Text = gcnew String(std::to_string(user.getId()).data());	//заполняем поле id
		this->textBox2->Text = gcnew String((user.getLogin()).data());				//заполняем поле login
		this->textBox3->Text = gcnew String((user.getPassword()).data());			//заполняем поле password
		int userType = user.getUserType();		//получим код типа пользователя
		if (userType == 1)						//выводим расшифровку кода пользователя
		{
			this->comboBox1->Text = "администратор";
		}
		if (userType == 2)
		{
			this->comboBox1->Text = "пользователь";
		}
		int userRegister = user.getUserRegister();	//получим код состояния регистации пользователя
		if (userRegister == 1)						//ввыводим расшифровку кода регистрации пользователя
		{
			this->comboBox2->Text = "зарегистрирован";
		}
		if (userRegister == 0)
		{
			this->comboBox2->Text = "не зарегистрирован";
		}
		this->textBox1->ReadOnly = true;		//сделаем id не редактируемым
		this->textBox2->ReadOnly = true;		//сделаем login не редактируемым
		this->textBox3->ReadOnly = true;		//сделаем password не редактируемым
		this->comboBox1->Enabled = false;		//сделаем type не редактируемым
		this->comboBox2->Enabled = false;		//сделаем register не редактируемым
	}
	//если режим работы с данными - редактирование upd
	if (*(this->editMode) == "upd")
	{
		this->button1->Text = "Редактировать";		//изменим надпись на кнопке
		ListUsers* listUsers = new ListUsers();		//создадим объект списка пользователей
		User user = listUsers->getUserByIndex(this->idRowListUsers);				//получим объект user по id
		this->Text = "Редактирование пользователя"; //название формы
		this->textBox1->Text = gcnew String(std::to_string(user.getId()).data());	//заполняем поле id
		this->textBox2->Text = gcnew String((user.getLogin()).data());				//заполняем поле login
		this->textBox3->Text = gcnew String((user.getPassword()).data());			//заполняем поле password
		int userType = user.getUserType();			//получим код типа пользователя
		if (userType == 1)							//выводим расшифровку кода пользователя
		{
			this->comboBox1->Text = "администратор";
		}
		if (userType == 2)
		{
			this->comboBox1->Text = "пользователь";
		}
		int userRegister = user.getUserRegister();	//получим код состояния регистации пользователя
		if (userRegister == 1)						//ввыводим расшифровку кода регистрации пользователя
		{
			this->comboBox2->Text = "зарегистрирован";
		}
		if (userRegister == 0)
		{
			this->comboBox2->Text = "не зарегистрирован";
		}
		this->textBox1->ReadOnly = true;		//сделаем id не редактируемым
	}
}
/// <summary>
/// вызов режима: добавление редактирование удаление
/// </summary>
System::Void MyForm3::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	msclr::interop::marshal_context context;
	std::string idStr = context.marshal_as<std::string>(this->textBox1->Text);			//получим id из поля формы
	int id = std::stoi(idStr);	//из строки в число
	std::string login = context.marshal_as<std::string>(this->textBox2->Text);			//получим логин из поля формы
	std::string password = context.marshal_as<std::string>(this->textBox3->Text);		//получим пароль из поля формы
	std::string userTypeStr = context.marshal_as<std::string>(this->comboBox1->Text);	//получим тип пользователя из поля формы
	std::string userRegisterStr = context.marshal_as<std::string>(this->comboBox2->Text);//получим тип регистрации пользователя из поля формы

	if (!validValuesMyForm3())
	{
		MessageBox::Show("Не все поля заполнены.");
		return;
	}
	
	int userType = 0;
	if (userTypeStr == "администратор")			//выводим расшифровку кода пользователя
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
	int userRegister = 0;
	if (userRegisterStr == "зарегистрирован") // ввыводим расшифровку кода регистрации пользователя
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
	//если выбран режим добавления
	if (*(this->editMode) == "add")
	{
		//MessageBox::Show("ДОБАВИТЬ");
		User user(id, login, userType, userRegister, password);	//строим объект пользователя используя данные из формы
		ListUsers* listUsers = new ListUsers();
		listUsers->addNewUser(user);	//добавляем пользователя в список (в файл)
	}
	//если выбран режим удаления
	if (*(this->editMode) == "del")
	{
		//MessageBox::Show("УДАЛИТЬ");
		User user(id, login, userType, userRegister, password);	//строим объект пользователя используя данные из формы
		ListUsers* listUsers = new ListUsers();
		listUsers->deleteUserById(id);	//удаляем пользователя из списка (из файла)
	}
	//если выбран режим редактирования
	if (*(this->editMode) == "upd")
	{
		//MessageBox::Show("РЕДАКТИРОВАТЬ");
		User user(id, login, userType, userRegister, password);	//строим объект пользователя используя данные из формы
		ListUsers* listUsers = new ListUsers();
		listUsers->updateUser(user);	//редактируем пользователя из списка (из файла)
	}
	this->Close();	//закрываем форму
}
/// <summary>
/// нажатие на кнопку exit
/// </summary>
System::Void MyForm3::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->Close();	//закроем текущую форму
}
/// <summary>
/// метод проверяет заполнение всех полей
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


