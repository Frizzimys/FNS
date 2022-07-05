#pragma once

namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Сетевыедиски
	/// </summary>
	public ref class Сетевыедиски : public System::Windows::Forms::Form
	{
	public:
		Сетевыедиски(void)
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
		~Сетевыедиски()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button15;
	protected:
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;

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
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(158, 371);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(75, 23);
			this->button15->TabIndex = 29;
			this->button15->Text = L"Выход";
			this->button15->UseVisualStyleBackColor = true;
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(25, 371);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(75, 23);
			this->button14->TabIndex = 28;
			this->button14->Text = L"Назад";
			this->button14->UseVisualStyleBackColor = true;
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(78, 301);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(103, 41);
			this->button13->TabIndex = 27;
			this->button13->Text = L"n5800";
			this->button13->UseVisualStyleBackColor = true;
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(141, 245);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(103, 41);
			this->button12->TabIndex = 26;
			this->button12->Text = L"5835";
			this->button12->UseVisualStyleBackColor = true;
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(141, 198);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(103, 41);
			this->button11->TabIndex = 25;
			this->button11->Text = L"5837";
			this->button11->UseVisualStyleBackColor = true;
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(141, 151);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(103, 41);
			this->button10->TabIndex = 24;
			this->button10->Text = L"5836";
			this->button10->UseVisualStyleBackColor = true;
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(141, 104);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(103, 41);
			this->button9->TabIndex = 23;
			this->button9->Text = L"5835";
			this->button9->UseVisualStyleBackColor = true;
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(141, 57);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(103, 41);
			this->button8->TabIndex = 22;
			this->button8->Text = L"5834";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(141, 10);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(103, 41);
			this->button7->TabIndex = 21;
			this->button7->Text = L"5827";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(12, 244);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(103, 41);
			this->button6->TabIndex = 20;
			this->button6->Text = L"5826";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(12, 198);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(103, 41);
			this->button5->TabIndex = 19;
			this->button5->Text = L"5809";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(12, 151);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(103, 41);
			this->button4->TabIndex = 18;
			this->button4->Text = L"5805";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(12, 104);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(103, 41);
			this->button3->TabIndex = 17;
			this->button3->Text = L"5803";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 57);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(103, 41);
			this->button2->TabIndex = 16;
			this->button2->Text = L"5802";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 10);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(103, 41);
			this->button1->TabIndex = 15;
			this->button1->Text = L"u5800";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// Сетевыедиски
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(259, 412);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"Сетевыедиски";
			this->Text = L"Сетевые диски";
			this->Load += gcnew System::EventHandler(this, &Сетевыедиски::Сетевыедиски_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Сетевыедиски_Load(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
