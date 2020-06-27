#pragma once

#include "Guess.h" //Угадайка

namespace Bullsandcowsproject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	using namespace System::IO; //File


	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
		}

		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	// Fields of players
	private: System::Windows::Forms::GroupBox^ groupBoxLeft;
	private: System::Windows::Forms::GroupBox^ groupBoxRight;

	// Pictures 	   
	private: System::Windows::Forms::PictureBox^ pictureBoxBull;
	private: System::Windows::Forms::PictureBox^ pictureBoxCow;

	// Buttons of setting number
	private: System::Windows::Forms::Button^ buttonSetLeft;
	private: System::Windows::Forms::Button^ buttonSetRight;

	// Buttons of randomize number
	private: System::Windows::Forms::Button^ buttonRandomLeft;
	private: System::Windows::Forms::Button^ buttonRandomRight;

	// TextBoxes to enter numbers
	private: System::Windows::Forms::TextBox^ textBoxLeft;
	private: System::Windows::Forms::TextBox^ textBoxRight;

	// Buttons to accept tries
	private: System::Windows::Forms::Button^ buttonLeftEnter;
	private: System::Windows::Forms::Button^ buttonRightEnter;

	// History of tries
	private: System::Windows::Forms::ListBox^ listBoxLeft;
	private: System::Windows::Forms::ListBox^ listBoxRight;
		   
	// Checbox to switch gamemode
	private: System::Windows::Forms::CheckBox^ checkBox;

	// Button START
	private: System::Windows::Forms::Button^ buttonStart;

	// Pictures which visualize tries
	private: System::Windows::Forms::PictureBox^  pictureBoxLeft;
	private: System::Windows::Forms::PictureBox^ pictureBoxRight;

	// Arrow that shows which try now
	private: System::Windows::Forms::Label^ label;

	private: System::ComponentModel::Container^ components;


		void InitializeComponent(void)
		{
			// Pictures 
			this->pictureBoxBull = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxCow = (gcnew System::Windows::Forms::PictureBox());

			// Fields of players
			this->groupBoxLeft = (gcnew System::Windows::Forms::GroupBox());
			this->groupBoxRight = (gcnew System::Windows::Forms::GroupBox());

			// Buttons of setting number
			this->buttonSetLeft = (gcnew System::Windows::Forms::Button());
			this->buttonSetRight = (gcnew System::Windows::Forms::Button());

			// Buttons of randomize number
			this->buttonRandomLeft = (gcnew System::Windows::Forms::Button());
			this->buttonRandomRight = (gcnew System::Windows::Forms::Button());

			// TextBoxes to enter numbers
			this->textBoxLeft = (gcnew System::Windows::Forms::TextBox());
			this->textBoxRight = (gcnew System::Windows::Forms::TextBox());

			// Buttons to accept tries
			this->buttonLeftEnter = (gcnew System::Windows::Forms::Button());
			this->buttonRightEnter = (gcnew System::Windows::Forms::Button());

			// History of tries
			this->listBoxLeft = (gcnew System::Windows::Forms::ListBox());
			this->listBoxRight = (gcnew System::Windows::Forms::ListBox());

			// Checkbox to switch gamemode
			this->checkBox = (gcnew System::Windows::Forms::CheckBox());

			// Button START
			this->buttonStart = (gcnew System::Windows::Forms::Button());

			// Pictures which visualize tries
			this->pictureBoxLeft = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxRight = (gcnew System::Windows::Forms::PictureBox());

			// Arrow that shows which try now
			this->label = (gcnew System::Windows::Forms::Label());

			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxBull))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxCow))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxLeft))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxRight))->BeginInit();
			this->groupBoxRight->SuspendLayout();
			this->groupBoxLeft->SuspendLayout();
			this->SuspendLayout();

			// groupBoxLeft
			this->groupBoxLeft->Controls->Add(this->buttonLeftEnter);
			this->groupBoxLeft->Controls->Add(this->textBoxLeft);
			this->groupBoxLeft->Controls->Add(this->pictureBoxLeft);
			this->groupBoxLeft->Controls->Add(this->pictureBoxBull);
			this->groupBoxLeft->Controls->Add(this->buttonSetLeft);
			this->groupBoxLeft->Controls->Add(this->buttonRandomLeft);
			this->groupBoxLeft->Controls->Add(this->listBoxLeft);
			this->groupBoxLeft->Location = System::Drawing::Point(2, 0);
			this->groupBoxLeft->Name = L"groupBoxLeft";
			this->groupBoxLeft->Size = System::Drawing::Size(269, 433);
			this->groupBoxLeft->TabIndex = 3;
			this->groupBoxLeft->TabStop = false;
			this->groupBoxLeft->Text = L"Левый";


			// groupBoxRight
			this->groupBoxRight->Controls->Add(this->buttonRightEnter);
			this->groupBoxRight->Controls->Add(this->pictureBoxCow);
			this->groupBoxRight->Controls->Add(this->pictureBoxRight);
			this->groupBoxRight->Controls->Add(this->buttonSetRight);
			this->groupBoxRight->Controls->Add(this->buttonRandomRight);
			this->groupBoxRight->Controls->Add(this->textBoxRight);
			this->groupBoxRight->Controls->Add(this->listBoxRight);
			this->groupBoxRight->Location = System::Drawing::Point(376, 0);
			this->groupBoxRight->Name = L"groupBoxRight";
			this->groupBoxRight->Size = System::Drawing::Size(269, 433);
			this->groupBoxRight->TabIndex = 5;
			this->groupBoxRight->TabStop = false;
			this->groupBoxRight->Text = L"Правый";
			

			// pictureBoxBull
			this->pictureBoxBull->Location = System::Drawing::Point(6, 12);
			this->pictureBoxBull->Name = L"pictureBoxOx";
			this->pictureBoxBull->Size = System::Drawing::Size(252, 146);
			this->pictureBoxBull->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxBull->TabIndex = 0;
			this->pictureBoxBull->TabStop = false;
			this->pictureBoxBull->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::pictureBoxBull_Paint);


			// pictureBoxCow
			this->pictureBoxCow->Location = System::Drawing::Point(7, 15);
			this->pictureBoxCow->Name = L"pictureBoxCow";
			this->pictureBoxCow->Size = System::Drawing::Size(253, 146);
			this->pictureBoxCow->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxCow->TabIndex = 0;
			this->pictureBoxCow->TabStop = false;
			this->pictureBoxCow->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::pictureBoxCow_Paint);
			

			// buttonSetLeft
			this->buttonSetLeft->Location = System::Drawing::Point(6, 169);
			this->buttonSetLeft->Name = L"buttonSetLeft";
			this->buttonSetLeft->Size = System::Drawing::Size(84, 23);
			this->buttonSetLeft->TabIndex = 6;
			this->buttonSetLeft->Text = L"Задать число";
			this->buttonSetLeft->UseVisualStyleBackColor = true;
			this->buttonSetLeft->Click += gcnew System::EventHandler(this, &MyForm::buttonSetLeft_Click);


			// buttonSetRight
			this->buttonSetRight->Location = System::Drawing::Point(6, 169);
			this->buttonSetRight->Name = L"buttonSetRight";
			this->buttonSetRight->Size = System::Drawing::Size(84, 23);
			this->buttonSetRight->TabIndex = 6;
			this->buttonSetRight->Text = L"Задать число";
			this->buttonSetRight->UseVisualStyleBackColor = true;
			this->buttonSetRight->Click += gcnew System::EventHandler(this, &MyForm::buttonSetRight_Click);


			// buttonRandomLeft
			this->buttonRandomLeft->Location = System::Drawing::Point(93, 169);
			this->buttonRandomLeft->Name = L"buttonRandomLeft";
			this->buttonRandomLeft->Size = System::Drawing::Size(65, 23);
			this->buttonRandomLeft->TabIndex = 4;
			this->buttonRandomLeft->Text = L"Случайно";
			this->buttonRandomLeft->UseVisualStyleBackColor = true;
			this->buttonRandomLeft->Click += gcnew System::EventHandler(this, &MyForm::buttonRandomLeft_Click);


			// buttonRandomRight
			this->buttonRandomRight->Location = System::Drawing::Point(93, 169);
			this->buttonRandomRight->Name = L"buttonRandomRight";
			this->buttonRandomRight->Size = System::Drawing::Size(62, 23);
			this->buttonRandomRight->TabIndex = 5;
			this->buttonRandomRight->Text = L"Случайно";
			this->buttonRandomRight->UseVisualStyleBackColor = true;
			this->buttonRandomRight->Click += gcnew System::EventHandler(this, &MyForm::buttonRandomRight_Click);


			// textBoxLeft
			this->textBoxLeft->Location = System::Drawing::Point(164, 171);
			this->textBoxLeft->Name = L"textBoxLeft";
			this->textBoxLeft->Size = System::Drawing::Size(57, 20);
			this->textBoxLeft->TabIndex = 1;
			this->textBoxLeft->Text = L"1234";
			this->textBoxLeft->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textBoxLeft->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::textBoxLeft_KeyDown);


			// textBoxRight
			this->textBoxRight->Location = System::Drawing::Point(164, 171);
			this->textBoxRight->Name = L"textBoxRight";
			this->textBoxRight->Size = System::Drawing::Size(57, 20);
			this->textBoxRight->TabIndex = 1;
			this->textBoxRight->Text = L"1234";
			this->textBoxRight->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textBoxRight->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::textBoxRight_KeyDown);


			// buttonLeftEnter
			this->buttonLeftEnter->Location = System::Drawing::Point(227, 169);
			this->buttonLeftEnter->Name = L"buttonLeftEnter";
			this->buttonLeftEnter->Size = System::Drawing::Size(31, 23);
			this->buttonLeftEnter->TabIndex = 4;
			this->buttonLeftEnter->Text = L"!";
			this->buttonLeftEnter->UseVisualStyleBackColor = true;
			this->buttonLeftEnter->Click += gcnew System::EventHandler(this, &MyForm::buttonLeftEnter_Click);


			// buttonRightEnter
			this->buttonRightEnter->Location = System::Drawing::Point(227, 169);
			this->buttonRightEnter->Name = L"buttonRightEnter";
			this->buttonRightEnter->Size = System::Drawing::Size(31, 23);
			this->buttonRightEnter->TabIndex = 5;
			this->buttonRightEnter->Text = L"!";
			this->buttonRightEnter->UseVisualStyleBackColor = true;
			this->buttonRightEnter->Click += gcnew System::EventHandler(this, &MyForm::buttonRightEnter_Click);


			// listBoxLeft
			this->listBoxLeft->FormattingEnabled = true;
			this->listBoxLeft->Location = System::Drawing::Point(12, 284);
			this->listBoxLeft->Name = L"listBoxLeft";
			this->listBoxLeft->Size = System::Drawing::Size(246, 147);
			this->listBoxLeft->TabIndex = 2;


			// listBoxRight
			this->listBoxRight->FormattingEnabled = true;
			this->listBoxRight->Location = System::Drawing::Point(12, 284);
			this->listBoxRight->Name = L"listBoxRight";
			this->listBoxRight->Size = System::Drawing::Size(246, 147);
			this->listBoxRight->TabIndex = 2;


			// checkBox
			this->checkBox->AutoSize = true;
			this->checkBox->Checked = true;
			this->checkBox->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox->Location = System::Drawing::Point(277, 9);
			this->checkBox->Name = L"checkBox";
			this->checkBox->Size = System::Drawing::Size(92, 17);
			this->checkBox->TabIndex = 4;
			this->checkBox->Text = L"Игра вдвоем";
			this->checkBox->UseVisualStyleBackColor = true;
			this->checkBox->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox_CheckedChanged);


			// buttonStart
			this->buttonStart->Location = System::Drawing::Point(281, 78);
			this->buttonStart->Name = L"buttonStart";
			this->buttonStart->Size = System::Drawing::Size(88, 23);
			this->buttonStart->TabIndex = 0;
			this->buttonStart->Text = L"Начали";
			this->buttonStart->UseVisualStyleBackColor = true;
			this->buttonStart->Click += gcnew System::EventHandler(this, &MyForm::buttonStart_Click);


			// label
			this->label->AutoSize = true;
			this->label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label->Location = System::Drawing::Point(278, 33);
			this->label->Name = L"label";
			this->label->Size = System::Drawing::Size(97, 37);
			this->label->TabIndex = 8;
			this->label->Text = L"<===";
			this->label->Visible = false;


			// pictureBoxLeft
			this->pictureBoxLeft->Location = System::Drawing::Point(7, 206);
			this->pictureBoxLeft->Name = L"pictureBoxLeft";
			this->pictureBoxLeft->Size = System::Drawing::Size(252, 62);
			this->pictureBoxLeft->TabIndex = 0;
			this->pictureBoxLeft->TabStop = false;
			this->pictureBoxLeft->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::pictureBoxLeft_Paint);


			// pictureBoxRight
			this->pictureBoxRight->Location = System::Drawing::Point(6, 207);
			this->pictureBoxRight->Name = L"pictureBoxRight";
			this->pictureBoxRight->Size = System::Drawing::Size(253, 62);
			this->pictureBoxRight->TabIndex = 0;
			this->pictureBoxRight->TabStop = false;
			this->pictureBoxRight->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::pictureBoxRight_Paint);

			
			// MyForm
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White; // color 
			this->ClientSize = System::Drawing::Size(642, 433); // size 
			this->Controls->Add(this->groupBoxLeft); // field of left player
			this->Controls->Add(this->groupBoxRight); // fielf of right player
			this->Controls->Add(this->checkBox); // checkbox of switching gamemode
			this->Controls->Add(this->buttonStart); // button START
			this->Controls->Add(this->label); // Arrow
			this->DoubleBuffered = true;
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(658, 472);
			this->MinimizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"Быки и коровы";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxLeft))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxRight))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxBull))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxCow))->EndInit();
			this->ResumeLayout(false);
			this->groupBoxRight->ResumeLayout(false);
			this->groupBoxRight->PerformLayout();
			this->groupBoxLeft->ResumeLayout(false);
			this->groupBoxLeft->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();
		}
