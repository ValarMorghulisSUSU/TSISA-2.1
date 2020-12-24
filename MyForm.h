#pragma once
#include "Header.h"
namespace Practice21 {

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
		myObject^ objProperty;
		myObject^ object;


	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::TextBox^ textBox5;

	public:
		MyForm(void)
		{
			InitializeComponent();
			object = gcnew myObject();
			objProperty = gcnew myObject();

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
	private: System::Windows::Forms::GroupBox^  groupBox1;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ListBox^  listBox2;
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Button^  button6;

	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->groupBox1->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->groupBox4);
			this->groupBox1->Controls->Add(this->groupBox2);
			this->groupBox1->Controls->Add(this->button5);
			this->groupBox1->Controls->Add(this->button4);
			this->groupBox1->Controls->Add(this->groupBox3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->listBox2);
			this->groupBox1->Controls->Add(this->listBox1);
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(707, 400);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->label4);
			this->groupBox4->Controls->Add(this->textBox5);
			this->groupBox4->Controls->Add(this->textBox3);
			this->groupBox4->Controls->Add(this->button1);
			this->groupBox4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox4->Location = System::Drawing::Point(434, 265);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(231, 120);
			this->groupBox4->TabIndex = 13;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Генерация свойства";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(6, 19);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(50, 15);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Объект:";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(6, 61);
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(219, 23);
			this->textBox5->TabIndex = 12;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(6, 35);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(219, 23);
			this->textBox3->TabIndex = 7;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::White;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(6, 87);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(219, 25);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Сгенерировать случайное свойство";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->textBox4);
			this->groupBox2->Controls->Add(this->textBox2);
			this->groupBox2->Controls->Add(this->button6);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox2->Location = System::Drawing::Point(434, 152);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(231, 107);
			this->groupBox2->TabIndex = 5;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Генерация пары";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(6, 45);
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(219, 23);
			this->textBox4->TabIndex = 11;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(6, 19);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(219, 23);
			this->textBox2->TabIndex = 6;
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::White;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Location = System::Drawing::Point(6, 71);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(219, 25);
			this->button6->TabIndex = 5;
			this->button6->Text = L"Сгенирировать случайную пару";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::White;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->Location = System::Drawing::Point(217, 360);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(202, 25);
			this->button5->TabIndex = 7;
			this->button5->Text = L"Удалить выбранное свойства";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::White;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(9, 360);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(202, 25);
			this->button4->TabIndex = 6;
			this->button4->Text = L"Удалить выбранный объект";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->button3);
			this->groupBox3->Controls->Add(this->textBox1);
			this->groupBox3->Controls->Add(this->label3);
			this->groupBox3->Controls->Add(this->button2);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox3->Location = System::Drawing::Point(434, 16);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(231, 130);
			this->groupBox3->TabIndex = 5;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Добавление";
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::White;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Location = System::Drawing::Point(6, 97);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(219, 25);
			this->button3->TabIndex = 8;
			this->button3->Text = L"Добавить в список свойств";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(6, 37);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(219, 23);
			this->textBox1->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(3, 19);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(146, 15);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Введите объект/свойство";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::White;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Location = System::Drawing::Point(6, 66);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(219, 25);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Добавить в список объектов";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(214, 14);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(58, 15);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Свойства";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(6, 14);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(56, 15);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Объекты";
			// 
			// listBox2
			// 
			this->listBox2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 15;
			this->listBox2->Location = System::Drawing::Point(9, 32);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(202, 319);
			this->listBox2->TabIndex = 1;
			// 
			// listBox1
			// 
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 15;
			this->listBox1->Location = System::Drawing::Point(217, 32);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(202, 319);
			this->listBox1->TabIndex = 0;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(729, 420);
			this->Controls->Add(this->groupBox1);
			this->Name = L"MyForm";
			this->Text = L"Метод фокальных объектов";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->textBox3->Text != "")
		this->textBox5->Text = this->objProperty->generateRandObject();
	else
		MessageBox::Show("Неверные входные данные", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	if (this->textBox1->Text != "") {
		this->object->add(this->textBox1->Text->ToLower());
		this->object->viewLB(this->listBox2);
		StreamWriter^ SW = gcnew StreamWriter("Objects.txt");
		this->object->writeToFile(SW);
	}
	else
	{
		MessageBox::Show("Неверные входные данные", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	this->textBox1->Text = "";
}
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	StreamReader^ SR = gcnew StreamReader("Objects.txt");
	this->object->readFromFile(SR);
	SR = gcnew StreamReader("Properties.txt");
	this->objProperty->readFromFile(SR);
	this->object->viewLB(listBox2);
	this->objProperty->viewLB(listBox1);
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->textBox1->Text != "") {
		this->objProperty->add(this->textBox1->Text->ToLower());
		this->objProperty->viewLB(this->listBox1);
		StreamWriter^ SW = gcnew StreamWriter("Properties.txt");
		this->objProperty->writeToFile(SW);
	}
	else{
		MessageBox::Show("Неверные входные данные", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	this->textBox1->Text = "";
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	this->textBox2->Text = objProperty->generateRandObject();
	this->textBox4->Text = object->generateRandObject();
}

private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	this->object->deleteObject(this->listBox2->SelectedIndex);
	this->object->viewLB(this->listBox2);
	StreamWriter^ SW = gcnew StreamWriter("Objects.txt");
	this->object->writeToFile(SW);
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	this->objProperty->deleteObject(this->listBox1->SelectedIndex);
	this->objProperty->viewLB(this->listBox1);
	StreamWriter^ SW = gcnew StreamWriter("Properties.txt");
	this->objProperty->writeToFile(SW);
}
};
}
