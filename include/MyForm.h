#pragma once

#include "Guess.h" //Угадайка

namespace BullsandcowsVisualStudio {

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

	protected:
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

	private: System::ComponentModel::Container^ components;

#pragma region 

		   void InitializeComponent(void) {
			   this->groupBoxLeft = (gcnew System::Windows::Forms::GroupBox());
			   this->groupBoxRight = (gcnew System::Windows::Forms::GroupBox());
			   this->SuspendLayout();

			   // 
			   // groupBoxLeft
			   // 
			   this->groupBoxLeft->Location = System::Drawing::Point(2, 0);
			   this->groupBoxLeft->Name = L"groupBoxLeft";
			   this->groupBoxLeft->Size = System::Drawing::Size(269, 433);
			   this->groupBoxLeft->TabIndex = 3;
			   this->groupBoxLeft->TabStop = false;
			   this->groupBoxLeft->Text = L"Левый";

			   // 
			   // groupBoxRight
			   // 
			   this->groupBoxRight->Location = System::Drawing::Point(376, 0);
			   this->groupBoxRight->Name = L"groupBoxRight";
			   this->groupBoxRight->Size = System::Drawing::Size(264, 433);
			   this->groupBoxRight->TabIndex = 5;
			   this->groupBoxRight->TabStop = false;
			   this->groupBoxRight->Text = L"Правый";

			   // 
			   // MyForm
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->BackColor = System::Drawing::Color::White;
			   this->ClientSize = System::Drawing::Size(642, 433);
			   this->Controls->Add(this->groupBoxLeft);
			   this->Controls->Add(this->groupBoxRight);
			   this->DoubleBuffered = true;
			   this->MaximizeBox = false;
			   this->MaximumSize = System::Drawing::Size(658, 472);
			   this->MinimizeBox = false;
			   this->Name = L"MyForm";
			   this->Text = L"Быки и коровы";
			   this->ResumeLayout(false);

		   }

#pragma endregion

	};
}

