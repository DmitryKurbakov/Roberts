#pragma once

#include "MyFormController.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


public ref class MyForm : public System::Windows::Forms::Form
{

public:

	MyFormController^ controller;

	MyForm(void)
	{
		InitializeComponent();
		
		controller = gcnew MyFormController(this->pictureBox);

		controller->OnFormLoad();
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
private: System::Windows::Forms::GroupBox^  pictureGroupBox;
protected:
private: System::Windows::Forms::PictureBox^  pictureBox;
private: System::Windows::Forms::GroupBox^  toolsGroupBox;
private: System::Windows::Forms::Label^  label4;


private: System::Windows::Forms::Label^  label3;


private: System::Windows::Forms::Label^  label2;


private: System::Windows::Forms::Label^  label1;

private: System::Windows::Forms::Label^  label5;
private: System::Windows::Forms::Label^  label6;
private: System::Windows::Forms::Label^  label7;
private: System::Windows::Forms::Label^  label8;
private: System::Windows::Forms::HScrollBar^  rotationZScrollBar;

private: System::Windows::Forms::HScrollBar^  rotationYScrollBar;

private: System::Windows::Forms::HScrollBar^  rotationXScrollBar;


private: System::Windows::Forms::HScrollBar^  shiftZScrollBar;
private: System::Windows::Forms::HScrollBar^  shiftYScrollBar;
private: System::Windows::Forms::HScrollBar^  shiftXScrollBar;
private: System::Windows::Forms::Label^  label9;
private: System::Windows::Forms::HScrollBar^  scalingZScrollBar;
private: System::Windows::Forms::HScrollBar^  scalingYScrollBar;
private: System::Windows::Forms::HScrollBar^  scalingXScrollBar;
private: System::Windows::Forms::Label^  label10;
private: System::Windows::Forms::Label^  label11;
private: System::Windows::Forms::Label^  label12;
private: System::Windows::Forms::Label^  label13;
private: System::Windows::Forms::TextBox^  z0TextBox;
private: System::Windows::Forms::RadioButton^  perspectiveProjectionRadioButton;
private: System::Windows::Forms::RadioButton^  parallelProjectionRadioButton;
private: System::Windows::Forms::Button^  button1;
private: System::Windows::Forms::Label^  label14;
private: System::Windows::Forms::Button^  button2;
private: System::Windows::Forms::MenuStrip^  menuStrip1;
private: System::Windows::Forms::ToolStripMenuItem^  оПрограммеToolStripMenuItem;
private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
private: System::Windows::Forms::CheckBox^  checkBox1;



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
		this->pictureGroupBox = (gcnew System::Windows::Forms::GroupBox());
		this->pictureBox = (gcnew System::Windows::Forms::PictureBox());
		this->toolsGroupBox = (gcnew System::Windows::Forms::GroupBox());
		this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
		this->label14 = (gcnew System::Windows::Forms::Label());
		this->button2 = (gcnew System::Windows::Forms::Button());
		this->button1 = (gcnew System::Windows::Forms::Button());
		this->label13 = (gcnew System::Windows::Forms::Label());
		this->z0TextBox = (gcnew System::Windows::Forms::TextBox());
		this->perspectiveProjectionRadioButton = (gcnew System::Windows::Forms::RadioButton());
		this->parallelProjectionRadioButton = (gcnew System::Windows::Forms::RadioButton());
		this->label9 = (gcnew System::Windows::Forms::Label());
		this->scalingZScrollBar = (gcnew System::Windows::Forms::HScrollBar());
		this->scalingYScrollBar = (gcnew System::Windows::Forms::HScrollBar());
		this->scalingXScrollBar = (gcnew System::Windows::Forms::HScrollBar());
		this->label10 = (gcnew System::Windows::Forms::Label());
		this->label11 = (gcnew System::Windows::Forms::Label());
		this->label12 = (gcnew System::Windows::Forms::Label());
		this->label8 = (gcnew System::Windows::Forms::Label());
		this->rotationZScrollBar = (gcnew System::Windows::Forms::HScrollBar());
		this->rotationYScrollBar = (gcnew System::Windows::Forms::HScrollBar());
		this->rotationXScrollBar = (gcnew System::Windows::Forms::HScrollBar());
		this->shiftZScrollBar = (gcnew System::Windows::Forms::HScrollBar());
		this->shiftYScrollBar = (gcnew System::Windows::Forms::HScrollBar());
		this->shiftXScrollBar = (gcnew System::Windows::Forms::HScrollBar());
		this->label5 = (gcnew System::Windows::Forms::Label());
		this->label6 = (gcnew System::Windows::Forms::Label());
		this->label7 = (gcnew System::Windows::Forms::Label());
		this->label4 = (gcnew System::Windows::Forms::Label());
		this->label3 = (gcnew System::Windows::Forms::Label());
		this->label2 = (gcnew System::Windows::Forms::Label());
		this->label1 = (gcnew System::Windows::Forms::Label());
		this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
		this->оПрограммеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
		this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
		this->pictureGroupBox->SuspendLayout();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox))->BeginInit();
		this->toolsGroupBox->SuspendLayout();
		this->menuStrip1->SuspendLayout();
		this->SuspendLayout();
		// 
		// pictureGroupBox
		// 
		this->pictureGroupBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
			| System::Windows::Forms::AnchorStyles::Left)
			| System::Windows::Forms::AnchorStyles::Right));
		this->pictureGroupBox->Controls->Add(this->pictureBox);
		this->pictureGroupBox->Location = System::Drawing::Point(184, 31);
		this->pictureGroupBox->Name = L"pictureGroupBox";
		this->pictureGroupBox->Size = System::Drawing::Size(532, 517);
		this->pictureGroupBox->TabIndex = 0;
		this->pictureGroupBox->TabStop = false;
		this->pictureGroupBox->Text = L"Изображение";
		// 
		// pictureBox
		// 
		this->pictureBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
			| System::Windows::Forms::AnchorStyles::Left)
			| System::Windows::Forms::AnchorStyles::Right));
		this->pictureBox->BackColor = System::Drawing::SystemColors::ControlLightLight;
		this->pictureBox->Location = System::Drawing::Point(6, 19);
		this->pictureBox->Name = L"pictureBox";
		this->pictureBox->Size = System::Drawing::Size(520, 492);
		this->pictureBox->TabIndex = 0;
		this->pictureBox->TabStop = false;
		// 
		// toolsGroupBox
		// 
		this->toolsGroupBox->Controls->Add(this->checkBox1);
		this->toolsGroupBox->Controls->Add(this->label14);
		this->toolsGroupBox->Controls->Add(this->button2);
		this->toolsGroupBox->Controls->Add(this->button1);
		this->toolsGroupBox->Controls->Add(this->label13);
		this->toolsGroupBox->Controls->Add(this->z0TextBox);
		this->toolsGroupBox->Controls->Add(this->perspectiveProjectionRadioButton);
		this->toolsGroupBox->Controls->Add(this->parallelProjectionRadioButton);
		this->toolsGroupBox->Controls->Add(this->label9);
		this->toolsGroupBox->Controls->Add(this->scalingZScrollBar);
		this->toolsGroupBox->Controls->Add(this->scalingYScrollBar);
		this->toolsGroupBox->Controls->Add(this->scalingXScrollBar);
		this->toolsGroupBox->Controls->Add(this->label10);
		this->toolsGroupBox->Controls->Add(this->label11);
		this->toolsGroupBox->Controls->Add(this->label12);
		this->toolsGroupBox->Controls->Add(this->label8);
		this->toolsGroupBox->Controls->Add(this->rotationZScrollBar);
		this->toolsGroupBox->Controls->Add(this->rotationYScrollBar);
		this->toolsGroupBox->Controls->Add(this->rotationXScrollBar);
		this->toolsGroupBox->Controls->Add(this->shiftZScrollBar);
		this->toolsGroupBox->Controls->Add(this->shiftYScrollBar);
		this->toolsGroupBox->Controls->Add(this->shiftXScrollBar);
		this->toolsGroupBox->Controls->Add(this->label5);
		this->toolsGroupBox->Controls->Add(this->label6);
		this->toolsGroupBox->Controls->Add(this->label7);
		this->toolsGroupBox->Controls->Add(this->label4);
		this->toolsGroupBox->Controls->Add(this->label3);
		this->toolsGroupBox->Controls->Add(this->label2);
		this->toolsGroupBox->Controls->Add(this->label1);
		this->toolsGroupBox->Location = System::Drawing::Point(12, 31);
		this->toolsGroupBox->Name = L"toolsGroupBox";
		this->toolsGroupBox->Size = System::Drawing::Size(166, 517);
		this->toolsGroupBox->TabIndex = 1;
		this->toolsGroupBox->TabStop = false;
		this->toolsGroupBox->Text = L"Инструменты";
		// 
		// checkBox1
		// 
		this->checkBox1->AutoSize = true;
		this->checkBox1->Location = System::Drawing::Point(6, 352);
		this->checkBox1->Name = L"checkBox1";
		this->checkBox1->Size = System::Drawing::Size(130, 17);
		this->checkBox1->TabIndex = 41;
		this->checkBox1->Text = L"Удалить невидимые";
		this->checkBox1->UseVisualStyleBackColor = true;
		this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
		// 
		// label14
		// 
		this->label14->AutoSize = true;
		this->label14->Location = System::Drawing::Point(5, 472);
		this->label14->Name = L"label14";
		this->label14->Size = System::Drawing::Size(152, 13);
		this->label14->TabIndex = 40;
		this->label14->Text = L"Загрузка объекта из файла:";
		// 
		// button2
		// 
		this->button2->Location = System::Drawing::Point(79, 488);
		this->button2->Name = L"button2";
		this->button2->Size = System::Drawing::Size(75, 23);
		this->button2->TabIndex = 39;
		this->button2->Text = L"Обзор";
		this->button2->UseVisualStyleBackColor = true;
		this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
		// 
		// button1
		// 
		this->button1->Enabled = false;
		this->button1->Location = System::Drawing::Point(125, 63);
		this->button1->Name = L"button1";
		this->button1->Size = System::Drawing::Size(35, 23);
		this->button1->TabIndex = 38;
		this->button1->Text = L"ОК";
		this->button1->UseVisualStyleBackColor = true;
		this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
		// 
		// label13
		// 
		this->label13->AutoSize = true;
		this->label13->Location = System::Drawing::Point(51, 68);
		this->label13->Name = L"label13";
		this->label13->Size = System::Drawing::Size(23, 13);
		this->label13->TabIndex = 37;
		this->label13->Text = L"Z0:";
		// 
		// z0TextBox
		// 
		this->z0TextBox->Enabled = false;
		this->z0TextBox->Location = System::Drawing::Point(80, 65);
		this->z0TextBox->Name = L"z0TextBox";
		this->z0TextBox->Size = System::Drawing::Size(39, 20);
		this->z0TextBox->TabIndex = 36;
		this->z0TextBox->Text = L"150";
		// 
		// perspectiveProjectionRadioButton
		// 
		this->perspectiveProjectionRadioButton->AutoSize = true;
		this->perspectiveProjectionRadioButton->Location = System::Drawing::Point(11, 42);
		this->perspectiveProjectionRadioButton->Name = L"perspectiveProjectionRadioButton";
		this->perspectiveProjectionRadioButton->Size = System::Drawing::Size(155, 17);
		this->perspectiveProjectionRadioButton->TabIndex = 35;
		this->perspectiveProjectionRadioButton->Text = L"Перспективная проекция";
		this->perspectiveProjectionRadioButton->UseVisualStyleBackColor = true;
		this->perspectiveProjectionRadioButton->CheckedChanged += gcnew System::EventHandler(this, &MyForm::OnCheckedChanged);
		// 
		// parallelProjectionRadioButton
		// 
		this->parallelProjectionRadioButton->AutoSize = true;
		this->parallelProjectionRadioButton->Checked = true;
		this->parallelProjectionRadioButton->Location = System::Drawing::Point(11, 19);
		this->parallelProjectionRadioButton->Name = L"parallelProjectionRadioButton";
		this->parallelProjectionRadioButton->Size = System::Drawing::Size(150, 17);
		this->parallelProjectionRadioButton->TabIndex = 34;
		this->parallelProjectionRadioButton->TabStop = true;
		this->parallelProjectionRadioButton->Text = L"Параллельная проекция";
		this->parallelProjectionRadioButton->UseVisualStyleBackColor = true;
		this->parallelProjectionRadioButton->CheckedChanged += gcnew System::EventHandler(this, &MyForm::OnCheckedChanged);
		// 
		// label9
		// 
		this->label9->AutoSize = true;
		this->label9->Location = System::Drawing::Point(6, 257);
		this->label9->Name = L"label9";
		this->label9->Size = System::Drawing::Size(101, 13);
		this->label9->TabIndex = 33;
		this->label9->Text = L"Масштабирование";
		// 
		// scalingZScrollBar
		// 
		this->scalingZScrollBar->Location = System::Drawing::Point(23, 304);
		this->scalingZScrollBar->Maximum = 1000;
		this->scalingZScrollBar->Name = L"scalingZScrollBar";
		this->scalingZScrollBar->Size = System::Drawing::Size(131, 17);
		this->scalingZScrollBar->TabIndex = 32;
		this->scalingZScrollBar->Value = 500;
		this->scalingZScrollBar->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MyForm::OnZSScroll);
		// 
		// scalingYScrollBar
		// 
		this->scalingYScrollBar->Location = System::Drawing::Point(23, 287);
		this->scalingYScrollBar->Maximum = 1000;
		this->scalingYScrollBar->Name = L"scalingYScrollBar";
		this->scalingYScrollBar->Size = System::Drawing::Size(131, 17);
		this->scalingYScrollBar->TabIndex = 31;
		this->scalingYScrollBar->Value = 500;
		this->scalingYScrollBar->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MyForm::OnYSScroll);
		// 
		// scalingXScrollBar
		// 
		this->scalingXScrollBar->Location = System::Drawing::Point(23, 270);
		this->scalingXScrollBar->Maximum = 1000;
		this->scalingXScrollBar->Name = L"scalingXScrollBar";
		this->scalingXScrollBar->Size = System::Drawing::Size(131, 17);
		this->scalingXScrollBar->TabIndex = 30;
		this->scalingXScrollBar->Value = 500;
		this->scalingXScrollBar->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MyForm::OnSScroll);
		// 
		// label10
		// 
		this->label10->AutoSize = true;
		this->label10->Location = System::Drawing::Point(6, 308);
		this->label10->Name = L"label10";
		this->label10->Size = System::Drawing::Size(14, 13);
		this->label10->TabIndex = 29;
		this->label10->Text = L"Z";
		// 
		// label11
		// 
		this->label11->AutoSize = true;
		this->label11->Location = System::Drawing::Point(6, 287);
		this->label11->Name = L"label11";
		this->label11->Size = System::Drawing::Size(14, 13);
		this->label11->TabIndex = 28;
		this->label11->Text = L"Y";
		// 
		// label12
		// 
		this->label12->AutoSize = true;
		this->label12->Location = System::Drawing::Point(6, 270);
		this->label12->Name = L"label12";
		this->label12->Size = System::Drawing::Size(14, 13);
		this->label12->TabIndex = 27;
		this->label12->Text = L"X";
		// 
		// label8
		// 
		this->label8->AutoSize = true;
		this->label8->Location = System::Drawing::Point(6, 176);
		this->label8->Name = L"label8";
		this->label8->Size = System::Drawing::Size(59, 13);
		this->label8->TabIndex = 26;
		this->label8->Text = L"Вращение";
		// 
		// rotationZScrollBar
		// 
		this->rotationZScrollBar->Location = System::Drawing::Point(23, 223);
		this->rotationZScrollBar->Maximum = 1000;
		this->rotationZScrollBar->Name = L"rotationZScrollBar";
		this->rotationZScrollBar->Size = System::Drawing::Size(131, 17);
		this->rotationZScrollBar->TabIndex = 25;
		this->rotationZScrollBar->Value = 500;
		this->rotationZScrollBar->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MyForm::OnRZScroll);
		// 
		// rotationYScrollBar
		// 
		this->rotationYScrollBar->Location = System::Drawing::Point(23, 206);
		this->rotationYScrollBar->Maximum = 1000;
		this->rotationYScrollBar->Name = L"rotationYScrollBar";
		this->rotationYScrollBar->Size = System::Drawing::Size(131, 17);
		this->rotationYScrollBar->TabIndex = 24;
		this->rotationYScrollBar->Value = 500;
		this->rotationYScrollBar->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MyForm::OnRYScroll);
		// 
		// rotationXScrollBar
		// 
		this->rotationXScrollBar->Location = System::Drawing::Point(23, 189);
		this->rotationXScrollBar->Maximum = 1000;
		this->rotationXScrollBar->Name = L"rotationXScrollBar";
		this->rotationXScrollBar->Size = System::Drawing::Size(131, 17);
		this->rotationXScrollBar->TabIndex = 23;
		this->rotationXScrollBar->Value = 500;
		this->rotationXScrollBar->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MyForm::OnRXScroll);
		// 
		// shiftZScrollBar
		// 
		this->shiftZScrollBar->Location = System::Drawing::Point(23, 149);
		this->shiftZScrollBar->Maximum = 1000;
		this->shiftZScrollBar->Name = L"shiftZScrollBar";
		this->shiftZScrollBar->Size = System::Drawing::Size(131, 17);
		this->shiftZScrollBar->TabIndex = 22;
		this->shiftZScrollBar->Value = 500;
		this->shiftZScrollBar->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MyForm::OnZScroll);
		// 
		// shiftYScrollBar
		// 
		this->shiftYScrollBar->Location = System::Drawing::Point(23, 132);
		this->shiftYScrollBar->Maximum = 1000;
		this->shiftYScrollBar->Name = L"shiftYScrollBar";
		this->shiftYScrollBar->Size = System::Drawing::Size(131, 17);
		this->shiftYScrollBar->TabIndex = 21;
		this->shiftYScrollBar->Value = 500;
		this->shiftYScrollBar->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MyForm::OnYScroll);
		// 
		// shiftXScrollBar
		// 
		this->shiftXScrollBar->Location = System::Drawing::Point(23, 115);
		this->shiftXScrollBar->Maximum = 1000;
		this->shiftXScrollBar->Name = L"shiftXScrollBar";
		this->shiftXScrollBar->Size = System::Drawing::Size(131, 17);
		this->shiftXScrollBar->TabIndex = 20;
		this->shiftXScrollBar->Value = 500;
		this->shiftXScrollBar->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MyForm::OnXScroll);
		// 
		// label5
		// 
		this->label5->AutoSize = true;
		this->label5->Location = System::Drawing::Point(6, 227);
		this->label5->Name = L"label5";
		this->label5->Size = System::Drawing::Size(14, 13);
		this->label5->TabIndex = 19;
		this->label5->Text = L"Z";
		// 
		// label6
		// 
		this->label6->AutoSize = true;
		this->label6->Location = System::Drawing::Point(6, 206);
		this->label6->Name = L"label6";
		this->label6->Size = System::Drawing::Size(14, 13);
		this->label6->TabIndex = 18;
		this->label6->Text = L"Y";
		// 
		// label7
		// 
		this->label7->AutoSize = true;
		this->label7->Location = System::Drawing::Point(6, 189);
		this->label7->Name = L"label7";
		this->label7->Size = System::Drawing::Size(14, 13);
		this->label7->TabIndex = 17;
		this->label7->Text = L"X";
		// 
		// label4
		// 
		this->label4->AutoSize = true;
		this->label4->Location = System::Drawing::Point(6, 149);
		this->label4->Name = L"label4";
		this->label4->Size = System::Drawing::Size(14, 13);
		this->label4->TabIndex = 6;
		this->label4->Text = L"Z";
		// 
		// label3
		// 
		this->label3->AutoSize = true;
		this->label3->Location = System::Drawing::Point(6, 132);
		this->label3->Name = L"label3";
		this->label3->Size = System::Drawing::Size(14, 13);
		this->label3->TabIndex = 4;
		this->label3->Text = L"Y";
		// 
		// label2
		// 
		this->label2->AutoSize = true;
		this->label2->Location = System::Drawing::Point(6, 115);
		this->label2->Name = L"label2";
		this->label2->Size = System::Drawing::Size(14, 13);
		this->label2->TabIndex = 2;
		this->label2->Text = L"X";
		// 
		// label1
		// 
		this->label1->AutoSize = true;
		this->label1->Location = System::Drawing::Point(6, 99);
		this->label1->Name = L"label1";
		this->label1->Size = System::Drawing::Size(80, 13);
		this->label1->TabIndex = 0;
		this->label1->Text = L"Перемещение";
		// 
		// menuStrip1
		// 
		this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->оПрограммеToolStripMenuItem });
		this->menuStrip1->Location = System::Drawing::Point(0, 0);
		this->menuStrip1->Name = L"menuStrip1";
		this->menuStrip1->Size = System::Drawing::Size(728, 24);
		this->menuStrip1->TabIndex = 2;
		this->menuStrip1->Text = L"menuStrip1";
		// 
		// оПрограммеToolStripMenuItem
		// 
		this->оПрограммеToolStripMenuItem->Name = L"оПрограммеToolStripMenuItem";
		this->оПрограммеToolStripMenuItem->Size = System::Drawing::Size(94, 20);
		this->оПрограммеToolStripMenuItem->Text = L"О программе";
		this->оПрограммеToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::оПрограммеToolStripMenuItem_Click);
		// 
		// openFileDialog1
		// 
		this->openFileDialog1->FileName = L"openFileDialog1";
		// 
		// MyForm
		// 
		this->AcceptButton = this->button1;
		this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
		this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
		this->ClientSize = System::Drawing::Size(728, 560);
		this->Controls->Add(this->toolsGroupBox);
		this->Controls->Add(this->pictureGroupBox);
		this->Controls->Add(this->menuStrip1);
		this->MainMenuStrip = this->menuStrip1;
		this->Name = L"MyForm";
		this->Text = L"3D";
		this->pictureGroupBox->ResumeLayout(false);
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox))->EndInit();
		this->toolsGroupBox->ResumeLayout(false);
		this->toolsGroupBox->PerformLayout();
		this->menuStrip1->ResumeLayout(false);
		this->menuStrip1->PerformLayout();
		this->ResumeLayout(false);
		this->PerformLayout();

	}
