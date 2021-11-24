#pragma once
#include "MyForm3.h"
#include <msclr\marshal_cppstd.h>

namespace Project1Git {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm4
	/// </summary>
	public ref class MyForm4 : public System::Windows::Forms::Form
	{
	public:
		MyForm4(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
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
	public: int idRowListUsers;
	public: std::string* editMode;
	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
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
			this->button1->Location = System::Drawing::Point(87, 187);
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
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 2;
			// 
			// MyForm4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(282, 253);
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
		private: System::Void MyForm4_Load(System::Object^ sender, System::EventArgs^ e)
		{
			this->Location = Point(20, 20);
			this->BackColor = System::Drawing::Color::Aqua;
			
			this->button1->Text = "OK";
			if (*(this->editMode) == "del")
			{
				this->label1->Text = "”кажите id учетной записи дл€ удалени€:";
			}
			if (*(this->editMode) == "upd")
			{
				this->label1->Text = "”кажите id учетной записи дл€ редактировани€:";
			}
		}
		private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
		{
			msclr::interop::marshal_context context;
			std::string idStr = context.marshal_as<std::string>(this->textBox1->Text);
			int id = std::stoi(idStr);
			this->idRowListUsers = id - 1;
			Project1Git::MyForm3^ myForm3 = gcnew Project1Git::MyForm3();
			myForm3->editMode = this->editMode;
			myForm3->idRowListUsers = this->idRowListUsers;
			this->Visible = false;
			myForm3->ShowDialog();	
			this->Close();
		}
	};
}
