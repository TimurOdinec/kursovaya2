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




	private: System::Windows::Forms::Button^ button3;
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
				this->button3 = (gcnew System::Windows::Forms::Button());
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
				// MyForm
				// 
				this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
				this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				this->ClientSize = System::Drawing::Size(1135, 544);
				this->Controls->Add(this->button3);
				this->Name = L"MyForm";
				this->Text = L"MyForm";
				this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
				this->ResumeLayout(false);

			}
	#pragma endregion
			
			private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e)
			{
				this->BackColor = System::Drawing::Color::Aqua;
				Project1Git::MyForm1^ myForm1 = gcnew Project1Git::MyForm1();
				myForm1->ShowDialog();
			}
			
			private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) 
			{
				this->Close();
			}
};

}