#pragma endregion
	
	void OnMouseDown(System::Object ^sender, System::Windows::Forms::MouseEventArgs ^e);
	void OnMouseMove(System::Object ^sender, System::Windows::Forms::MouseEventArgs ^e);
	void OnMouseUp(System::Object ^sender, System::Windows::Forms::MouseEventArgs ^e);
	void OnXScroll(System::Object ^sender, System::Windows::Forms::ScrollEventArgs ^e);
	void OnYScroll(System::Object ^sender, System::Windows::Forms::ScrollEventArgs ^e);
	void OnZScroll(System::Object ^sender, System::Windows::Forms::ScrollEventArgs ^e);
	void OnRXScroll(System::Object ^sender, System::Windows::Forms::ScrollEventArgs ^e);
	void OnRYScroll(System::Object ^sender, System::Windows::Forms::ScrollEventArgs ^e);
	void OnRZScroll(System::Object ^sender, System::Windows::Forms::ScrollEventArgs ^e);
	void OnSScroll(System::Object ^sender, System::Windows::Forms::ScrollEventArgs ^e);
	void OnYSScroll(System::Object ^sender, System::Windows::Forms::ScrollEventArgs ^e);
	void OnZSScroll(System::Object ^sender, System::Windows::Forms::ScrollEventArgs ^e);
	void OnCheckedChanged(System::Object ^sender, System::EventArgs ^e);
	void OnTextChanged(System::Object ^sender, System::EventArgs ^e);
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

	try
	{
		controller->z = (float)Double::Parse(z0TextBox->Text);
		controller->OnFormLoad();
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(
			"Введите новое значение Z0",
			"Неверное значение",
			MessageBoxButtons::OK,
			MessageBoxIcon::Error
		);

		return;
	}


}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	
	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		controller->fileName = openFileDialog1->FileName;
		controller->OnFormLoad();
	}

}
private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

	controller->del = checkBox1->Checked;
	
	Bitmap^ resultBitmap = gcnew Bitmap(pictureBox->Image->Width, pictureBox->Image->Height);

	resultBitmap = controller->mod->DrawTetrahedron(resultBitmap, controller->mode, controller->z, controller->del);

	delete pictureBox->Image;
	pictureBox->Image = resultBitmap;
}
private: System::Void оПрограммеToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	MessageBox::Show("Семинар 5. Удаление невидимых линий\nКурбаков Д.С.\nНа панели инструментов представлены ползунки и кнопки для управления телом\nWindows 10\nVisual Studio 2017\ni7-7700 gtx1070\n18.10.2017");
}
};





