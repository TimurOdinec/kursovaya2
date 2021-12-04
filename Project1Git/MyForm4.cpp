#include "MyForm4.h"

using namespace Project1Git;

/// <summary>
/// загрузка окна формы для ввода дополнительных данных: id, login (при редактировании, удалении, поиске)
/// </summary>
/// <param name="sender"></param>
/// <param name="e"></param>
/// <returns></returns>
System::Void MyForm4::MyForm4_Load(System::Object^ sender, System::EventArgs^ e)
{
	this->Location = Point(150, 150);				//расположение формы
	this->BackColor = System::Drawing::Color::Aqua;	//цвет фона формы
	this->button1->Text = "OK";						//надпись кнопки ОК
	this->Text = "Ввод данных";						//название формы
	//изменяем надпись на форме в зависимости от выбранного режима: удаоление, редактирование, поиск
	if (*(this->editMode) == "del")
	{
		this->label1->Text = "Укажите id учетной записи для удаления:";
	}
	if (*(this->editMode) == "upd")
	{
		this->label1->Text = "Укажите id учетной записи для редактирования:";
	}
	if (*(this->editMode) == "search")
	{
		this->label1->Text = "Укажите login пользователя:";
	}
	if (*(this->editMode) == "delCar")
	{
		this->label1->Text = "Укажите id авто удаления:";
	}
	if (*(this->editMode) == "updCar")
	{
		this->label1->Text = "Укажите id авто для редактирования:";
	}
}
/// <summary>
/// передача дополнительных данных для выполнения редактирования, удаления, поиска
/// </summary>
/// <param name="sender"></param>
/// <param name="e"></param>
/// <returns></returns>
System::Void MyForm4::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	//для поиска забираем из формы логин пользователя
	if (*(this->editMode) == "search")
	{
		loginSearchUser = this->textBox1->Text;
		//MessageBox::Show("loginSearchUser : "+ loginSearchUser);
	}
	//для удаления и редактирования пользователей забираем значение id из формы 
	if ((*(this->editMode) == "del") || (*(this->editMode) == "upd"))
	{
		msclr::interop::marshal_context context;
		std::string idStr = context.marshal_as<std::string>(this->textBox1->Text);
		int id = std::stoi(idStr);
		this->idRowListUsers = id;
		//создаем форму с данными о пользователе
		Project1Git::MyForm3^ myForm3 = gcnew Project1Git::MyForm3();
		myForm3->editMode = this->editMode;				//передаем режим (редактирование, удаление)
		myForm3->idRowListUsers = this->idRowListUsers;	//передаем id записи
		this->Visible = false;							//прячем текущую форму
		myForm3->ShowDialog();							//открываем форму с данными о пользователе
	}
	//для удаления и редактирования машин забираем значение id из формы 
	if ((*(this->editMode) == "delCar") || (*(this->editMode) == "updCar"))
	{
		msclr::interop::marshal_context context;
		std::string idStr = context.marshal_as<std::string>(this->textBox1->Text);
		int id = std::stoi(idStr);
		this->idRowCars = id;
		//создаем форму с данными о машине
		Project1Git::MyForm5^ myForm5 = gcnew Project1Git::MyForm5();
		myForm5->editMode = this->editMode;		//передаем режим (редактирование, удаление)
		myForm5->idRowCars = this->idRowCars;	//передаем id записи
		this->Visible = false;					//прячем текущую форму
		myForm5->ShowDialog();					//открываем форму с данными о пользователе
	}
	this->Close();	//закрываем текущую форму
}