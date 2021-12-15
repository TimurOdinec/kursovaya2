#include <Windows.h>

#include "MyForm.h"
#include "MyForm1.h"
#include "MyForm2.h"

using namespace Project1Git;

/// <summary>
/// загрузка окна формы для формирования завки на регистрацию нового пользователя
/// </summary>
System::Void MyForm2::MyForm2_Load(System::Object^ sender, System::EventArgs^ e)
{
	this->Location = Point(100, 100);									//расположение формы
	this->BackColor = System::Drawing::Color::Aqua;						//цвет фона формы
	this->button1->Text = "Sign up";									//надпись кнопки Sign up
	this->button2->Text = "Назад";										//надпись кнопки Exit
	this->label1->Text = "Введите данные (для нового пользователя)";	//подпись на форме
	this->label2->Text = "Логин:";										//подпись поля ввода логина
	this->label3->Text = "Пароль:";										//подпись поля ввода пароля
}
/// <summary>
/// нажатие на кнопку Sign up
/// </summary>
System::Void MyForm2::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	ListUsers *listUsers = new ListUsers();		//создадим объект списка пользователей
	msclr::interop::marshal_context context;
	std::string login = context.marshal_as<std::string>(this->textBox2->Text);		//получим логин из поля формы
	std::string password = context.marshal_as<std::string>(this->textBox3->Text);	//получим пароль из поля формы
	if (!validValuesMyForm2())
	{
		MessageBox::Show("Не все поля заполнены.");
		return;
	}
	int newId = listUsers->getNewId();			//высчитаем значение нового id для записи пользователя
	int id = newId;
	int userType = 2;							//для нового пользователя - тип - пользователь (не администратор)
	int userRegister = 0;						//признак - пользователь не зарегистрирован
	User user(id, login, userType, userRegister, password);	//создаем объект пользователя с указанными свойствами
	listUsers->addNewUser(user);				//добавим нового пользователя в список (в файл)
	MessageBox::Show("Новый пользователь отправлен на регистрацию.");
	this->Close();								//закроем текущую форму
}
/// <summary>
/// нажатие на кнопку exit
/// </summary>
System::Void MyForm2::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->Close();	//закроем текущую форму
}
/// <summary>
/// метод проверяет заполнение всех полей
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