void MyForm::OnMouseDown(System::Object ^sender, System::Windows::Forms::MouseEventArgs ^e)
{
	controller->OnMarkerMouseDown();
}


void MyForm::OnMouseMove(System::Object ^sender, System::Windows::Forms::MouseEventArgs ^e)
{
	Point cursorPoint = pictureBox->PointToClient(System::Windows::Forms::Cursor::Position);
	
	controller->OnMarkerMouseMove(cursorPoint);
}


void MyForm::OnMouseUp(System::Object ^sender, System::Windows::Forms::MouseEventArgs ^e)
{
	controller->OnMarkerMouseUp();
}



void MyForm::OnXScroll(System::Object ^sender, System::Windows::Forms::ScrollEventArgs ^e)
{
	int delta = e->NewValue - e->OldValue;

	if (delta == 0) return;

	controller->OnScroll(0, delta > 0 ? true : false);
}


void MyForm::OnYScroll(System::Object ^sender, System::Windows::Forms::ScrollEventArgs ^e)
{
	int delta = e->NewValue - e->OldValue;

	if (delta == 0) return;

	controller->OnScroll(1, delta > 0 ? true : false);
}


void MyForm::OnZScroll(System::Object ^sender, System::Windows::Forms::ScrollEventArgs ^e)
{
	int delta = e->NewValue - e->OldValue;

	if (delta == 0) return;

	controller->OnScroll(2, delta > 0 ? true : false);
}


