#pragma once
#include <string>
#include <fstream>
#include <iostream>

namespace CppCLR_WinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	/// <summary>
	/// Zusammenfassung fьr Form1
	/// </summary>

	
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();			
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox1;
	protected:
	private: System::Windows::Forms::RadioButton^  radioButton3;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox1;

	private: System::Windows::Forms::TextBox^  textBox15;
	private: System::Windows::Forms::TextBox^  textBox14;
	private: System::Windows::Forms::TextBox^  textBox13;
	private: System::Windows::Forms::TextBox^  textBox12;
	private: System::Windows::Forms::TextBox^  textBox11;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox4;


	private: System::Windows::Forms::RadioButton^  radioButton4;
	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::TextBox^  textBox19;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::TextBox^  textBox18;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::TextBox^  textBox17;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::TextBox^  textBox16;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Button^  button4;



	private:

		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code

		/// <summary>
		/// Erforderliche Methode fьr die Designerunterstьtzung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geдndert werden.
		/// </summary>

		void InitializeComponent(void)
		{
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->groupBox1->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioButton4);
			this->groupBox1->Controls->Add(this->radioButton3);
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Location = System::Drawing::Point(12, 15);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(151, 113);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Вид сертификата";
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(7, 88);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(84, 17);
			this->radioButton4->TabIndex = 3;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"Шаблон УД";
			this->radioButton4->UseVisualStyleBackColor = true;
			this->radioButton4->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton4_CheckedChanged);
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(7, 65);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(75, 17);
			this->radioButton3->TabIndex = 2;
			this->radioButton3->Text = L"Физ лицо";
			this->radioButton3->UseVisualStyleBackColor = true;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton3_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(7, 44);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(41, 17);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->Text = L"ИП";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton2_CheckedChanged);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Checked = true;
			this->radioButton1->Location = System::Drawing::Point(7, 20);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(67, 17);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Юр лицо";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton1_CheckedChanged);
			// 
			// groupBox2
			// 
			this->groupBox2->Location = System::Drawing::Point(204, 12);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(264, 116);
			this->groupBox2->TabIndex = 1;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Парсинг сертификата";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->label21);
			this->groupBox3->Controls->Add(this->button4);
			this->groupBox3->Controls->Add(this->label20);
			this->groupBox3->Controls->Add(this->button3);
			this->groupBox3->Controls->Add(this->textBox15);
			this->groupBox3->Controls->Add(this->textBox14);
			this->groupBox3->Controls->Add(this->textBox13);
			this->groupBox3->Controls->Add(this->textBox12);
			this->groupBox3->Controls->Add(this->textBox11);
			this->groupBox3->Controls->Add(this->textBox10);
			this->groupBox3->Controls->Add(this->textBox9);
			this->groupBox3->Controls->Add(this->textBox8);
			this->groupBox3->Controls->Add(this->textBox7);
			this->groupBox3->Controls->Add(this->textBox6);
			this->groupBox3->Controls->Add(this->textBox5);
			this->groupBox3->Controls->Add(this->textBox4);
			this->groupBox3->Controls->Add(this->textBox3);
			this->groupBox3->Controls->Add(this->textBox2);
			this->groupBox3->Controls->Add(this->textBox1);
			this->groupBox3->Controls->Add(this->label15);
			this->groupBox3->Controls->Add(this->label14);
			this->groupBox3->Controls->Add(this->label13);
			this->groupBox3->Controls->Add(this->label12);
			this->groupBox3->Controls->Add(this->label11);
			this->groupBox3->Controls->Add(this->label10);
			this->groupBox3->Controls->Add(this->label9);
			this->groupBox3->Controls->Add(this->label8);
			this->groupBox3->Controls->Add(this->label7);
			this->groupBox3->Controls->Add(this->label6);
			this->groupBox3->Controls->Add(this->label5);
			this->groupBox3->Controls->Add(this->label4);
			this->groupBox3->Controls->Add(this->label3);
			this->groupBox3->Controls->Add(this->label2);
			this->groupBox3->Controls->Add(this->label1);
			this->groupBox3->Location = System::Drawing::Point(12, 139);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(456, 432);
			this->groupBox3->TabIndex = 2;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Информация о сертификате";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->ForeColor = System::Drawing::Color::Red;
			this->label21->Location = System::Drawing::Point(382, 302);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(23, 13);
			this->label21->TabIndex = 33;
			this->label21->Text = L"NO";
			// 
			// button4
			// 
			this->button4->Enabled = false;
			this->button4->Location = System::Drawing::Point(297, 298);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(79, 23);
			this->button4->TabIndex = 32;
			this->button4->Text = L"Check Sum";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->ForeColor = System::Drawing::Color::Red;
			this->label20->Location = System::Drawing::Point(382, 329);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(23, 13);
			this->label20->TabIndex = 31;
			this->label20->Text = L"NO";
			// 
			// button3
			// 
			this->button3->Enabled = false;
			this->button3->Location = System::Drawing::Point(297, 324);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(79, 23);
			this->button3->TabIndex = 30;
			this->button3->Text = L"Check Sum";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(123, 401);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(168, 20);
			this->textBox15->TabIndex = 29;
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(123, 377);
			this->textBox14->MaxLength = 15;
			this->textBox14->Name = L"textBox14";
			this->textBox14->ReadOnly = true;
			this->textBox14->Size = System::Drawing::Size(168, 20);
			this->textBox14->TabIndex = 28;
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(123, 352);
			this->textBox13->MaxLength = 13;
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(168, 20);
			this->textBox13->TabIndex = 27;
			this->textBox13->TextChanged += gcnew System::EventHandler(this, &Form1::textBox13_TextChanged);
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(123, 326);
			this->textBox12->MaxLength = 10;
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(168, 20);
			this->textBox12->TabIndex = 26;
			this->textBox12->TextChanged += gcnew System::EventHandler(this, &Form1::textBox12_TextChanged);
			// 
			// textBox11
			// 
			this->textBox11->BackColor = System::Drawing::SystemColors::Window;
			this->textBox11->ForeColor = System::Drawing::SystemColors::WindowText;
			this->textBox11->Location = System::Drawing::Point(123, 299);
			this->textBox11->MaxLength = 11;
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(168, 20);
			this->textBox11->TabIndex = 25;
			this->textBox11->TextChanged += gcnew System::EventHandler(this, &Form1::textBox11_TextChanged);
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(123, 272);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(327, 20);
			this->textBox10->TabIndex = 24;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(123, 246);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(213, 20);
			this->textBox9->TabIndex = 23;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(123, 219);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(213, 20);
			this->textBox8->TabIndex = 22;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(123, 193);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(213, 20);
			this->textBox7->TabIndex = 21;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(123, 165);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(213, 20);
			this->textBox6->TabIndex = 20;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(123, 136);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(213, 20);
			this->textBox5->TabIndex = 19;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(123, 108);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(327, 20);
			this->textBox4->TabIndex = 18;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(123, 79);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(213, 20);
			this->textBox3->TabIndex = 17;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(123, 51);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(213, 20);
			this->textBox2->TabIndex = 16;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(123, 23);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(213, 20);
			this->textBox1->TabIndex = 15;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(4, 404);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(34, 13);
			this->label15->TabIndex = 14;
			this->label15->Text = L"e-mail";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(4, 380);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(52, 13);
			this->label14->TabIndex = 13;
			this->label14->Text = L"ОГРНИП";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(4, 355);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(36, 13);
			this->label13->TabIndex = 12;
			this->label13->Text = L"ОГРН";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(4, 329);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(31, 13);
			this->label12->TabIndex = 11;
			this->label12->Text = L"ИНН";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(4, 302);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(45, 13);
			this->label11->TabIndex = 10;
			this->label11->Text = L"СНИЛС";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(4, 275);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(39, 13);
			this->label10->TabIndex = 9;
			this->label10->Text = L"Улица";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(4, 249);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(37, 13);
			this->label9->TabIndex = 8;
			this->label9->Text = L"Город";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(4, 222);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(50, 13);
			this->label8->TabIndex = 7;
			this->label8->Text = L"Область";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(4, 111);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(74, 13);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Организация";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(4, 196);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(84, 13);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Страна/Регион";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(4, 168);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(65, 13);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Должность";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(4, 139);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(87, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Подразделение";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(4, 82);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(79, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Имя Отчество";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(4, 54);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(56, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Фамилия";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(4, 26);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(98, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Имя сертификата";
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->textBox19);
			this->groupBox4->Controls->Add(this->label19);
			this->groupBox4->Controls->Add(this->textBox18);
			this->groupBox4->Controls->Add(this->label18);
			this->groupBox4->Controls->Add(this->textBox17);
			this->groupBox4->Controls->Add(this->label17);
			this->groupBox4->Controls->Add(this->comboBox1);
			this->groupBox4->Controls->Add(this->label16);
			this->groupBox4->Controls->Add(this->textBox16);
			this->groupBox4->Controls->Add(this->button1);
			this->groupBox4->Location = System::Drawing::Point(12, 577);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(456, 151);
			this->groupBox4->TabIndex = 3;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Учётная информация";
			// 
			// textBox19
			// 
			this->textBox19->Location = System::Drawing::Point(123, 80);
			this->textBox19->Name = L"textBox19";
			this->textBox19->Size = System::Drawing::Size(132, 20);
			this->textBox19->TabIndex = 49;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(4, 83);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(82, 13);
			this->label19->TabIndex = 48;
			this->label19->Text = L"Срок действия";
			// 
			// textBox18
			// 
			this->textBox18->Location = System::Drawing::Point(123, 52);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(327, 20);
			this->textBox18->TabIndex = 47;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(4, 55);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(87, 13);
			this->label18->TabIndex = 46;
			this->label18->Text = L"№ сертификата";
			// 
			// textBox17
			// 
			this->textBox17->Location = System::Drawing::Point(352, 24);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(98, 20);
			this->textBox17->TabIndex = 45;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(258, 27);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(93, 13);
			this->label17->TabIndex = 44;
			this->label17->Text = L"Серийный номер";
			// 
			// comboBox1
			// 
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Rutoken ЭЦП 2.0", L"Rutoken S", L"Jacarta", L"Rutoken lite",
					L"eToken"
			});
			this->comboBox1->Location = System::Drawing::Point(123, 24);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(132, 21);
			this->comboBox1->TabIndex = 43;
			this->comboBox1->Text = L"Rutoken ЭЦП 2.0";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(4, 27);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(76, 13);
			this->label16->TabIndex = 42;
			this->label16->Text = L"Вид носителя";
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(155, 115);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(136, 20);
			this->textBox16->TabIndex = 41;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(7, 113);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(132, 23);
			this->button1->TabIndex = 40;
			this->button1->Text = L"Сгенерировать пароль";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 734);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(456, 50);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Спаси и Сохрани";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(481, 795);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Name = L"Form1";
			this->Text = L"CertInfo_v1.1.0.3";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void radioButton1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		if (radioButton1->Checked == true)
		{
			textBox12->MaxLength = 10;
			textBox4->ReadOnly = false;
			textBox6->ReadOnly = false;
			textBox5->ReadOnly = false;
			textBox10->ReadOnly = false;
			textBox13->ReadOnly = false;
			textBox14->ReadOnly = true;
		}
	}
	private: System::Void radioButton2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		if (radioButton2->Checked == true)
		{
			textBox12->MaxLength = 12;
			textBox4->ReadOnly = false;
			textBox6->ReadOnly = false;
			textBox10->ReadOnly = false;
			textBox5->ReadOnly = true;
			textBox13->ReadOnly = true;
			textBox14->ReadOnly = false;
		}
	}
	private: System::Void radioButton3_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		if (radioButton3->Checked == true)
		{
			textBox12->MaxLength = 12;
			textBox4->ReadOnly = true;
			textBox5->ReadOnly = true;
			textBox6->ReadOnly = true;
			textBox10->ReadOnly = true;
			textBox13->ReadOnly = true;
			textBox14->ReadOnly = true;
		}
	}
