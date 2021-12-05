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
/// загрузка окна формы с авторизацией
/// </summary>
System::Void MyForm1::MyForm1_Load(System::Object^ sender, System::EventArgs^ e)
{
	this->Location = Point(100, 100);				//расположение формы
	this->BackColor = System::Drawing::Color::Aqua;	//цвет фона формы
	this->Text = "Авторизация пользователя";		//название формы
	this->button1->Text = "Sign in";				//надпись кнопки Sign in
	this->button2->Text = "Sign up";				//надпись кнопки Sign up
	this->button3->Text = "Exit";					//надпись кнопки Exit
	this->label1->Text = "Логин:";					//подпись поля ввода логина
	this->label2->Text = "Пароль:";					//подпись поля ввода пароля
	login = "";										//логин при открытии формы
	password = "";									//пароль при открытии формы
}
/// <summary>
/// нажатие на кнопку sign in
/// </summary>
System::Void MyForm1::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	login = this->textBox1->Text;		//записываем в логин текст из поля textBox1
	password = this->textBox2->Text;	//записываем в пароль текст из поля textBox2
	checkUser(login, password);			//проверка текущего пользователя (наличие записи в базе/файле)
	this->Close();						//закрываем текущую форму
}
/// <summary>
/// метод проверки текущего пользователя по переданным логину и паролю
/// </summary>
/// <param name="login"></param>
/// <param name="password"></param>
void MyForm1::checkUser(System::String^ login, System::String^ password)
{
	msclr::interop::marshal_context context;	//Используйте класс marshal_context для преобразования данных, требующего контекста.
	std::string loginString = context.marshal_as<std::string>(login);		//переносим login из поля в переменную
	std::string passwordString = context.marshal_as<std::string>(password);	//переносим password из поля в переменную
	///////////////////////////////////////////////////////////////////////
	//System::String^ t1 = gcnew System::String(loginString.data());
	//System::String^ t2 = gcnew System::String(passwordString.data());
	//MessageBox::Show("MyForm1:" + t1 + ":" + t2);
	///////////////////////////////////////////////////////////////////////					
	//создаем объект авторизации, передаем введенные на форме логин и пароль
	Authorization authorization(loginString, passwordString);
	//проверяем есть ли данные текущего пользователя в файле пользователей
	if (authorization.checkCurrentUser())
	{
		//получаем текущего пользователя (все данные)
		User currentUser = authorization.getCurrentUser();
		//записываем в свойства класса данные по текущему пользователю
		currentLogin = gcnew System::String(currentUser.getLogin().data());
		currentType = currentUser.getUserType();
	}
	else
	{
		//если данные пользователя не найдены выводим сообщение
		MessageBox::Show("Ваша учетная запись не зарегистрирована.");
	}
}
/// <summary>
/// нажатие на кнопку sign up
/// </summary>
System::Void MyForm1::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	Project1Git::MyForm2^ myForm2 = gcnew Project1Git::MyForm2();
	myForm2->ShowDialog();
}
/// <summary>
/// нажатие на кнопку exit
/// </summary>
System::Void MyForm1::button3_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->Close();
}