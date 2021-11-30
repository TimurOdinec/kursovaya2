#pragma once
#include "Carpark.h"
#include <msclr\marshal_cppstd.h>

namespace Project1Git {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm5
	/// </summary>
	public ref class MyForm5 : public System::Windows::Forms::Form
	{
	public:
		MyForm5(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm5()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	public: std::string* editMode;
	public: int idRowCars;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(36, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(46, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"label1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(36, 78);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(46, 17);
			this->label2->TabIndex = 1;
			this->label2->Text = L"label2";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(36, 141);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(46, 17);
			this->label3->TabIndex = 2;
			this->label3->Text = L"label3";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(36, 196);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(46, 17);
			this->label4->TabIndex = 3;
			this->label4->Text = L"label4";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(71, 42);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(215, 22);
			this->textBox1->TabIndex = 4;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(71, 163);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(219, 22);
			this->textBox2->TabIndex = 5;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(71, 216);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(219, 22);
			this->textBox3->TabIndex = 6;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(71, 98);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(215, 24);
			this->comboBox1->TabIndex = 7;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(52, 294);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(127, 40);
			this->button1->TabIndex = 8;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm5::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(224, 294);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(127, 40);
			this->button2->TabIndex = 9;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm5::button2_Click);
			// 
			// MyForm5
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(405, 362);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm5";
			this->Text = L"MyForm5";
			this->Load += gcnew System::EventHandler(this, &MyForm5::MyForm5_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: System::Void MyForm5_Load(System::Object^ sender, System::EventArgs^ e) 
		{
			this->Location = Point(20, 20);
			this->BackColor = System::Drawing::Color::Aqua;
			this->label1->Text = "id";
			this->label2->Text = "Текущее состояние авто:";
			this->textBox2->Select();
			this->label3->Text = "Тип машины:";
			this->label4->Text = "Грузоподъемность:";
			this->button1->Text = "Добавить";
			this->button2->Text = "Закрыть";
			this->comboBox1->Items->Add("в ремонте");
			this->comboBox1->Items->Add("списали");
			this->comboBox1->Items->Add("свободна");
			this->comboBox1->Items->Add("занята");
			if (*(this->editMode) == "addCar")
			{
				Carpark *carpark = new Carpark();
				int newId = carpark->getNewId();
				this->textBox1->Text = gcnew String(std::to_string(newId).data());
				this->textBox1->ReadOnly = true;
			}
			if (*(this->editMode) == "delCar")
			{
				this->button1->Text = "Удалить";
				Carpark *carpark = new Carpark();
				Car car = carpark->getUserByIndex(this->idRowCars);
				
				this->textBox1->Text = gcnew String(std::to_string(car.getId()).data());
				this->textBox2->Text = gcnew String(car.getTypeCar().data());
				this->textBox3->Text = gcnew String(std::to_string(car.getCapacityCar()).data());
				int conditionCar = car.getConditionCar();
				if (conditionCar == 1)
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
			}
			if (*(this->editMode) == "updCar")
			{
				this->button1->Text = "Редактировать";
				Carpark* carpark = new Carpark();
				Car car = carpark->getUserByIndex(this->idRowCars);

				this->textBox1->Text = gcnew String(std::to_string(car.getId()).data());
				this->textBox2->Text = gcnew String(car.getTypeCar().data());
				this->textBox3->Text = gcnew String(std::to_string(car.getCapacityCar()).data());
				int conditionCar = car.getConditionCar();
				if (conditionCar == 1)
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
			}
		}
		private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			msclr::interop::marshal_context context;
			std::string idStr = context.marshal_as<std::string>(this->textBox1->Text);
			int id = std::stoi(idStr);
			std::string conditionCarStr = context.marshal_as<std::string>(this->comboBox1->Text);
			int conditionCar = 0;
			if (conditionCarStr == "в ремонте")
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
			std::string typeCar = context.marshal_as<std::string>(this->textBox2->Text);
			std::string capacityCarStr = context.marshal_as<std::string>(this->textBox3->Text);
			double capacityCar = std::stod(capacityCarStr);
			if (*(this->editMode) == "addCar")
			{
				MessageBox::Show("ДОБАВИТЬ");

				Car car(id, conditionCar, typeCar, capacityCar);
				Carpark *carpark = new Carpark();
				carpark->addNewCar(car);
			}
			if (*(this->editMode) == "delCar")
			{
				MessageBox::Show("УДАЛИТЬ");

				Car car(id, conditionCar, typeCar, capacityCar);
				Carpark* carpark = new Carpark();
				carpark->deleteCarById(id);
			}
			if (*(this->editMode) == "updCar")
			{
				MessageBox::Show("РЕДАКТИРОВАТЬ");

				Car car(id, conditionCar, typeCar, capacityCar);
				Carpark* carpark = new Carpark();
				carpark->updateCar(car);
			}
			this->Close();
		}
		private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			this->Close();
		}
	};
}
