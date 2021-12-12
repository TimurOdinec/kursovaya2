#include "MyForm5.h"
#include "WorkWithFiles.h"

using namespace Project1Git;

/// <summary>
/// загрузка окна формы для добавления, редактирования, удаления авто
/// </summary>
System::Void MyForm5::MyForm5_Load(System::Object^ sender, System::EventArgs^ e)
{
	this->Location = Point(100, 100);				//расположение формы
	this->BackColor = System::Drawing::Color::Aqua;	//цвет фона формы		
	this->label1->Text = "id:";						//подпись поля id 
	this->label2->Text = "Текущее состояние авто:";	//подпись поля condition 
	this->textBox2->Select();						//фокус на поле condition
	this->label3->Text = "Тип машины:";				//подпись поля typeAvto
	this->label4->Text = "Грузоподъемность:";		//подпись поля capacity
	this->button1->Text = "Добавить";				//надпись кнопки Добавить
	this->button2->Text = "Закрыть";				//надпись кнопки Закрыть
	this->comboBox1->Items->Add("в ремонте");		//заполнение выпадающего списка состояние авто
	this->comboBox1->Items->Add("списали");			//заполнение выпадающего списка состояние авто
	this->comboBox1->Items->Add("свободна");		//заполнение выпадающего списка состояние авто
	this->comboBox1->Items->Add("занята");			//заполнение выпадающего списка состояние авто
	//если режим работы с данными - добавление add
	if (*(this->editMode) == "addCar")
	{
		Carpark* carpark = new Carpark();	//создадим объект списка авто в автопарке
		int newId = carpark->getNewId();	//высчитаем значение нового id для записи авто
		this->Text = "Добавление авто";		//название формы
		this->textBox1->Text = gcnew String(std::to_string(newId).data());	//внесем новый id на поле формы 
		this->textBox1->ReadOnly = true;	//сделаем id не редактируемым
	}
	//если режим работы с данными - удаление del
	if (*(this->editMode) == "delCar")
	{
		this->button1->Text = "Удалить";	//изменим надпись на кнопке
		Carpark* carpark = new Carpark();	//создадим объект списка авто в автопарке
		Car car = carpark->getCarByIndex(this->idRowCars);									//получим объект car по id
		this->Text = "Удаление авто";		//название формы
		this->textBox1->Text = gcnew String(std::to_string(car.getId()).data());			//заполняем поле id
		if (car.getId() == -1)
		{
			MessageBox::Show("Учетной записи с таким id не существует.");
			this->Close();	//закрываем форму
		}
		this->textBox2->Text = gcnew String(car.getTypeCar().data());						//заполняем поле typrCar
		this->textBox3->Text = gcnew String(std::to_string(car.getCapacityCar()).data());	//заполняем поле capacity
		int conditionCar = car.getConditionCar();
		if (conditionCar == 1)				//выводим расшифровку кода состояния авто
		{
			this->comboBox1->Text = "в ремонте";
		}
		if (conditionCar == 2)
		{
			this->comboBox1->Text = "списали";
		}
		if (conditionCar == 3)
		{
			this->comboBox1->Text = "свободна";
		}
		if (conditionCar == 4)
		{
			this->comboBox1->Text = "занята";
		}
		this->textBox1->ReadOnly = true;		//сделаем id не редактируемым
		this->textBox2->ReadOnly = true;		//сделаем typeCar не редактируемым
		this->textBox3->ReadOnly = true;		//сделаем capacityCar не редактируемым
		this->comboBox1->Enabled = false;		//сделаем conditionCar не редактируемым
	}
	//если режим работы с данными - редактирование updCar
	if (*(this->editMode) == "updCar")
	{
		this->button1->Text = "Редактировать";				//изменим надпись на кнопке
		Carpark* carpark = new Carpark();					//создадим объект списка автомобилей
		Car car = carpark->getCarByIndex(this->idRowCars);	//получим объект car по id
		this->Text = "Редактирование авто";		//название формы
		this->textBox1->Text = gcnew String(std::to_string(car.getId()).data());			//заполняем поле id
		if (car.getId() == -1)
		{
			MessageBox::Show("Учетной записи с таким id не существует.");
			this->Close();	//закрываем форму
		}
		this->textBox2->Text = gcnew String(car.getTypeCar().data());						//заполняем поле typeCar
		this->textBox3->Text = gcnew String(std::to_string(car.getCapacityCar()).data());	//заполняем поле capacity
		int conditionCar = car.getConditionCar();			//получим код состояния авто
		if (conditionCar == 1)								//выводим расшифровку кода состояния авто
		{
			this->comboBox1->Text = "в ремонте";
		}
		if (conditionCar == 2)
		{
			this->comboBox1->Text = "списали";
		}
		if (conditionCar == 3)
		{
			this->comboBox1->Text = "свободна";
		}
		if (conditionCar == 4)
		{
			this->comboBox1->Text = "занята";
		}
		this->textBox1->ReadOnly = true;		//сделаем id не редактируемым
	}
}
/// <summary>
/// вызов режима: добавление, редактирование, удаление
/// </summary>
System::Void MyForm5::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (!validValuesMyForm5())
	{
		MessageBox::Show("Не все поля заполнены.");
		return;
	}

	msclr::interop::marshal_context context;
	std::string idStr = context.marshal_as<std::string>(this->textBox1->Text);				//получим id из поля формы
	int id = std::stoi(idStr);						//из строки в число
	std::string typeCar = context.marshal_as<std::string>(this->textBox2->Text);			//получим тип авто из поля формы
	std::string capacityCarStr = context.marshal_as<std::string>(this->textBox3->Text);		//получим грузоподъемность из поля формы
	double capacityCar = std::stod(capacityCarStr);	//из строки в число
	std::string conditionCarStr = context.marshal_as<std::string>(this->comboBox1->Text);	//получим код состояния авто из поля формы
		
	int conditionCar = 0;
	if (conditionCarStr == "в ремонте")	//выводим расшифровку кода состояния авто
	{
		conditionCar = 1;
	}
	else
	{
		if (conditionCarStr == "списали")
		{
			conditionCar = 2;
		}
		else
		{
			if (conditionCarStr == "свободна")
			{
				conditionCar = 3;
			}
			else
			{
				if (conditionCarStr == "занята")
				{
					conditionCar = 4;
				}
			}
		}
	}
	WorkWithFiles* workWithFiles = new WorkWithFiles();
	workWithFiles->createAndSaveTempFile("carpark");
	//если выбран режим добавления
	if (*(this->editMode) == "addCar")
	{
		//MessageBox::Show("ДОБАВИТЬ");
		Car car(id, conditionCar, typeCar, capacityCar);	//строим объект авто используя данные из формы
		Carpark* carpark = new Carpark();
		carpark->addNewCar(car);	//добавляем авто в список (в файл)
	}
	//если выбран режим удаления
	if (*(this->editMode) == "delCar")
	{
		//MessageBox::Show("УДАЛИТЬ");
		Car car(id, conditionCar, typeCar, capacityCar);	//строим объект авто используя данные из формы
		Carpark* carpark = new Carpark();
		carpark->deleteCarById(id);	//удаляем авто из списка (из файла)
	}
	//если выбран режим редактирования
	if (*(this->editMode) == "updCar")
	{
		//MessageBox::Show("РЕДАКТИРОВАТЬ");
		Car car(id, conditionCar, typeCar, capacityCar);	//строим объект авто используя данные из формы
		Carpark* carpark = new Carpark();
		carpark->updateCar(car);	//редактируем авто в списке (в файле)
	}
	this->Close();	//закроем текущую форму
}
/// <summary>
/// нажатие на кнопку exit
/// </summary>
System::Void MyForm5::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->Close();	//закроем текущую форму
}
/// <summary>
/// метод проверяет заполнение всех полей
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