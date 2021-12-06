#pragma once

#include <msclr\marshal_cppstd.h>

#include "MyForm3.h"
#include "MyForm5.h"

namespace Project1Git {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm4
	/// </summary>
	public ref class MyForm4 : public System::Windows::Forms::Form
	{
	public:
		MyForm4(void)
		{
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm4()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	public: int idRowListUsers;					//id записи в файле учетных записей
	public: int idRowCars;						//id записи в файле машин автопарка
	public: std::string* editMode;				//режим работы с данными: добавление, редактирование, удаление
	public: System::String^ loginSearchUser;	//логин пользователя для поиска
	
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(137, 183);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(95, 42);
			this->button1->TabIndex = 0;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm4::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(44, 48);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(46, 17);
			this->label1->TabIndex = 1;
			this->label1->Text = L"label1";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(46, 101);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(287, 22);
			this->textBox1->TabIndex = 2;
			// 
			// MyForm4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(390, 253);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm4";
			this->Text = L"MyForm4";
			this->Load += gcnew System::EventHandler(this, &MyForm4::MyForm4_Load);
			this->ResumeLayout(false);
			this->PerformLayout();
		}
#pragma endregion
	/// <summary>
	/// загрузка окна формы для ввода дополнительных данных: id, login (при редактировании, удалении, поиске)
	/// </summary>
	private: System::Void MyForm4_Load(System::Object^, System::EventArgs^);
	/// <summary>
	/// передача дополнительных данных для выполнения редактирования, удаления, поиска
	/// </summary>
	private: System::Void button1_Click(System::Object^, System::EventArgs^);
	/// <summary>
	/// метод проверяет заполнение всех полей
	/// </summary>
	private: bool validValuesMyForm4();
		
	};
}
