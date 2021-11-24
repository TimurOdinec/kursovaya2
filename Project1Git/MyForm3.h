#pragma once
#include <string>
#include "ListUsers.h"
#include <msclr\marshal_cppstd.h>

namespace Project1Git {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm3
	/// </summary>
	public ref class MyForm3 : public System::Windows::Forms::Form
	{
	public:
		MyForm3(void)
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
		~MyForm3()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	public: int idRowListUsers;
	public: std::string *editMode;
	protected:

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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(187, 34);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(144, 22);
			this->textBox1->TabIndex = 0;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(187, 89);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(144, 22);
			this->textBox2->TabIndex = 1;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(187, 146);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(144, 22);
			this->textBox3->TabIndex = 2;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(187, 206);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(144, 24);
			this->comboBox1->TabIndex = 3;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(46, 34);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(46, 17);
			this->label1->TabIndex = 4;
			this->label1->Text = L"label1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(46, 89);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(46, 17);
			this->label2->TabIndex = 5;
			this->label2->Text = L"label2";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(46, 146);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(46, 17);
			this->label3->TabIndex = 6;
			this->label3->Text = L"label3";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(46, 206);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(46, 17);
			this->label4->TabIndex = 7;
			this->label4->Text = L"label4";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(73, 289);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(104, 31);
			this->button1->TabIndex = 8;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm3::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(212, 289);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(108, 31);
			this->button2->TabIndex = 9;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm3::button2_Click);
			// 
			// MyForm3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(412, 358);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm3";
			this->Text = L"MyForm3";
			this->Load += gcnew System::EventHandler(this, &MyForm3::MyForm3_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: System::Void MyForm3_Load(System::Object^ sender, System::EventArgs^ e)
		{
			this->Location = Point(20, 20);
			this->BackColor = System::Drawing::Color::Aqua;
			this->label1->Text = "id";
			this->label2->Text = "Логин:";
			this->textBox2->Select();
			this->label3->Text = "Пароль:";
			this->label4->Text = "Тип пользователя:";
			this->button1->Text = "Добавить";
			this->button2->Text = "Закрыть";
			this->comboBox1->Items->Add("администратор");
			this->comboBox1->Items->Add("пользователь");
			/*std::string ss = *(this->editMode);
			System::String^ t = gcnew String(ss.data());
			MessageBox::Show("tt : " + t);*/
			if (*(this->editMode) == "add")
			{
				ListUsers* listUsers = new ListUsers();
				int newId = listUsers->getNewId();
				this->textBox1->Text = gcnew String(std::to_string(newId).data());
				this->textBox1->ReadOnly = true;
			}
			if (*(this->editMode) == "del")
			{
				this->button1->Text = "Удалить";
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
				if (userType ==2)
				{
					this->comboBox1->Text = "пользователь";
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
			}
		}
		/// <summary>
		/// вызов режима: добавление редактирование удаление
		/// </summary>
		private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
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
			std::string password = context.marshal_as<std::string>(this->textBox3->Text);
			if (*(this->editMode) == "add")
			{
				MessageBox::Show("ДОБАВИТЬ");

				User user(id, login, userType, password);
				ListUsers* listUsers = new ListUsers();
				listUsers->addNewUser(user);
			}
			if (*(this->editMode) == "del")
			{
				MessageBox::Show("УДАЛИТЬ");

				User user(id, login, userType, password);
				ListUsers* listUsers = new ListUsers();
				listUsers->deleteUserById(id);
			}
			if (*(this->editMode) == "upd")
			{
				MessageBox::Show("РЕДАКТИРОВАТЬ");

				User user(id, login, userType, password);
				ListUsers* listUsers = new ListUsers();
				listUsers->updateUser(user);
			}
			this->Close();
		}
		/// <summary>
		/// закрыть
		/// </summary>
		private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)
		{
			this->Close();
		}
	};

}
