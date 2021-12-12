#pragma once

#include <string>
#include <msclr\marshal_cppstd.h>

#include "MyForm1.h"
#include "MyForm2.h"
#include "MyForm3.h"
#include "MyForm4.h"
#include "MyForm5.h"
#include "ListUsers.h"
#include "Carpark.h"

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
		private: System::Windows::Forms::ToolStripMenuItem^ p261ToolStripMenuItem;
		private: System::Windows::Forms::ToolStripMenuItem^ p262ToolStripMenuItem;
		private: System::Windows::Forms::ToolStripMenuItem^ p263ToolStripMenuItem;
		private: System::Windows::Forms::PictureBox^ pictureBox1;
		private: System::Windows::Forms::Label^ label2;
		private: System::Windows::Forms::TextBox^ textBox1;
		private: System::Windows::Forms::Label^ label3;
		private: System::Windows::Forms::Label^ label4;
		private: System::Windows::Forms::Label^ label5;
		private: System::Windows::Forms::Label^ label6;
		private: System::Windows::Forms::TextBox^ textBox2;
		private: System::Windows::Forms::TextBox^ textBox3;
		private: System::Windows::Forms::TextBox^ textBox4;
		private: System::Windows::Forms::TextBox^ textBox5;
		private: System::Windows::Forms::GroupBox^ groupBox1;
		private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator1;
		private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator2;
		private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem2;
		private: System::Windows::Forms::ToolStripMenuItem^ pp1ToolStripMenuItem;
		private: System::Windows::Forms::ToolStripMenuItem^ pp11ToolStripMenuItem;
		private: System::Windows::Forms::ToolStripMenuItem^ pp12ToolStripMenuItem;
		
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
				System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
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
				this->p261ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				this->p262ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				this->p263ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
				this->p3ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				this->toolStripSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
				this->p4ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				this->toolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
				this->pp1ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				this->pp11ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				this->pp12ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
				this->label2 = (gcnew System::Windows::Forms::Label());
				this->textBox1 = (gcnew System::Windows::Forms::TextBox());
				this->label3 = (gcnew System::Windows::Forms::Label());
				this->label4 = (gcnew System::Windows::Forms::Label());
				this->label5 = (gcnew System::Windows::Forms::Label());
				this->label6 = (gcnew System::Windows::Forms::Label());
				this->textBox2 = (gcnew System::Windows::Forms::TextBox());
				this->textBox3 = (gcnew System::Windows::Forms::TextBox());
				this->textBox4 = (gcnew System::Windows::Forms::TextBox());
				this->textBox5 = (gcnew System::Windows::Forms::TextBox());
				this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
				this->menuStrip1->SuspendLayout();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
				this->groupBox1->SuspendLayout();
				this->SuspendLayout();
				// 
				// button3
				// 
				this->button3->Location = System::Drawing::Point(1023, 482);
				this->button3->Name = L"button3";
				this->button3->Size = System::Drawing::Size(100, 50);
				this->button3->TabIndex = 4;
				this->button3->Text = L"button3";
				this->button3->UseVisualStyleBackColor = true;
				this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
				// 
				// label1
				// 
				this->label1->AutoSize = true;
				this->label1->Location = System::Drawing::Point(12, 31);
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
				this->dataGridView1->Size = System::Drawing::Size(728, 271);
				this->dataGridView1->TabIndex = 6;
				// 
				// menuStrip1
				// 
				this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
				this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
					this->toolStripMenuItem1,
						this->toolStripMenuItem2
				});
				this->menuStrip1->Location = System::Drawing::Point(0, 0);
				this->menuStrip1->Name = L"menuStrip1";
				this->menuStrip1->Size = System::Drawing::Size(1135, 28);
				this->menuStrip1->TabIndex = 7;
				this->menuStrip1->Text = L"menuStrip1";
				// 
				// toolStripMenuItem1
				// 
				this->toolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
					this->p1ToolStripMenuItem,
						this->p2ToolStripMenuItem, this->toolStripSeparator1, this->p3ToolStripMenuItem, this->toolStripSeparator2, this->p4ToolStripMenuItem
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
				this->p1ToolStripMenuItem->Size = System::Drawing::Size(109, 26);
				this->p1ToolStripMenuItem->Text = L"p1";
				// 
				// p11ToolStripMenuItem
				// 
				this->p11ToolStripMenuItem->Name = L"p11ToolStripMenuItem";
				this->p11ToolStripMenuItem->Size = System::Drawing::Size(117, 26);
				this->p11ToolStripMenuItem->Text = L"p11";
				this->p11ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::p11ToolStripMenuItem_Click);
				// 
				// p12ToolStripMenuItem
				// 
				this->p12ToolStripMenuItem->Name = L"p12ToolStripMenuItem";
				this->p12ToolStripMenuItem->Size = System::Drawing::Size(117, 26);
				this->p12ToolStripMenuItem->Text = L"p12";
				this->p12ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::p12ToolStripMenuItem_Click);
				// 
				// p13ToolStripMenuItem
				// 
				this->p13ToolStripMenuItem->Name = L"p13ToolStripMenuItem";
				this->p13ToolStripMenuItem->Size = System::Drawing::Size(117, 26);
				this->p13ToolStripMenuItem->Text = L"p13";
				this->p13ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::p13ToolStripMenuItem_Click);
				// 
				// p14ToolStripMenuItem
				// 
				this->p14ToolStripMenuItem->Name = L"p14ToolStripMenuItem";
				this->p14ToolStripMenuItem->Size = System::Drawing::Size(117, 26);
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
				this->p15ToolStripMenuItem->Size = System::Drawing::Size(117, 26);
				this->p15ToolStripMenuItem->Text = L"p15";
				// 
				// p151ToolStripMenuItem
				// 
				this->p151ToolStripMenuItem->Name = L"p151ToolStripMenuItem";
				this->p151ToolStripMenuItem->Size = System::Drawing::Size(125, 26);
				this->p151ToolStripMenuItem->Text = L"p151";
				this->p151ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::p151ToolStripMenuItem_Click);
				// 
				// p152ToolStripMenuItem
				// 
				this->p152ToolStripMenuItem->Name = L"p152ToolStripMenuItem";
				this->p152ToolStripMenuItem->Size = System::Drawing::Size(125, 26);
				this->p152ToolStripMenuItem->Text = L"p152";
				this->p152ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::p152ToolStripMenuItem_Click);
				// 
				// p2ToolStripMenuItem
				// 
				this->p2ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
					this->p21ToolStripMenuItem,
						this->p22ToolStripMenuItem, this->p23ToolStripMenuItem, this->p24ToolStripMenuItem, this->p25ToolStripMenuItem, this->p26ToolStripMenuItem
				});
				this->p2ToolStripMenuItem->Name = L"p2ToolStripMenuItem";
				this->p2ToolStripMenuItem->Size = System::Drawing::Size(109, 26);
				this->p2ToolStripMenuItem->Text = L"p2";
				// 
				// p21ToolStripMenuItem
				// 
				this->p21ToolStripMenuItem->Name = L"p21ToolStripMenuItem";
				this->p21ToolStripMenuItem->Size = System::Drawing::Size(117, 26);
				this->p21ToolStripMenuItem->Text = L"p21";
				this->p21ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::p21ToolStripMenuItem_Click);
				// 
				// p22ToolStripMenuItem
				// 
				this->p22ToolStripMenuItem->Name = L"p22ToolStripMenuItem";
				this->p22ToolStripMenuItem->Size = System::Drawing::Size(117, 26);
				this->p22ToolStripMenuItem->Text = L"p22";
				this->p22ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::p22ToolStripMenuItem_Click);
				// 
				// p23ToolStripMenuItem
				// 
				this->p23ToolStripMenuItem->Name = L"p23ToolStripMenuItem";
				this->p23ToolStripMenuItem->Size = System::Drawing::Size(117, 26);
				this->p23ToolStripMenuItem->Text = L"p23";
				this->p23ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::p23ToolStripMenuItem_Click);
				// 
				// p24ToolStripMenuItem
				// 
				this->p24ToolStripMenuItem->Name = L"p24ToolStripMenuItem";
				this->p24ToolStripMenuItem->Size = System::Drawing::Size(117, 26);
				this->p24ToolStripMenuItem->Text = L"p24";
				this->p24ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::p24ToolStripMenuItem_Click);
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
				this->p251ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::p251ToolStripMenuItem_Click);
				// 
				// p252ToolStripMenuItem
				// 
				this->p252ToolStripMenuItem->Name = L"p252ToolStripMenuItem";
				this->p252ToolStripMenuItem->Size = System::Drawing::Size(125, 26);
				this->p252ToolStripMenuItem->Text = L"p252";
				this->p252ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::p252ToolStripMenuItem_Click);
				// 
				// p253ToolStripMenuItem
				// 
				this->p253ToolStripMenuItem->Name = L"p253ToolStripMenuItem";
				this->p253ToolStripMenuItem->Size = System::Drawing::Size(125, 26);
				this->p253ToolStripMenuItem->Text = L"p253";
				this->p253ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::p253ToolStripMenuItem_Click);
				// 
				// p254ToolStripMenuItem
				// 
				this->p254ToolStripMenuItem->Name = L"p254ToolStripMenuItem";
				this->p254ToolStripMenuItem->Size = System::Drawing::Size(125, 26);
				this->p254ToolStripMenuItem->Text = L"p254";
				this->p254ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::p254ToolStripMenuItem_Click);
				// 
				// p26ToolStripMenuItem
				// 
				this->p26ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
					this->p261ToolStripMenuItem,
						this->p262ToolStripMenuItem, this->p263ToolStripMenuItem
				});
				this->p26ToolStripMenuItem->Name = L"p26ToolStripMenuItem";
				this->p26ToolStripMenuItem->Size = System::Drawing::Size(117, 26);
				this->p26ToolStripMenuItem->Text = L"p26";
				// 
				// p261ToolStripMenuItem
				// 
				this->p261ToolStripMenuItem->Name = L"p261ToolStripMenuItem";
				this->p261ToolStripMenuItem->Size = System::Drawing::Size(125, 26);
				this->p261ToolStripMenuItem->Text = L"p261";
				this->p261ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::p261ToolStripMenuItem_Click);
				// 
				// p262ToolStripMenuItem
				// 
				this->p262ToolStripMenuItem->Name = L"p262ToolStripMenuItem";
				this->p262ToolStripMenuItem->Size = System::Drawing::Size(125, 26);
				this->p262ToolStripMenuItem->Text = L"p262";
				this->p262ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::p262ToolStripMenuItem_Click);
				// 
				// p263ToolStripMenuItem
				// 
				this->p263ToolStripMenuItem->Name = L"p263ToolStripMenuItem";
				this->p263ToolStripMenuItem->Size = System::Drawing::Size(125, 26);
				this->p263ToolStripMenuItem->Text = L"p263";
				this->p263ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::p263ToolStripMenuItem_Click);
				// 
				// toolStripSeparator1
				// 
				this->toolStripSeparator1->Name = L"toolStripSeparator1";
				this->toolStripSeparator1->Size = System::Drawing::Size(106, 6);
				// 
				// p3ToolStripMenuItem
				// 
				this->p3ToolStripMenuItem->Name = L"p3ToolStripMenuItem";
				this->p3ToolStripMenuItem->Size = System::Drawing::Size(109, 26);
				this->p3ToolStripMenuItem->Text = L"p3";
				this->p3ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::p3ToolStripMenuItem_Click);
				// 
				// toolStripSeparator2
				// 
				this->toolStripSeparator2->Name = L"toolStripSeparator2";
				this->toolStripSeparator2->Size = System::Drawing::Size(106, 6);
				// 
				// p4ToolStripMenuItem
				// 
				this->p4ToolStripMenuItem->Name = L"p4ToolStripMenuItem";
				this->p4ToolStripMenuItem->Size = System::Drawing::Size(109, 26);
				this->p4ToolStripMenuItem->Text = L"p4";
				this->p4ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::p4ToolStripMenuItem_Click);
				// 
				// toolStripMenuItem2
				// 
				this->toolStripMenuItem2->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->pp1ToolStripMenuItem });
				this->toolStripMenuItem2->Name = L"toolStripMenuItem2";
				this->toolStripMenuItem2->Size = System::Drawing::Size(156, 24);
				this->toolStripMenuItem2->Text = L"toolStripMenuItem2";
				// 
				// pp1ToolStripMenuItem
				// 
				this->pp1ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
					this->pp11ToolStripMenuItem,
						this->pp12ToolStripMenuItem
				});
				this->pp1ToolStripMenuItem->Name = L"pp1ToolStripMenuItem";
				this->pp1ToolStripMenuItem->Size = System::Drawing::Size(224, 26);
				this->pp1ToolStripMenuItem->Text = L"pp1";
				// 
				// pp11ToolStripMenuItem
				// 
				this->pp11ToolStripMenuItem->Name = L"pp11ToolStripMenuItem";
				this->pp11ToolStripMenuItem->Size = System::Drawing::Size(224, 26);
				this->pp11ToolStripMenuItem->Text = L"pp11";
				this->pp11ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::pp11ToolStripMenuItem_Click);
				// 
				// pp12ToolStripMenuItem
				// 
				this->pp12ToolStripMenuItem->Name = L"pp12ToolStripMenuItem";
				this->pp12ToolStripMenuItem->Size = System::Drawing::Size(224, 26);
				this->pp12ToolStripMenuItem->Text = L"pp12";
				this->pp12ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::pp12ToolStripMenuItem_Click);
				// 
				// pictureBox1
				// 
				this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
				this->pictureBox1->Location = System::Drawing::Point(774, 31);
				this->pictureBox1->Name = L"pictureBox1";
				this->pictureBox1->Size = System::Drawing::Size(361, 130);
				this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				this->pictureBox1->TabIndex = 8;
				this->pictureBox1->TabStop = false;
				// 
				// label2
				// 
				this->label2->AutoSize = true;
				this->label2->Location = System::Drawing::Point(12, 48);
				this->label2->Name = L"label2";
				this->label2->Size = System::Drawing::Size(46, 17);
				this->label2->TabIndex = 9;
				this->label2->Text = L"label2";
				// 
				// textBox1
				// 
				this->textBox1->Location = System::Drawing::Point(246, 45);
				this->textBox1->Name = L"textBox1";
				this->textBox1->Size = System::Drawing::Size(45, 22);
				this->textBox1->TabIndex = 10;
				// 
				// label3
				// 
				this->label3->AutoSize = true;
				this->label3->Location = System::Drawing::Point(12, 92);
				this->label3->Name = L"label3";
				this->label3->Size = System::Drawing::Size(46, 17);
				this->label3->TabIndex = 11;
				this->label3->Text = L"label3";
				// 
				// label4
				// 
				this->label4->AutoSize = true;
				this->label4->Location = System::Drawing::Point(12, 135);
				this->label4->Name = L"label4";
				this->label4->Size = System::Drawing::Size(46, 17);
				this->label4->TabIndex = 12;
				this->label4->Text = L"label4";
				// 
				// label5
				// 
				this->label5->AutoSize = true;
				this->label5->Location = System::Drawing::Point(12, 177);
				this->label5->Name = L"label5";
				this->label5->Size = System::Drawing::Size(46, 17);
				this->label5->TabIndex = 13;
				this->label5->Text = L"label5";
				// 
				// label6
				// 
				this->label6->AutoSize = true;
				this->label6->Location = System::Drawing::Point(12, 219);
				this->label6->Name = L"label6";
				this->label6->Size = System::Drawing::Size(46, 17);
				this->label6->TabIndex = 14;
				this->label6->Text = L"label6";
				// 
				// textBox2
				// 
				this->textBox2->Location = System::Drawing::Point(246, 89);
				this->textBox2->Name = L"textBox2";
				this->textBox2->Size = System::Drawing::Size(45, 22);
				this->textBox2->TabIndex = 15;
				// 
				// textBox3
				// 
				this->textBox3->Location = System::Drawing::Point(246, 132);
				this->textBox3->Name = L"textBox3";
				this->textBox3->Size = System::Drawing::Size(45, 22);
				this->textBox3->TabIndex = 16;
				// 
				// textBox4
				// 
				this->textBox4->Location = System::Drawing::Point(246, 174);
				this->textBox4->Name = L"textBox4";
				this->textBox4->Size = System::Drawing::Size(45, 22);
				this->textBox4->TabIndex = 17;
				// 
				// textBox5
				// 
				this->textBox5->Location = System::Drawing::Point(246, 216);
				this->textBox5->Name = L"textBox5";
				this->textBox5->Size = System::Drawing::Size(45, 22);
				this->textBox5->TabIndex = 18;
				// 
				// groupBox1
				// 
				this->groupBox1->Controls->Add(this->textBox5);
				this->groupBox1->Controls->Add(this->textBox4);
				this->groupBox1->Controls->Add(this->label2);
				this->groupBox1->Controls->Add(this->textBox3);
				this->groupBox1->Controls->Add(this->textBox1);
				this->groupBox1->Controls->Add(this->textBox2);
				this->groupBox1->Controls->Add(this->label3);
				this->groupBox1->Controls->Add(this->label6);
				this->groupBox1->Controls->Add(this->label4);
				this->groupBox1->Controls->Add(this->label5);
				this->groupBox1->Location = System::Drawing::Point(792, 174);
				this->groupBox1->Name = L"groupBox1";
				this->groupBox1->Size = System::Drawing::Size(306, 271);
				this->groupBox1->TabIndex = 19;
				this->groupBox1->TabStop = false;
				this->groupBox1->Text = L"groupBox1";
				// 
				// MyForm
				// 
				this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
				this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				this->ClientSize = System::Drawing::Size(1135, 544);
				this->Controls->Add(this->pictureBox1);
				this->Controls->Add(this->dataGridView1);
				this->Controls->Add(this->label1);
				this->Controls->Add(this->button3);
				this->Controls->Add(this->menuStrip1);
				this->Controls->Add(this->groupBox1);
				this->MainMenuStrip = this->menuStrip1;
				this->Name = L"MyForm";
				this->Text = L"MyForm";
				this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
				this->menuStrip1->ResumeLayout(false);
				this->menuStrip1->PerformLayout();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
				this->groupBox1->ResumeLayout(false);
				this->groupBox1->PerformLayout();
				this->ResumeLayout(false);
				this->PerformLayout();

			}
		#pragma endregion
			/// <summary>
			/// метод формирует меню администратора
			/// </summary>
			private: System::Void CreateMenuAdministrator();
			/// <summary>
			/// метод формирует меню пользователя
			/// </summary>
			private: System::Void CreateMenuUser();
			/// <summary>
			/// метод очищает grid таблицу данных
			/// </summary>
			private: System::Void MyForm::DataGridView1Clear();
			/// <summary>
			/// метод скрывает надипси и окна с данными по машинам
			/// </summary>
			private: System::Void MyForm::HideLabelsAndTextBoxes();
			/// <summary>
			/// метод формирования названий столбцов для вывода данных о пользователях
			/// </summary>
			private: System::Void MyForm::DataGridViewTextBoxColumnAddUsers();
			/// <summary>
			/// метод формирования названий столбцов для вывода данных о автомобилях
			/// </summary>
			private: System::Void MyForm::DataGridViewTextBoxColumnAddCars();
			/// <summary>
			/// метод возвращает по коду наименование типа пользователя для таблицы
			/// </summary>
			private: System::String^ MyForm::GetNameTypeByCode(int);
			/// <summary>
			/// метод возвращает по коду наименование состояния регистрации пользователя для таблицы
			/// </summary>
			private: System::String^ MyForm::GetNameRegisterByCode(int);
			/// <summary>
			/// метод возвращает по коду наименование состояния машины для таблицы
			/// </summary>
			private: System::String^ MyForm::GetNameConditionByCode(int);
			/// <summary>
			/// метод поиска и отображения авт по переданному прарметру - состоянию 
			/// </summary>
			private: void MyForm::FindDataCar(std::string);
			/// <summary>
			/// метод сортирует строки данных для авто по переданному прарметру (состоянию, типу, грузоподъемности)
			/// </summary>
			private: void MyForm::DataGridViewRowsAdd(std::string);
			/// <summary>
			/// загрузка основной формы
			/// </summary>
			private: System::Void MyForm_Load(System::Object^, System::EventArgs^);
			/// <summary>
			/// выход в окно авторизации
			/// </summary>
			private: System::Void p3ToolStripMenuItem_Click(System::Object^, System::EventArgs^);
			/// <summary>
			/// просмотр учетных записей
			/// </summary>
			private: System::Void p11ToolStripMenuItem_Click(System::Object^, System::EventArgs^);
			/// <summary>
			/// добавление уч.записи
			/// </summary>
			private: System::Void p12ToolStripMenuItem_Click(System::Object^, System::EventArgs^);
			/// <summary>
			/// удаление уч.записи
			/// </summary>
			private: System::Void p13ToolStripMenuItem_Click(System::Object^, System::EventArgs^);
			/// <summary>
			/// редактирование уч.записи
			/// </summary>
			private: System::Void p14ToolStripMenuItem_Click(System::Object^, System::EventArgs^);
			/// <summary>
			/// поиск уч.данных по логину
			/// </summary>
			private: System::Void p151ToolStripMenuItem_Click(System::Object^, System::EventArgs^);
			/// <summary>
			/// поиск незарег.пользователей
			/// </summary>
			private: System::Void p152ToolStripMenuItem_Click(System::Object^, System::EventArgs^);
			/// <summary>
			/// просмотр автопарка
			/// </summary>
			private: System::Void p21ToolStripMenuItem_Click(System::Object^, System::EventArgs^);
			/// <summary>
			/// добавление авто
			/// </summary>
			private: System::Void p22ToolStripMenuItem_Click(System::Object^, System::EventArgs^);
			/// <summary>
			/// удаление авто
			/// </summary>
			private: System::Void p23ToolStripMenuItem_Click(System::Object^, System::EventArgs^);
			/// <summary>
			/// редактирование данных по автопарку
			/// </summary>
			private: System::Void p24ToolStripMenuItem_Click(System::Object^, System::EventArgs^);
			/// <summary>
			/// поиск данных/поиск св.машин
			/// </summary>
			private: System::Void p251ToolStripMenuItem_Click(System::Object^, System::EventArgs^);
			/// <summary>
			/// поиск данных/поиск зан.машин
			/// </summary>
			private: System::Void p252ToolStripMenuItem_Click(System::Object^, System::EventArgs^);
			/// <summary>
			/// поиск данных/поиск рем.машин
			/// </summary>
			private: System::Void p253ToolStripMenuItem_Click(System::Object^, System::EventArgs^);
			/// <summary>
			/// поиск данных/поиск спис.машин
			/// </summary>
			private: System::Void p254ToolStripMenuItem_Click(System::Object^, System::EventArgs^);
			/// <summary>
			/// сортировка по состоянию машин
			/// </summary>
			private: System::Void p261ToolStripMenuItem_Click(System::Object^, System::EventArgs^);
			/// <summary>
			/// сортировка по типу машин
			/// </summary>
			private: System::Void p262ToolStripMenuItem_Click(System::Object^, System::EventArgs^);
			/// <summary>
			/// сортировка авто по грузоподъемности
			/// </summary>
			private: System::Void p263ToolStripMenuItem_Click(System::Object^, System::EventArgs^);
			/// <summary>
			/// нажатие на кнопку Выход
			/// </summary>
			private: System::Void button3_Click(System::Object^, System::EventArgs^);
			/// <summary>
			/// выбор пункта меню "Выход"
			/// </summary>
			private: System::Void p4ToolStripMenuItem_Click(System::Object^, System::EventArgs^);
			/// <summary>
			/// выбор пункта меню - отмены последних действий с учетными данными
			/// </summary>
			private: System::Void pp11ToolStripMenuItem_Click(System::Object^, System::EventArgs^);
			/// <summary>
			/// выбор пункта меню - отмены последних действий с данными автопарка
			/// </summary>
			private: System::Void pp12ToolStripMenuItem_Click(System::Object^, System::EventArgs^);
	};
}