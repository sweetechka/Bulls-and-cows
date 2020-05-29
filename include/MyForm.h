#pragma once

#include "Guess.h" //Угадайка

namespace Ox_Cow {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	using namespace System::IO; //File


	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBoxOx;
	protected:
	private: System::Windows::Forms::PictureBox^  pictureBoxCow;
	private: System::Windows::Forms::PictureBox^  pictureBoxLeft;
	private: System::Windows::Forms::PictureBox^  pictureBoxRight;
	private: System::Windows::Forms::TextBox^  textBoxRight;

	private: System::Windows::Forms::TextBox^  textBoxLeft;

	private: System::Windows::Forms::ListBox^  listBoxLeft;
	private: System::Windows::Forms::ListBox^  listBoxRight;
	private: System::Windows::Forms::Button^  buttonSetRight;
	private: System::Windows::Forms::Button^  buttonSetLeft;
	private: System::Windows::Forms::Button^  buttonRandomRight;





	private: System::Windows::Forms::Button^  buttonRandomLeft;
	private: System::Windows::Forms::GroupBox^  groupBoxRight;



	private: System::Windows::Forms::CheckBox^  checkBox;
	private: System::Windows::Forms::GroupBox^  groupBoxLeft;


	private: System::Windows::Forms::Label^  label;

