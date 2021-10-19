#pragma once
#include "MyForm1.h"
#include "MyForm2.h"
#include <string>

namespace Project1Git {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
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
			/// Освободить все используемые ресурсы.
			/// </summary>
			~MyForm()
			{
				if (components)
				{
					delete components;
				}
			}

		public: System::Windows::Forms::Button^ button3;
		private: System::Windows::Forms::Label^ label1;
		
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
				this->button3 = (gcnew System::Windows::Forms::Button());
				this->label1 = (gcnew System::Windows::Forms::Label());
				this->SuspendLayout();
				// 
				// button3
				// 
				this->button3->Location = System::Drawing::Point(1032, 486);
				this->button3->Name = L"button3";
				this->button3->Size = System::Drawing::Size(67, 35);
				this->button3->TabIndex = 4;
				this->button3->Text = L"button3";
				this->button3->UseVisualStyleBackColor = true;
				this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
				// 
				// label1
				// 
				this->label1->AutoSize = true;
				this->label1->Location = System::Drawing::Point(34, 38);
				this->label1->Name = L"label1";
				this->label1->Size = System::Drawing::Size(46, 17);
				this->label1->TabIndex = 5;
				this->label1->Text = L"label1";
				// 
				// MyForm
				// 
				this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
				this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				this->ClientSize = System::Drawing::Size(1135, 544);
				this->Controls->Add(this->label1);
				this->Controls->Add(this->button3);
				this->Name = L"MyForm";
				this->Text = L"MyForm";
				this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
				this->ResumeLayout(false);
				this->PerformLayout();

			}
		#pragma endregion
			
			private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e)
			{
				this->Location = Point(20, 20);
				this->BackColor = System::Drawing::Color::Aqua;
				this->button3->Text = "Exit";

				Project1Git::MyForm1^ myForm1 = gcnew Project1Git::MyForm1();
				myForm1->ShowDialog();
				if ((myForm1->login)->Length == 0)
				{
					this->label1->Text = "Авторизация не прошла";
				}
				else
				{
					this->label1->Text = "Добро пожаловать!" + (myForm1->login);
				}
			}
			
			private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) 
			{
				this->Close();
			}
	};

}