#pragma endregion

		// Pixels for pictures
		Bitmap^ bull = nullptr;
		Bitmap^ cow = nullptr;

		// Bull Picture
		private: System::Void pictureBoxBull_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e)
		{
			if (bull == nullptr)
			{
				if (File::Exists("bull.png"))
					bull = gcnew Bitmap("bull.png");
				pictureBoxBull->Image = bull;
			}
		}

		// Cow Picture
		private: System::Void pictureBoxCow_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
			if (cow == nullptr)
			{
				if (File::Exists("cow.png"))
					cow = gcnew Bitmap("cow.png");
				pictureBoxCow->Image = cow;
			}
		}

		// CheckBox Click
		private: System::Void checkBox_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
			groupBoxRight->Visible = checkBox->Checked;
			groupBoxRight->Enabled = checkBox->Checked;
			label->Visible = checkBox->Checked;

			if (checkBox->Checked)
				Width = groupBoxRight->Right + 15;
			else
				Width = buttonStart->Right + 15;

		}

		// Players
		Guess^ LeftPlayer;
		Guess^ RightPlayer;

		// Memory for players
		private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
			LeftPlayer = gcnew Guess();
			RightPlayer = gcnew Guess();
		}

		// Copied history
		void CopyHistory(Guess^ player, ListBox^ listBox)
		{
			 listBox->Items->Clear();
			 for each (auto s in player->History)
			   listBox->Items->Add(s);
			   listBox->SelectedIndex = listBox->Items->Count - 1;
		}


		// Entering try in textbox field
		private: System::Void textBoxLeft_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e)
		{
			if (!Play) return;
			if (e == nullptr || e->KeyCode == Keys::Return)
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

				if (LeftPlayer->Bull == 4)
				{
					MessageBox::Show("Выиграл ЛЕВЫЙ");
					Play = false;
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


		// Entering try in textbox field
		private: System::Void textBoxRight_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
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
				pictureBoxRight->Refresh();
				if (RightPlayer->Bull == 4)
				{
					MessageBox::Show("Выиграл ПРАВЫЙ");
					Play = false;
				}

				if (checkBox->Checked) //Pass the try
				{
					label->Text = "<===";
					groupBoxLeft->Enabled = true;
					groupBoxRight->Enabled = false;
					textBoxLeft->Focus();
				}

			}
		}

		bool Play = false;

		private: System::Void buttonStart_Click(System::Object^ sender, System::EventArgs^ e) {
			listBoxLeft->Items->Clear();
			listBoxRight->Items->Clear();
			if (!Play) //"From out of the game"
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
				LeftPlayer->SetRandom();
				RightPlayer->SetRandom();
				label->Visible = false;
				buttonStart->Text = "Начали";
				Play = false;
			}
			Refresh();
		}


		// Click on left button "RANDOM"
		private: System::Void buttonRandomLeft_Click(System::Object^ sender, System::EventArgs^ e)
		{
			if (Play)
			{
				MessageBox::Show("Мы играем!");
				return;
			}
			LeftPlayer->SetRandom();
		}


		// Click on right button "RANDOM"
		private: System::Void buttonRandomRight_Click(System::Object^ sender, System::EventArgs^ e) {
			if (Play)
			{
				MessageBox::Show("Мы играем!");
				return;
			}
			RightPlayer->SetRandom();
		}


		// Click on left button of setting number
		private: System::Void buttonSetLeft_Click(System::Object^ sender, System::EventArgs^ e)
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


		// Click on right button of setting number
		private: System::Void buttonSetRight_Click(System::Object^ sender, System::EventArgs^ e) {
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

		// Drawer

		// Pictures which shows how many bulls and cows player have in this try
		private: System::Void pictureBoxLeft_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e)
		{
			e->Graphics->Clear(Color::White);
			if (!Play) return;
			int left = 0;
			int w = pictureBoxLeft->Width / 4;
			int h = pictureBoxLeft->Height;
			for (int k = 0; k < LeftPlayer->Bull; k++)
			{
				e->Graphics->DrawImage(bull, left, 0, w, h);
				left += w;
			}
			for (int k = 0; k < LeftPlayer->Cow; k++)
			{
				e->Graphics->DrawImage(cow, left, 0, w, h);
				left += w;
			}
		}

		// Pictures which shows how many bulls and cows player have in this try
		private: System::Void pictureBoxRight_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e)
		{
			e->Graphics->Clear(Color::White);
			if (!Play) return;
			int left = 0;
			int w = pictureBoxLeft->Width / 4;
			int h = pictureBoxLeft->Height;
			for (int k = 0; k < RightPlayer->Bull; k++)
			{
				e->Graphics->DrawImage(bull, left, 0, w, h);
				left += w;
			}
			for (int k = 0; k < RightPlayer->Cow; k++)
			{
				e->Graphics->DrawImage(cow, left, 0, w, h);
				left += w;
			}
		}

		// Click on left button of accepting tries
		private: System::Void buttonLeftEnter_Click(System::Object^ sender, System::EventArgs^ e)
		{
			textBoxLeft_KeyDown(nullptr, nullptr);
		}
		// Click on right button of accepting tries
		private: System::Void buttonRightEnter_Click(System::Object^ sender, System::EventArgs^ e) {
			textBoxRight_KeyDown(nullptr, nullptr);
		}
	};
}