#pragma once
#include "MyForm1.h"
#include "MyForm2.h"
#include "MyForm3.h"
#include "MyForm4.h"
#include "ListUsers.h"
#include <string>
#include <msclr\marshal_cppstd.h>

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
		private: System::Windows::Forms::DataGridView^ dataGridView1;

		private: System::Windows::Forms::MenuStrip^ menuStrip1;
		private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem1;
		private: System::Windows::Forms::ToolStripMenuItem^ p1ToolStripMenuItem;
		private: System::Windows::Forms::ToolStripMenuItem^ p2ToolStripMenuItem;
		private: System::Windows::Forms::ToolStripMenuItem^ p3ToolStripMenuItem;
		private: System::Windows::Forms::ToolStripMenuItem^ p11ToolStripMenuItem;
		private: System::Windows::Forms::ToolStripMenuItem^ p12ToolStripMenuItem;
		private: System::Windows::Forms::ToolStripMenuItem^ p13ToolStripMenuItem;
		private: System::Windows::Forms::ToolStripMenuItem^ p21ToolStripMenuItem;
		private: System::Windows::Forms::ToolStripMenuItem^ p22ToolStripMenuItem;
		private: System::Windows::Forms::ToolStripMenuItem^ p23ToolStripMenuItem;
		private: System::Windows::Forms::ToolStripMenuItem^ p14ToolStripMenuItem;
		private: System::Windows::Forms::ToolStripMenuItem^ p15ToolStripMenuItem;
		private: System::Windows::Forms::ToolStripMenuItem^ p24ToolStripMenuItem;
		private: System::Windows::Forms::ToolStripMenuItem^ p25ToolStripMenuItem;
		private: System::Windows::Forms::ToolStripMenuItem^ p26ToolStripMenuItem;
		private: System::Windows::Forms::ToolStripMenuItem^ p251ToolStripMenuItem;
		private: System::Windows::Forms::ToolStripMenuItem^ p252ToolStripMenuItem;
		private: System::Windows::Forms::ToolStripMenuItem^ p253ToolStripMenuItem;
		private: System::Windows::Forms::ToolStripMenuItem^ p254ToolStripMenuItem;
		private: System::Windows::Forms::ToolStripMenuItem^ p151ToolStripMenuItem;
		private: System::Windows::Forms::ToolStripMenuItem^ p152ToolStripMenuItem;
		private: System::Windows::Forms::ToolStripMenuItem^ p4ToolStripMenuItem;

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
				this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
				this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
				this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
				this->p1ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				this->p11ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				this->p12ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				this->p13ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				this->p14ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				this->p15ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				this->p151ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				this->p152ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				this->p2ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				this->p21ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				this->p22ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				this->p23ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				this->p24ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				this->p25ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				this->p251ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				this->p252ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				this->p253ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				this->p254ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				this->p26ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				this->p3ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				this->p4ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
				this->menuStrip1->SuspendLayout();
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
				this->label1->Location = System::Drawing::Point(34, 101);
				this->label1->Name = L"label1";
				this->label1->Size = System::Drawing::Size(46, 17);
				this->label1->TabIndex = 5;
				this->label1->Text = L"label1";
				// 
				// dataGridView1
				// 
				this->dataGridView1->AllowUserToAddRows = false;
				this->dataGridView1->AllowUserToDeleteRows = false;
				this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
				this->dataGridView1->Location = System::Drawing::Point(37, 174);
				this->dataGridView1->Name = L"dataGridView1";
				this->dataGridView1->ReadOnly = true;
				this->dataGridView1->RowHeadersWidth = 51;
				this->dataGridView1->RowTemplate->Height = 24;
				this->dataGridView1->Size = System::Drawing::Size(1018, 271);
				this->dataGridView1->TabIndex = 6;
				// 
				// menuStrip1
				// 
				this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
				this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->toolStripMenuItem1 });
				this->menuStrip1->Location = System::Drawing::Point(0, 0);
				this->menuStrip1->Name = L"menuStrip1";
				this->menuStrip1->Size = System::Drawing::Size(1135, 28);
				this->menuStrip1->TabIndex = 7;
				this->menuStrip1->Text = L"menuStrip1";
				// 
				// toolStripMenuItem1
				// 
				this->toolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
					this->p1ToolStripMenuItem,
						this->p2ToolStripMenuItem, this->p3ToolStripMenuItem, this->p4ToolStripMenuItem
				});
				this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
				this->toolStripMenuItem1->Size = System::Drawing::Size(156, 24);
				this->toolStripMenuItem1->Text = L"toolStripMenuItem1";
				// 
				// p1ToolStripMenuItem
				// 
				this->p1ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
					this->p11ToolStripMenuItem,
						this->p12ToolStripMenuItem, this->p13ToolStripMenuItem, this->p14ToolStripMenuItem, this->p15ToolStripMenuItem
				});
				this->p1ToolStripMenuItem->Name = L"p1ToolStripMenuItem";
				this->p1ToolStripMenuItem->Size = System::Drawing::Size(224, 26);
				this->p1ToolStripMenuItem->Text = L"p1";
				// 
				// p11ToolStripMenuItem
				// 
				this->p11ToolStripMenuItem->Name = L"p11ToolStripMenuItem";
				this->p11ToolStripMenuItem->Size = System::Drawing::Size(224, 26);
				this->p11ToolStripMenuItem->Text = L"p11";
				this->p11ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::p11ToolStripMenuItem_Click);
				// 
				// p12ToolStripMenuItem
				// 
				this->p12ToolStripMenuItem->Name = L"p12ToolStripMenuItem";
				this->p12ToolStripMenuItem->Size = System::Drawing::Size(224, 26);
				this->p12ToolStripMenuItem->Text = L"p12";
				this->p12ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::p12ToolStripMenuItem_Click);
				// 
				// p13ToolStripMenuItem
				// 
				this->p13ToolStripMenuItem->Name = L"p13ToolStripMenuItem";
				this->p13ToolStripMenuItem->Size = System::Drawing::Size(224, 26);
				this->p13ToolStripMenuItem->Text = L"p13";
				this->p13ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::p13ToolStripMenuItem_Click);
				// 
				// p14ToolStripMenuItem
				// 
				this->p14ToolStripMenuItem->Name = L"p14ToolStripMenuItem";
				this->p14ToolStripMenuItem->Size = System::Drawing::Size(224, 26);
				this->p14ToolStripMenuItem->Text = L"p14";
				this->p14ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::p14ToolStripMenuItem_Click);
				// 
				// p15ToolStripMenuItem
				// 
				this->p15ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
					this->p151ToolStripMenuItem,
						this->p152ToolStripMenuItem
				});
				this->p15ToolStripMenuItem->Name = L"p15ToolStripMenuItem";
				this->p15ToolStripMenuItem->Size = System::Drawing::Size(224, 26);
				this->p15ToolStripMenuItem->Text = L"p15";
				// 
				// p151ToolStripMenuItem
				// 
				this->p151ToolStripMenuItem->Name = L"p151ToolStripMenuItem";
				this->p151ToolStripMenuItem->Size = System::Drawing::Size(125, 26);
				this->p151ToolStripMenuItem->Text = L"p151";
				// 
				// p152ToolStripMenuItem
				// 
				this->p152ToolStripMenuItem->Name = L"p152ToolStripMenuItem";
				this->p152ToolStripMenuItem->Size = System::Drawing::Size(125, 26);
				this->p152ToolStripMenuItem->Text = L"p152";
				// 
				// p2ToolStripMenuItem
				// 
				this->p2ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
					this->p21ToolStripMenuItem,
						this->p22ToolStripMenuItem, this->p23ToolStripMenuItem, this->p24ToolStripMenuItem, this->p25ToolStripMenuItem, this->p26ToolStripMenuItem
				});
				this->p2ToolStripMenuItem->Name = L"p2ToolStripMenuItem";
				this->p2ToolStripMenuItem->Size = System::Drawing::Size(224, 26);
				this->p2ToolStripMenuItem->Text = L"p2";
				// 
				// p21ToolStripMenuItem
				// 
				this->p21ToolStripMenuItem->Name = L"p21ToolStripMenuItem";
				this->p21ToolStripMenuItem->Size = System::Drawing::Size(117, 26);
				this->p21ToolStripMenuItem->Text = L"p21";
				// 
				// p22ToolStripMenuItem
				// 
				this->p22ToolStripMenuItem->Name = L"p22ToolStripMenuItem";
				this->p22ToolStripMenuItem->Size = System::Drawing::Size(117, 26);
				this->p22ToolStripMenuItem->Text = L"p22";
				// 
				// p23ToolStripMenuItem
				// 
				this->p23ToolStripMenuItem->Name = L"p23ToolStripMenuItem";
				this->p23ToolStripMenuItem->Size = System::Drawing::Size(117, 26);
				this->p23ToolStripMenuItem->Text = L"p23";
				// 
				// p24ToolStripMenuItem
				// 
				this->p24ToolStripMenuItem->Name = L"p24ToolStripMenuItem";
				this->p24ToolStripMenuItem->Size = System::Drawing::Size(117, 26);
				this->p24ToolStripMenuItem->Text = L"p24";
				// 
				// p25ToolStripMenuItem
				// 
				this->p25ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
					this->p251ToolStripMenuItem,
						this->p252ToolStripMenuItem, this->p253ToolStripMenuItem, this->p254ToolStripMenuItem
				});
				this->p25ToolStripMenuItem->Name = L"p25ToolStripMenuItem";
				this->p25ToolStripMenuItem->Size = System::Drawing::Size(117, 26);
				this->p25ToolStripMenuItem->Text = L"p25";
				// 
				// p251ToolStripMenuItem
				// 
				this->p251ToolStripMenuItem->Name = L"p251ToolStripMenuItem";
				this->p251ToolStripMenuItem->Size = System::Drawing::Size(125, 26);
				this->p251ToolStripMenuItem->Text = L"p251";
				// 
				// p252ToolStripMenuItem
				// 
				this->p252ToolStripMenuItem->Name = L"p252ToolStripMenuItem";
				this->p252ToolStripMenuItem->Size = System::Drawing::Size(125, 26);
				this->p252ToolStripMenuItem->Text = L"p252";
				// 
				// p253ToolStripMenuItem
				// 
				this->p253ToolStripMenuItem->Name = L"p253ToolStripMenuItem";
				this->p253ToolStripMenuItem->Size = System::Drawing::Size(125, 26);
				this->p253ToolStripMenuItem->Text = L"p253";
				// 
				// p254ToolStripMenuItem
				// 
				this->p254ToolStripMenuItem->Name = L"p254ToolStripMenuItem";
				this->p254ToolStripMenuItem->Size = System::Drawing::Size(125, 26);
				this->p254ToolStripMenuItem->Text = L"p254";
				// 
				// p26ToolStripMenuItem
				// 
				this->p26ToolStripMenuItem->Name = L"p26ToolStripMenuItem";
				this->p26ToolStripMenuItem->Size = System::Drawing::Size(117, 26);
				this->p26ToolStripMenuItem->Text = L"p26";
				// 
				// p3ToolStripMenuItem
				// 
				this->p3ToolStripMenuItem->Name = L"p3ToolStripMenuItem";
				this->p3ToolStripMenuItem->Size = System::Drawing::Size(224, 26);
				this->p3ToolStripMenuItem->Text = L"p3";
				this->p3ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::p3ToolStripMenuItem_Click);
				// 
				// p4ToolStripMenuItem
				// 
				this->p4ToolStripMenuItem->Name = L"p4ToolStripMenuItem";
				this->p4ToolStripMenuItem->Size = System::Drawing::Size(224, 26);
				this->p4ToolStripMenuItem->Text = L"p4";
				this->p4ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::p4ToolStripMenuItem_Click);
				// 
				// MyForm
				// 
				this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
				this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				this->ClientSize = System::Drawing::Size(1135, 544);
				this->Controls->Add(this->dataGridView1);
				this->Controls->Add(this->label1);
				this->Controls->Add(this->button3);
				this->Controls->Add(this->menuStrip1);
				this->MainMenuStrip = this->menuStrip1;
				this->Name = L"MyForm";
				this->Text = L"MyForm";
				this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
				this->menuStrip1->ResumeLayout(false);
				this->menuStrip1->PerformLayout();
				this->ResumeLayout(false);
				this->PerformLayout();

			}
		#pragma endregion
			/// <summary>
			/// загрузка основной формы
			/// </summary>
			private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e)
			{
				this->Location = Point(20, 20);					//верхний угол формы
				this->BackColor = System::Drawing::Color::Aqua;	//цвет фона формы
				this->button3->Text = "Exit";					//название кнопки
				this->dataGridView1->Visible = false;			//прячем твблицу
				//создание новой формы авторизации
				Project1Git::MyForm1^ myForm1 = gcnew Project1Git::MyForm1();
				myForm1->ShowDialog();	//передача фокуса форме авторизации
				//проверяем была ли введена строка в поле login
				if ((myForm1->login)->Length == 0)
				{
					this->label1->Text = "Авторизация не прошла";
				}
				else
				{
					this->label1->Text = "Добро пожаловать!  " + (myForm1->login);
				}

				System::String^ test =  myForm1->currentLogin;
				msclr::interop::marshal_context context;
				std::string loginTest = context.marshal_as<std::string>(test);
				
				int currentTypeTest = myForm1->currentType;

				if (currentTypeTest == 1)
				{
					this->toolStripMenuItem1->Text = "Меню администратора";

					this->p1ToolStripMenuItem->Text = "Работа с учетными данными";
					this->p11ToolStripMenuItem->Text = "Просмотр учетных данных";
					this->p12ToolStripMenuItem->Text = "Добавление учетных данных";
					this->p13ToolStripMenuItem->Text = "Удаление учетных данных";
					this->p14ToolStripMenuItem->Text = "Редактирование учетных данных";
					this->p15ToolStripMenuItem->Text = "Поиск учетных данных";
					this->p151ToolStripMenuItem->Text = "Поиск по логину";
					this->p152ToolStripMenuItem->Text = "Поиск незарегистрированных пользователей";

					this->p2ToolStripMenuItem->Text = "Работа с данными по автопарку";
					this->p21ToolStripMenuItem->Text = "Просмотр данных";
					this->p22ToolStripMenuItem->Text = "Добавление данных";
					this->p23ToolStripMenuItem->Text = "Удаление данных";
					this->p24ToolStripMenuItem->Text = "Редактирование данных";
					this->p25ToolStripMenuItem->Text = "Поиск данных";
					this->p251ToolStripMenuItem->Text = "Поиск свободных машин";
					this->p252ToolStripMenuItem->Text = "Поиск занятых машин";
					this->p253ToolStripMenuItem->Text = "Поиск ремонтируемых машин";
					this->p254ToolStripMenuItem->Text = "Поиск списанных машин";
					this->p26ToolStripMenuItem->Text = "Сортировка данных";
					this->p3ToolStripMenuItem->Text = "Сменить пользователя";
					this->p4ToolStripMenuItem->Text = "Выход";
				}
				else
				{
					if (currentTypeTest == 2)
					{
						this->toolStripMenuItem1->Text = "Меню пользователя";
						this->p1ToolStripMenuItem->Available = false;
						this->p11ToolStripMenuItem->Available = false;
						this->p12ToolStripMenuItem->Available = false;
						this->p13ToolStripMenuItem->Available = false;
						this->p14ToolStripMenuItem->Available = false;
						this->p15ToolStripMenuItem->Available = false;

						this->p2ToolStripMenuItem->Text = "Работа с данными по автопарку";
						this->p21ToolStripMenuItem->Text = "Просмотр данных";
						this->p22ToolStripMenuItem->Available = false;
						this->p23ToolStripMenuItem->Available = false;
						this->p24ToolStripMenuItem->Available = false;
						this->p25ToolStripMenuItem->Text = "Поиск данных";
						this->p26ToolStripMenuItem->Text = "Сортировка данных";
						this->p3ToolStripMenuItem->Text = "Сменить пользователя";
						this->p4ToolStripMenuItem->Text = "Выход";
					}
					else
					{
						MessageBox::Show("Вы не авторизированы.");
						myForm1->ShowDialog();	//передача фокуса форме авторизации
					}
				}
				
				
			}
			/// <summary>
			/// нажатие на кнопку Exit
			/// </summary>
			private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) 
			{
				this->Close();	//закрытие формы
			}
			/// <summary>
			/// выход в окно авторизации
			/// </summary>
			private: System::Void p3ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
			{
				this->SetVisibleCore(false);	//скрытие формы
				//создание новой формы авторизации
				Project1Git::MyForm1^ myForm1 = gcnew Project1Git::MyForm1();
				myForm1->ShowDialog();			//передача фокуса форме авторизации
				this->SetVisibleCore(true);	//скрытие формы
				int currentTypeTest = myForm1->currentType;

				if (currentTypeTest == 1)
				{
					this->toolStripMenuItem1->Text = "Меню администратора";

					this->p1ToolStripMenuItem->Text = "Работа с учетными данными";
					this->p11ToolStripMenuItem->Text = "Просмотр учетных данных";
					this->p12ToolStripMenuItem->Text = "Добавление учетных данных";
					this->p13ToolStripMenuItem->Text = "Удаление учетных данных";
					this->p14ToolStripMenuItem->Text = "Редактирование учетных данных";
					this->p15ToolStripMenuItem->Text = "Поиск учетных данных";
					this->p151ToolStripMenuItem->Text = "Поиск по логину";
					this->p152ToolStripMenuItem->Text = "Поиск незарегистрированных пользователей";

					this->p2ToolStripMenuItem->Text = "Работа с данными по автопарку";
					this->p21ToolStripMenuItem->Text = "Просмотр данных";
					this->p22ToolStripMenuItem->Text = "Добавление данных";
					this->p23ToolStripMenuItem->Text = "Удаление данных";
					this->p24ToolStripMenuItem->Text = "Редактирование данных";
					this->p25ToolStripMenuItem->Text = "Поиск данных";
					this->p251ToolStripMenuItem->Text = "Поиск свободных машин";
					this->p252ToolStripMenuItem->Text = "Поиск занятых машин";
					this->p253ToolStripMenuItem->Text = "Поиск ремонтируемых машин";
					this->p254ToolStripMenuItem->Text = "Поиск списанных машин";
					this->p26ToolStripMenuItem->Text = "Сортировка данных";
					this->p3ToolStripMenuItem->Text = "Сменить пользователя";
					this->p4ToolStripMenuItem->Text = "Выход";
				}
				else
				{
					if (currentTypeTest == 2)
					{
						this->toolStripMenuItem1->Text = "Меню пользователя";
						this->p1ToolStripMenuItem->Available = false;
						this->p11ToolStripMenuItem->Available = false;
						this->p12ToolStripMenuItem->Available = false;
						this->p13ToolStripMenuItem->Available = false;
						this->p14ToolStripMenuItem->Available = false;
						this->p15ToolStripMenuItem->Available = false;

						this->p2ToolStripMenuItem->Text = "Работа с данными по автопарку";
						this->p21ToolStripMenuItem->Text = "Просмотр данных";
						this->p22ToolStripMenuItem->Available = false;
						this->p23ToolStripMenuItem->Available = false;
						this->p24ToolStripMenuItem->Available = false;
						this->p25ToolStripMenuItem->Text = "Поиск данных";
						this->p26ToolStripMenuItem->Text = "Сортировка данных";
						this->p3ToolStripMenuItem->Text = "Сменить пользователя";
						this->p4ToolStripMenuItem->Text = "Выход";
					}
					else
					{
						MessageBox::Show("Вы не авторизированы.");
						myForm1->ShowDialog();	//передача фокуса форме авторизации
					}
				}
			}
			/// <summary>
			/// просмотр учетных записей
			/// </summary>
			private: System::Void p11ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
			{
				//MessageBox::Show("Просомтр уч.данных.");
				this->dataGridView1->Visible = true;

				//не изменяемый блок ячеек-заголовков
				/*DataGridViewColumn^ columnFullName = gcnew DataGridViewColumn;
				columnFullName->Name = "id";
				DataGridViewCell^ celFullName = gcnew DataGridViewTextBoxCell;
				columnFullName->CellTemplate = celFullName;
				this->dataGridView1->Columns->Add(columnFullName);
				DataGridViewColumn^ columnFullName1 = gcnew DataGridViewColumn;
				columnFullName1->Name = "Login";
				DataGridViewCell^ celFullName1 = gcnew DataGridViewTextBoxCell;
				columnFullName1->CellTemplate = celFullName1;
				this->dataGridView1->Columns->Add(columnFullName1);
				DataGridViewColumn^ columnFullName2 = gcnew DataGridViewColumn;
				columnFullName2->Name = "User type";
				DataGridViewCell^ celFullName2 = gcnew DataGridViewTextBoxCell;
				columnFullName2->CellTemplate = celFullName2;
				this->dataGridView1->Columns->Add(columnFullName2);
				DataGridViewColumn^ columnFullName3 = gcnew DataGridViewColumn;
				columnFullName3->Name = "Password";
				DataGridViewCell^ celFullName3 = gcnew DataGridViewTextBoxCell;
				columnFullName3->CellTemplate = celFullName3;
				this->dataGridView1->Columns->Add(columnFullName3);*/

				//вариант с ячейками столбца и направлением сортировки
				DataGridViewTextBoxColumn^ colFullName = gcnew DataGridViewTextBoxColumn;
				colFullName->Name = "id";
				this->dataGridView1->Columns->Add(colFullName);
				DataGridViewTextBoxColumn^ colFullName1 = gcnew DataGridViewTextBoxColumn;
				colFullName1->Name = "Login";
				this->dataGridView1->Columns->Add(colFullName1);
				DataGridViewTextBoxColumn^ colFullName2 = gcnew DataGridViewTextBoxColumn;
				colFullName2->Name = "User type";
				this->dataGridView1->Columns->Add(colFullName2);
				DataGridViewTextBoxColumn^ colFullName3 = gcnew DataGridViewTextBoxColumn;
				colFullName3->Name = "Password";
				this->dataGridView1->Columns->Add(colFullName3);

				//берем список пользователей
				ListUsers* listUsers = new ListUsers();
				int sizeList = listUsers->getSize();
				for (int i = 0; i < sizeList; i++)
				{
					User user = listUsers->getUserByIndex(i);

					/*std::string t = "id=" + std::to_string(user.getId()) + "; log=" + user.getLogin();
					System::String^ tt = gcnew System::String(t.data());
					MessageBox::Show("tt : " + tt);*/

					System::String^ id = gcnew System::String(std::to_string(user.getId()).data());
					System::String^ login = gcnew System::String(user.getLogin().data());
					//System::String^ userType = gcnew System::String(std::to_string(user.getUserType()).data());
					int userTypeStr = user.getUserType();
					System::String^ userType = "";
					if (userTypeStr == 1)
					{
						userType = "администратор";
					}
					else 
					{
						if (userTypeStr == 2)
						{
							userType = "пользователь";
						}
					}
					System::String^ password = gcnew System::String(user.getPassword().data());
					array<String^>^ userRecord = { id, login, userType, password };
					this->dataGridView1->Rows->Add(userRecord);
				}
			}
			/// <summary>
			/// добавление уч.записи
			/// </summary>
			private: System::Void p12ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
			{
				MessageBox::Show("Добавление уч.данных.");
				Project1Git::MyForm3^ myForm3 = gcnew Project1Git::MyForm3();
				std::string editMode = "add";
				myForm3->editMode = &editMode;
				myForm3->ShowDialog();	//передача фокуса форме авторизации
				this->dataGridView1->Rows->Clear();
				this->dataGridView1->Columns->Clear();
			}
			/// <summary>
			/// удаление уч.записи
			/// </summary>
			private: System::Void p13ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
			{
				MessageBox::Show("Удаление уч.данных.");
				Project1Git::MyForm4^ myForm4 = gcnew Project1Git::MyForm4();
				std::string editMode = "del";
				myForm4->editMode = &editMode;
				myForm4->ShowDialog();	//передача фокуса форме идентификации
				this->dataGridView1->Rows->Clear();
				this->dataGridView1->Columns->Clear();
			}
			/// <summary>
			/// редактирование уч.записи
			/// </summary>
			private: System::Void p14ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
			{
				MessageBox::Show("Редактирование уч.данных.");
				Project1Git::MyForm4^ myForm4 = gcnew Project1Git::MyForm4();
				std::string editMode = "upd";
				myForm4->editMode = &editMode;
				myForm4->ShowDialog();	//передача фокуса форме идентификации
				this->dataGridView1->Rows->Clear();
				this->dataGridView1->Columns->Clear();
			}
			/// <summary>
			/// выбор пункта меню "Выход"
			/// </summary>
			private: System::Void p4ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
			{
				this->Close();	//закрытие формы
			}
	};

}
