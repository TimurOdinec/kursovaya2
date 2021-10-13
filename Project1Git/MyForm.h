#pragma once
#include "MyForm1.h"

namespace Project1Git {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
		public:
			MyForm(void)
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
			~MyForm()
			{
				if (components)
				{
					delete components;
				}
			}
		private: System::Windows::Forms::Button^ button1;
		private: System::Windows::Forms::Button^ button2;
		private: System::Windows::Forms::TextBox^ textBox1;
		private: System::Windows::Forms::TextBox^ textBox2;
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
				this->button2 = (gcnew System::Windows::Forms::Button());
				this->textBox1 = (gcnew System::Windows::Forms::TextBox());
				this->textBox2 = (gcnew System::Windows::Forms::TextBox());
				this->SuspendLayout();
				// 
				// button1
				// 
				this->button1->Location = System::Drawing::Point(97, 240);
				this->button1->Name = L"button1";
				this->button1->Size = System::Drawing::Size(131, 35);
				this->button1->TabIndex = 0;
				this->button1->Text = L"button1";
				this->button1->UseVisualStyleBackColor = true;
				this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
				// 
				// button2
				// 
				this->button2->Location = System::Drawing::Point(263, 240);
				this->button2->Name = L"button2";
				this->button2->Size = System::Drawing::Size(131, 35);
				this->button2->TabIndex = 1;
				this->button2->Text = L"button2";
				this->button2->UseVisualStyleBackColor = true;
				this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
				// 
				// textBox1
				// 
				this->textBox1->Location = System::Drawing::Point(97, 45);
				this->textBox1->Name = L"textBox1";
				this->textBox1->Size = System::Drawing::Size(297, 22);
				this->textBox1->TabIndex = 2;
				// 
				// textBox2
				// 
				this->textBox2->Location = System::Drawing::Point(97, 118);
				this->textBox2->Name = L"textBox2";
				this->textBox2->Size = System::Drawing::Size(297, 22);
				this->textBox2->TabIndex = 3;
				// 
				// MyForm
				// 
				this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
				this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				this->ClientSize = System::Drawing::Size(510, 303);
				this->Controls->Add(this->textBox2);
				this->Controls->Add(this->textBox1);
				this->Controls->Add(this->button2);
				this->Controls->Add(this->button1);
				this->Name = L"MyForm";
				this->Text = L"MyForm";
				this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
				this->ResumeLayout(false);
				this->PerformLayout();

			}
	#pragma endregion
			private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
			{
				MessageBox::Show("HELLO TIMUR");
				//this->Hide();
				Project1Git::MyForm1^ myForm1 = gcnew Project1Git::MyForm1();
				myForm1->Show();
				

				//this->Close();
				
				
			}
			private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e)
			{
				this->BackColor = System::Drawing::Color::Aqua;
				this->button1->Text = "Sign in";
				this->button2->Text = "Sign up";
				
			}
			private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
			{
				MessageBox::Show("HOW ARE YOUR?");
			}
	};

}