void MyForm::OnRXScroll(System::Object ^sender, System::Windows::Forms::ScrollEventArgs ^e)
{
	int delta = e->NewValue - e->OldValue;

	if (delta == 0) return;

	controller->OnRotation(0, delta > 0 ? true : false);
}


void MyForm::OnRYScroll(System::Object ^sender, System::Windows::Forms::ScrollEventArgs ^e)
{

	int delta = e->NewValue - e->OldValue;

	if (delta == 0) return;

	controller->OnRotation(1, delta > 0 ? true : false);
}


void MyForm::OnRZScroll(System::Object ^sender, System::Windows::Forms::ScrollEventArgs ^e)
{
	int delta = e->NewValue - e->OldValue;

	if (delta == 0) return;

	controller->OnRotation(2, delta > 0 ? true : false);
}


void MyForm::OnSScroll(System::Object ^sender, System::Windows::Forms::ScrollEventArgs ^e)
{
	int delta = e->NewValue - e->OldValue;

	if (delta == 0) return;

	controller->OnScaling(0, delta > 0 ? true : false);
}


void MyForm::OnYSScroll(System::Object ^sender, System::Windows::Forms::ScrollEventArgs ^e)
{
	int delta = e->NewValue - e->OldValue;

	if (delta == 0) return;

	controller->OnScaling(1, delta > 0 ? true : false);
}


void MyForm::OnZSScroll(System::Object ^sender, System::Windows::Forms::ScrollEventArgs ^e)
{
	int delta = e->NewValue - e->OldValue;

	if (delta == 0) return;

	controller->OnScaling(2, delta > 0 ? true : false);
}


void MyForm::OnCheckedChanged(System::Object ^sender, System::EventArgs ^e)
{

	

	if (perspectiveProjectionRadioButton->Checked)
	{
		z0TextBox->Enabled = true;
		button1->Enabled = true;
		try
		{
			controller->z = (float)Double::Parse(z0TextBox->Text);
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(
				"Введите новое значение Z0",
				"Неверное значение",
				MessageBoxButtons::OK,
				MessageBoxIcon::Error
				);

			return;
		}

		
		
	}
	else
	{
		z0TextBox->Enabled = false;
		button1->Enabled = false;
	}

	controller->mode = parallelProjectionRadioButton->Checked ? 0 : 1;

	controller->OnFormLoad();
}


void MyForm::OnTextChanged(System::Object ^sender, System::EventArgs ^e)
{
	

}