	private: System::Windows::Forms::Button^  buttonStart;
	private: System::Windows::Forms::Label^  labelStep;
	private: System::Windows::Forms::Button^  buttonRightEnter;
	private: System::Windows::Forms::Button^  buttonLeftEnter;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->pictureBoxOx = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxCow = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxLeft = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxRight = (gcnew System::Windows::Forms::PictureBox());
			this->textBoxRight = (gcnew System::Windows::Forms::TextBox());
			this->textBoxLeft = (gcnew System::Windows::Forms::TextBox());
			this->listBoxLeft = (gcnew System::Windows::Forms::ListBox());
			this->listBoxRight = (gcnew System::Windows::Forms::ListBox());
			this->buttonSetRight = (gcnew System::Windows::Forms::Button());
			this->buttonSetLeft = (gcnew System::Windows::Forms::Button());
			this->buttonRandomRight = (gcnew System::Windows::Forms::Button());
			this->buttonRandomLeft = (gcnew System::Windows::Forms::Button());
			this->groupBoxRight = (gcnew System::Windows::Forms::GroupBox());
			this->buttonRightEnter = (gcnew System::Windows::Forms::Button());
			this->checkBox = (gcnew System::Windows::Forms::CheckBox());
			this->groupBoxLeft = (gcnew System::Windows::Forms::GroupBox());
			this->buttonLeftEnter = (gcnew System::Windows::Forms::Button());
			this->label = (gcnew System::Windows::Forms::Label());
			this->buttonStart = (gcnew System::Windows::Forms::Button());
			this->labelStep = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxOx))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxCow))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxLeft))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxRight))->BeginInit();
			this->groupBoxRight->SuspendLayout();
			this->groupBoxLeft->SuspendLayout();
			this->SuspendLayout();
			// 
			// pictureBoxOx
			// 
			this->pictureBoxOx->Location = System::Drawing::Point(6, 12);
			this->pictureBoxOx->Name = L"pictureBoxOx";
			this->pictureBoxOx->Size = System::Drawing::Size(252, 146);
			this->pictureBoxOx->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxOx->TabIndex = 0;
			this->pictureBoxOx->TabStop = false;
			this->pictureBoxOx->Click += gcnew System::EventHandler(this, &MyForm::pictureBoxOx_Click);
			this->pictureBoxOx->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::pictureBoxOx_Paint);
			// 
			// pictureBoxCow
			// 
			this->pictureBoxCow->Location = System::Drawing::Point(7, 15);
			this->pictureBoxCow->Name = L"pictureBoxCow";
			this->pictureBoxCow->Size = System::Drawing::Size(253, 146);
			this->pictureBoxCow->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxCow->TabIndex = 0;
			this->pictureBoxCow->TabStop = false;
			this->pictureBoxCow->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::pictureBoxCow_Paint);
			// 
			// pictureBoxLeft
			// 
			this->pictureBoxLeft->Location = System::Drawing::Point(7, 206);
			this->pictureBoxLeft->Name = L"pictureBoxLeft";
			this->pictureBoxLeft->Size = System::Drawing::Size(252, 62);
			this->pictureBoxLeft->TabIndex = 0;
			this->pictureBoxLeft->TabStop = false;
			this->pictureBoxLeft->Click += gcnew System::EventHandler(this, &MyForm::pictureBoxLeft_Click);
			this->pictureBoxLeft->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::pictureBoxLeft_Paint);
			// 
			// pictureBoxRight
			// 
			this->pictureBoxRight->Location = System::Drawing::Point(6, 207);
			this->pictureBoxRight->Name = L"pictureBoxRight";
			this->pictureBoxRight->Size = System::Drawing::Size(253, 62);
			this->pictureBoxRight->TabIndex = 0;
			this->pictureBoxRight->TabStop = false;
			this->pictureBoxRight->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::pictureBoxRight_Paint);
			// 
			// textBoxRight
			// 
			this->textBoxRight->Location = System::Drawing::Point(164, 176);
			this->textBoxRight->Name = L"textBoxRight";
			this->textBoxRight->Size = System::Drawing::Size(57, 20);
			this->textBoxRight->TabIndex = 1;
			this->textBoxRight->Text = L"1234";
			this->textBoxRight->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textBoxRight->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::textBoxRight_KeyDown);
			// 
			// textBoxLeft
			// 
			this->textBoxLeft->Location = System::Drawing::Point(164, 171);
			this->textBoxLeft->Name = L"textBoxLeft";
			this->textBoxLeft->Size = System::Drawing::Size(57, 20);
			this->textBoxLeft->TabIndex = 1;
			this->textBoxLeft->Text = L"1234";
			this->textBoxLeft->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textBoxLeft->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::textBoxLeft_KeyDown);
			// 
			// listBoxLeft
			// 
			this->listBoxLeft->FormattingEnabled = true;
			this->listBoxLeft->Location = System::Drawing::Point(12, 284);
			this->listBoxLeft->Name = L"listBoxLeft";
			this->listBoxLeft->Size = System::Drawing::Size(246, 147);
			this->listBoxLeft->TabIndex = 2;
			// 
			// listBoxRight
			// 
			this->listBoxRight->FormattingEnabled = true;
			this->listBoxRight->Location = System::Drawing::Point(6, 288);
			this->listBoxRight->Name = L"listBoxRight";
			this->listBoxRight->Size = System::Drawing::Size(253, 147);
			this->listBoxRight->TabIndex = 2;
			this->listBoxRight->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listBoxRight_SelectedIndexChanged);
			// 
			// buttonSetRight
			// 
			this->buttonSetRight->Location = System::Drawing::Point(8, 174);
			this->buttonSetRight->Name = L"buttonSetRight";
			this->buttonSetRight->Size = System::Drawing::Size(84, 23);
			this->buttonSetRight->TabIndex = 3;
			this->buttonSetRight->Text = L"Задать число";
			this->buttonSetRight->UseVisualStyleBackColor = true;
			this->buttonSetRight->Click += gcnew System::EventHandler(this, &MyForm::buttonSetRight_Click);
			// 
			// buttonSetLeft
			// 
			this->buttonSetLeft->Location = System::Drawing::Point(6, 169);
			this->buttonSetLeft->Name = L"buttonSetLeft";
			this->buttonSetLeft->Size = System::Drawing::Size(84, 23);
			this->buttonSetLeft->TabIndex = 3;
			this->buttonSetLeft->Text = L"Задать число";
			this->buttonSetLeft->UseVisualStyleBackColor = true;
			this->buttonSetLeft->Click += gcnew System::EventHandler(this, &MyForm::buttonSetLeft_Click);
			// 
			// buttonRandomRight
			// 
			this->buttonRandomRight->Location = System::Drawing::Point(96, 174);
			this->buttonRandomRight->Name = L"buttonRandomRight";
			this->buttonRandomRight->Size = System::Drawing::Size(62, 23);
			this->buttonRandomRight->TabIndex = 3;
			this->buttonRandomRight->Text = L"Случайно";
			this->buttonRandomRight->UseVisualStyleBackColor = true;
			this->buttonRandomRight->Click += gcnew System::EventHandler(this, &MyForm::buttonRandomRight_Click);
			// 
			// buttonRandomLeft
			// 
			this->buttonRandomLeft->Location = System::Drawing::Point(93, 169);
			this->buttonRandomLeft->Name = L"buttonRandomLeft";
			this->buttonRandomLeft->Size = System::Drawing::Size(65, 23);
			this->buttonRandomLeft->TabIndex = 3;
			this->buttonRandomLeft->Text = L"Случайно";
			this->buttonRandomLeft->UseVisualStyleBackColor = true;
			this->buttonRandomLeft->Click += gcnew System::EventHandler(this, &MyForm::buttonRandomLeft_Click);
			// 
			// groupBoxRight
			// 
			this->groupBoxRight->Controls->Add(this->buttonRightEnter);
			this->groupBoxRight->Controls->Add(this->listBoxRight);
			this->groupBoxRight->Controls->Add(this->pictureBoxRight);
			this->groupBoxRight->Controls->Add(this->pictureBoxCow);
			this->groupBoxRight->Controls->Add(this->textBoxRight);
			this->groupBoxRight->Controls->Add(this->buttonRandomRight);
			this->groupBoxRight->Controls->Add(this->buttonSetRight);
			this->groupBoxRight->Location = System::Drawing::Point(377, 0);
			this->groupBoxRight->Name = L"groupBoxRight";
			this->groupBoxRight->Size = System::Drawing::Size(268, 439);
			this->groupBoxRight->TabIndex = 5;
			this->groupBoxRight->TabStop = false;
			this->groupBoxRight->Text = L"Правый";
			// 
			// buttonRightEnter
			// 
			this->buttonRightEnter->Location = System::Drawing::Point(227, 175);
			this->buttonRightEnter->Name = L"buttonRightEnter";
			this->buttonRightEnter->Size = System::Drawing::Size(31, 23);
			this->buttonRightEnter->TabIndex = 5;
			this->buttonRightEnter->Text = L"!";
			this->buttonRightEnter->UseVisualStyleBackColor = true;
			this->buttonRightEnter->Click += gcnew System::EventHandler(this, &MyForm::buttonRightEnter_Click);
			// 
			// checkBox
			// 
			this->checkBox->AutoSize = true;
			this->checkBox->Checked = true;
			this->checkBox->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox->Location = System::Drawing::Point(277, 9);
			this->checkBox->Name = L"checkBox";
			this->checkBox->Size = System::Drawing::Size(92, 17);
			this->checkBox->TabIndex = 6;
			this->checkBox->Text = L"Игра вдвоем";
			this->checkBox->UseVisualStyleBackColor = true;
			this->checkBox->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox_CheckedChanged);
			// 
			// groupBoxLeft
			// 
			this->groupBoxLeft->Controls->Add(this->buttonLeftEnter);
			this->groupBoxLeft->Controls->Add(this->pictureBoxLeft);
			this->groupBoxLeft->Controls->Add(this->pictureBoxOx);
			this->groupBoxLeft->Controls->Add(this->textBoxLeft);
			this->groupBoxLeft->Controls->Add(this->buttonRandomLeft);
			this->groupBoxLeft->Controls->Add(this->listBoxLeft);
			this->groupBoxLeft->Controls->Add(this->buttonSetLeft);
			this->groupBoxLeft->Location = System::Drawing::Point(2, 0);
			this->groupBoxLeft->Name = L"groupBoxLeft";
			this->groupBoxLeft->Size = System::Drawing::Size(269, 433);
			this->groupBoxLeft->TabIndex = 7;
			this->groupBoxLeft->TabStop = false;
			this->groupBoxLeft->Text = L"Левый";
			// 
			// buttonLeftEnter
			// 
			this->buttonLeftEnter->Location = System::Drawing::Point(227, 169);
			this->buttonLeftEnter->Name = L"buttonLeftEnter";
			this->buttonLeftEnter->Size = System::Drawing::Size(31, 23);
			this->buttonLeftEnter->TabIndex = 4;
			this->buttonLeftEnter->Text = L"!";
			this->buttonLeftEnter->UseVisualStyleBackColor = true;
			this->buttonLeftEnter->Click += gcnew System::EventHandler(this, &MyForm::buttonLeftEnter_Click);
			// 
			// label
			// 
			this->label->AutoSize = true;
			this->label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label->Location = System::Drawing::Point(278, 33);
			this->label->Name = L"label";
			this->label->Size = System::Drawing::Size(97, 37);
			this->label->TabIndex = 8;
			this->label->Text = L"<===";
			this->label->Visible = false;
			// 
			// buttonStart
			// 
			this->buttonStart->Location = System::Drawing::Point(281, 78);
			this->buttonStart->Name = L"buttonStart";
			this->buttonStart->Size = System::Drawing::Size(88, 23);
			this->buttonStart->TabIndex = 9;
			this->buttonStart->Text = L"Начали";
			this->buttonStart->UseVisualStyleBackColor = true;
			this->buttonStart->Click += gcnew System::EventHandler(this, &MyForm::buttonStart_Click);
			// 
			// labelStep
			// 
			this->labelStep->AutoSize = true;
			this->labelStep->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelStep->Location = System::Drawing::Point(278, 121);
			this->labelStep->Name = L"labelStep";
			this->labelStep->Size = System::Drawing::Size(74, 20);
			this->labelStep->TabIndex = 8;
			this->labelStep->Text = L"0 ходов";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(642, 433);
			this->Controls->Add(this->buttonStart);
			this->Controls->Add(this->labelStep);
			this->Controls->Add(this->label);
			this->Controls->Add(this->groupBoxLeft);
			this->Controls->Add(this->checkBox);
			this->Controls->Add(this->groupBoxRight);
			this->DoubleBuffered = true;
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(658, 472);
			this->MinimizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"Быки и коровы";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxOx))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxCow))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxLeft))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxRight))->EndInit();
			this->groupBoxRight->ResumeLayout(false);
			this->groupBoxRight->PerformLayout();
			this->groupBoxLeft->ResumeLayout(false);
			this->groupBoxLeft->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		Bitmap^ ox = nullptr;
		Bitmap^ cow = nullptr;

	private: System::Void pictureBoxOx_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e)
	{
		if (ox == nullptr)
		{
			if (File::Exists("ox.png"))
				ox = gcnew Bitmap("ox.png");
			pictureBoxOx->Image = ox;
		}
	}
	private: System::Void pictureBoxCow_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		if (cow == nullptr)
		{
			if (File::Exists("cow.png"))
				cow = gcnew Bitmap("cow.png");
			pictureBoxCow->Image = cow;
		}
	}
	private: System::Void checkBox_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		groupBoxRight->Visible = checkBox->Checked;
		label->Visible = checkBox->Checked;

		if (checkBox->Checked)
			Width = groupBoxRight->Right + 15;
		else
			Width = buttonStart->Right + 15;

	}

			 Guess^ LeftPlayer;
			 Guess^ RightPlayer;

	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
		LeftPlayer = gcnew Guess();
		RightPlayer = gcnew Guess();
	}
	private: System::Void buttonRandomLeft_Click(System::Object^  sender, System::EventArgs^  e)
	{
		if (Play)
		{
			MessageBox::Show("Мы играем!");
			return;
		}
		LeftPlayer->SetRandom();
	}
	private: System::Void buttonRandomRight_Click(System::Object^  sender, System::EventArgs^  e) {
		if (Play)
		{
			MessageBox::Show("Мы играем!");
			return;
		}
		RightPlayer->SetRandom();
	}

	private: System::Void buttonSetLeft_Click(System::Object^  sender, System::EventArgs^  e)
	{
		if (Play)
		{
			MessageBox::Show("Мы играем!");
			return;
		}
		int value = 0;
		int::TryParse(textBoxLeft->Text, value);
		if (!LeftPlayer->Set(value))
			MessageBox::Show("Не годится");
		else
			textBoxLeft->Text = "1234";
	}
	private: System::Void buttonSetRight_Click(System::Object^  sender, System::EventArgs^  e) {
		if (Play)
		{
			MessageBox::Show("Мы играем!");
			return;
		}
		int value = 0;
		int::TryParse(textBoxRight->Text, value);
		if (!RightPlayer->Set(value))
			MessageBox::Show("Не годится");
		else
			textBoxRight->Text = "1234";

	}

			 void CopyHistory(Guess^ player, ListBox^ listBox)
			 {
				 listBox->Items->Clear();
				 for each (auto s in player->History)
					 listBox->Items->Add(s);
				 listBox->SelectedIndex = listBox->Items->Count - 1;
			 }

	private: System::Void textBoxLeft_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e)
	{
		if (!Play) return;
		if (e==nullptr || e->KeyCode == Keys::Return)
		{
			if (e) e->Handled = true;
			int value;
			int::TryParse(textBoxLeft->Text, value);
			if (!LeftPlayer->TrySet(value))
			{
				MessageBox::Show("Не годится");
				return;
			}
			CopyHistory(LeftPlayer, listBoxLeft);
			pictureBoxLeft->Refresh(); //Обновить картинку

			if (LeftPlayer->Ox == 4)
			{
				MessageBox::Show("Выиграл ЛЕВЫЙ");
				buttonStart_Click(nullptr, nullptr);
				return;
			}

			if (checkBox->Checked) //Игра вдвоем - передать ход
			{
				label->Text = "===>";
				groupBoxLeft->Enabled = false;
				groupBoxRight->Enabled = true;
				textBoxRight->Focus();
			}

		}
	}
	private: System::Void textBoxRight_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
		if (!Play) return;
		if (e == nullptr || e->KeyCode == Keys::Return)
		{
			if (e) e->Handled = true;
			int value;
			int::TryParse(textBoxRight->Text, value);
			if (!RightPlayer->TrySet(value))
			{
				MessageBox::Show("Не годится");
				return;
			}
			CopyHistory(RightPlayer, listBoxRight);
			pictureBoxRight->Refresh(); //Обновить картинку
			if (RightPlayer->Ox == 4)
			{
				MessageBox::Show("Выиграл ПРАВЫЙ");
				buttonStart_Click(nullptr, nullptr);
				return;
			}

			if (checkBox->Checked) //Игра вдвоем - передать ход
			{
				label->Text = "<===";
				groupBoxLeft->Enabled = true;
				groupBoxRight->Enabled = false;
				textBoxLeft->Focus();
			}

		}
	}
			 bool Play = false;

	private: System::Void buttonStart_Click(System::Object^  sender, System::EventArgs^  e) {

		listBoxLeft->Items->Clear();
		listBoxRight->Items->Clear();
		if (!Play) //Из "вне игры"
		{
			Play = true;
			label->Text = "<===";
			groupBoxLeft->Enabled = true;
			groupBoxRight->Enabled = false;
			textBoxLeft->Focus();
			label->Visible = true;
			buttonStart->Text = "Надоело";
		}
		else
		{
			groupBoxLeft->Enabled = true;
			groupBoxRight->Enabled = checkBox->Checked;
			LeftPlayer->SetRandom();
			RightPlayer->SetRandom();
			label->Visible = false;
			buttonStart->Text = "Начали";
			Play = false;
		}
		Refresh(); //Всех
	}
			 //Нарисовать
	private: System::Void pictureBoxLeft_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e)
	{
		e->Graphics->Clear(Color::White);
		if (!Play) return;
		int left = 0;
		int w = pictureBoxLeft->Width / 4;
		int h = pictureBoxLeft->Height;
		for (int k = 0; k < LeftPlayer->Ox; k++)
		{
			e->Graphics->DrawImage(ox, left, 0, w, h);
			left += w;
		}
		for (int k = 0; k < LeftPlayer->Cow; k++)
		{
			e->Graphics->DrawImage(cow, left, 0, w, h);
			left += w;
		}
	}
	private: System::Void pictureBoxRight_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e)
	{
		e->Graphics->Clear(Color::White);
		if (!Play) return;
		int left = 0;
		int w = pictureBoxLeft->Width / 4;
		int h = pictureBoxLeft->Height;
		for (int k = 0; k < RightPlayer->Ox; k++)
		{
			e->Graphics->DrawImage(ox, left, 0, w, h);
			left += w;
		}
		for (int k = 0; k < RightPlayer->Cow; k++)
		{
			e->Graphics->DrawImage(cow, left, 0, w, h);
			left += w;
		}
	}
	private: System::Void buttonLeftEnter_Click(System::Object^  sender, System::EventArgs^  e)
	{
		textBoxLeft_KeyDown(nullptr, nullptr);
	}
	private: System::Void buttonRightEnter_Click(System::Object^  sender, System::EventArgs^  e) {
		textBoxRight_KeyDown(nullptr, nullptr);
	}
	private: System::Void listBoxRight_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void pictureBoxOx_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBoxLeft_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