private: System::Void radioButton4_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (radioButton4->Checked == true)
	{
		textBox12->MaxLength = 10;
		textBox4->Text = "Управление делами Президента Российской Федерации";
		textBox7->Text = "RU";
		textBox8->Text = "77 Москва";
		textBox9->Text = "Москва";
		textBox12->Text = "7710023340";
		textBox13->Text = "1027739643997";
		textBox4->ReadOnly = false;
		textBox6->ReadOnly = false;
		textBox5->ReadOnly = false;
		textBox10->ReadOnly = false;
		textBox13->ReadOnly = false;
		textBox14->ReadOnly = true;
	}
	else
	{
		textBox4->Text = "";
		textBox7->Text = "";
		textBox8->Text = "";
		textBox9->Text = "";
		textBox12->Text = "";
		textBox13->Text = "";
	}
	
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	saveFileDialog1->Filter = "Текстовый файл|*.txt";
	saveFileDialog1->Title = "Save an TXT File";
	saveFileDialog1->FileName = textBox1->Text;
	if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK && saveFileDialog1->FileName->Length > 0) 
	{
		IO::File::AppendAllText(saveFileDialog1->FileName, "_____________________________________________________________________" + "\r\n");
		IO::File::AppendAllText(saveFileDialog1->FileName, label1->Text + "....................." + textBox1->Text + "\r\n");
		IO::File::AppendAllText(saveFileDialog1->FileName, label2->Text + "............................." + textBox2->Text + "\r\n");
		IO::File::AppendAllText(saveFileDialog1->FileName, label3->Text + "........................" + textBox3->Text + "\r\n");
		IO::File::AppendAllText(saveFileDialog1->FileName, label7->Text + "........................." + textBox4->Text + "\r\n");
		IO::File::AppendAllText(saveFileDialog1->FileName, label4->Text + "......................." + textBox5->Text + "\r\n");
		IO::File::AppendAllText(saveFileDialog1->FileName, label5->Text + "..........................." + textBox6->Text + "\r\n");
		IO::File::AppendAllText(saveFileDialog1->FileName, label6->Text + "......................." + textBox7->Text + "\r\n");
		IO::File::AppendAllText(saveFileDialog1->FileName, label8->Text + "............................." + textBox8->Text + "\r\n");
		IO::File::AppendAllText(saveFileDialog1->FileName, label9->Text + "..............................." + textBox9->Text + "\r\n");
		IO::File::AppendAllText(saveFileDialog1->FileName, label10->Text + "..............................." + textBox10->Text + "\r\n");
		IO::File::AppendAllText(saveFileDialog1->FileName, label11->Text + "..............................." + textBox11->Text + "\r\n");
		IO::File::AppendAllText(saveFileDialog1->FileName, label12->Text + "................................." + textBox12->Text + "\r\n");
		IO::File::AppendAllText(saveFileDialog1->FileName, label13->Text + "................................" + textBox13->Text + "\r\n");
		IO::File::AppendAllText(saveFileDialog1->FileName, label14->Text + ".............................." + textBox14->Text + "\r\n");
		IO::File::AppendAllText(saveFileDialog1->FileName, label15->Text + ".............................." + textBox15->Text + "\r\n");
		IO::File::AppendAllText(saveFileDialog1->FileName, "_____________________________________________________________________" + "\r\n");
		IO::File::AppendAllText(saveFileDialog1->FileName, "\r\n" + label16->Text + " " + comboBox1->Text + " - "+ "....." + textBox17->Text + "\r\n");
		IO::File::AppendAllText(saveFileDialog1->FileName, label18->Text + " " + "......................" + textBox18->Text + "\r\n");
		IO::File::AppendAllText(saveFileDialog1->FileName, label19->Text + " " + "......................" + textBox19->Text + "\r\n");
		IO::File::AppendAllText(saveFileDialog1->FileName, "Пароль: "+ textBox16->Text + "\r\n");
		
	}
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
{
	int i=8372, j=67193, x=2, pas;

	pas=(rand()*i+j)*x;
	textBox16->Text = Convert::ToString(pas);
}
private: System::Void textBox11_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	int a = Convert::ToInt64(textBox11->Text->Length.ToString());
	if (a < 11)
	{
		textBox11->BackColor = Color::Tomato;
		button4->Enabled = false;
	}
	else
	{
		textBox11->BackColor = Color::LawnGreen;
		button4->Enabled = true;
	}
}
private: System::Void textBox13_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	int a = Convert::ToInt64(textBox13->Text->Length.ToString());
	if (a < 13)
	{
		textBox13->BackColor = Color::Tomato;
	}
	else textBox13->BackColor = Color::LawnGreen;
}
private: System::Void textBox12_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	int a = Convert::ToInt64(textBox12->Text->Length.ToString());

	if (radioButton1->Checked == true && a < 10 || radioButton3->Checked == true && a < 12)
	{
		textBox12->BackColor = Color::Tomato;
		button3->Enabled = false;
	}
	else
	{
		textBox12->BackColor = Color::LawnGreen;
		button3->Enabled = true;
	}
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) 
{

	int ChekSum = 0; //Обнуляем контрольную сумму
	int ChekSum2 = 0;//Контрольная сумма для второго числа физ лица
	if (radioButton1->Checked == true || radioButton4->Checked == true)//Для юр лица
	{
		int aray[10]; // Массив для подсчёта контрольной суммы для юр лица из 10 элементов
		for (int i = 0; i <= 9; i++)
		{
			aray[i] = textBox12->Text[i] - '0'; //Заполняем массив элементами из textBox12
		}
		ChekSum = (((2 * aray[0]) + (4 * aray[1]) + (10 * aray[2]) + (3 * aray[3]) + (5 * aray[4]) + (9 * aray[5]) + (4 * aray[6]) + (6 * aray[7]) + (8 * aray[8])) % 11) % 10; //Считаем контрольную сумму
		//textBox2->Text = Convert::ToString(ChekSum);

		if (ChekSum == aray[9]) //Сравниваем ChekSum с контрольным числом в ИНН
		{
			label20->Text = "OK";
			label20->ForeColor = Color::ForestGreen;
		}
		else
		{
			label20->Text = "NO";
			label20->ForeColor = Color::Red;
		}
	}
	else if (radioButton3->Checked == true || radioButton2->Checked == true) //Для физ лица
	{
		int aray[12]; // Массив для подсчёта контрольной суммы для юр лица из 10 элементов
		for (int i = 0; i <= 11; i++)
		{
			aray[i] = textBox12->Text[i] - '0'; //Заполняем массив элементами из textBox12
		}
		ChekSum = (((7 * aray[0]) + (2 * aray[1]) + (4 * aray[2]) + (10 * aray[3]) + (3 * aray[4]) + (5 * aray[5]) + (9 * aray[6]) + (4 * aray[7]) + (6 * aray[8]) + (8 * aray[9])) % 11) % 10;//Считаем контрольную сумму
		ChekSum2= (((3 * aray[0]) + (7 * aray[1]) + (2 * aray[2]) + (4 * aray[3]) + (10 * aray[4]) + (3 * aray[5]) + (5 * aray[6]) + (9 * aray[7]) + (4 * aray[8]) + (6 * aray[9]) + (8 * aray[10])) % 11) % 10;//Считаем контрольную сумму
		//textBox1->Text = Convert::ToString(ChekSum);
		//textBox2->Text = Convert::ToString(ChekSum2);

		if (ChekSum == aray[10] && ChekSum2 == aray[11]) //Сравниваем ChekSum1 и ChekSum2 с контрольными числами в ИНН
		{
			label20->Text = "OK";
			label20->ForeColor = Color::ForestGreen;
		}
		else
		{
			label20->Text = "NO";
			label20->ForeColor = Color::Red;
		}
	}
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) 
{
	int ChekSum = 0;
	int aray[11]; // Массив для подсчёта контрольной суммы снилс
	for (int i = 0; i <= 10; i++)
	{
		aray[i] = textBox11->Text[i] - '0'; //Заполняем массив элементами из textBox11
	}
	ChekSum = 9 * aray[0] + 8 * aray[1] + 7 * aray[2] + 6 * aray[3] + 5 * aray[4] + 4 * aray[5] + 3 * aray[6] + 2 * aray[7] + 1 * aray[8];
	if (ChekSum > 101)
		ChekSum = ChekSum % 101;
	else if (ChekSum==100 || ChekSum==101)
		ChekSum = 00;
	//textBox1->Text = Convert::ToString(aray[9]) + Convert::ToString(aray[10]);
	//textBox2->Text = Convert::ToString(ChekSum);
	if (Convert::ToString(ChekSum) == Convert::ToString(aray[9]) + Convert::ToString(aray[10])) //Сравниваем ChekSum1 с контрольным числом в снилс
	{
		label21->Text = "OK";
		label21->ForeColor = Color::ForestGreen;
	}
	else
	{
		label21->Text = "NO";
		label21->ForeColor = Color::Red;
	}
}
};

}
