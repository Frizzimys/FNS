#pragma once

namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Glavnaya
	/// </summary>
	public ref class Glavnaya : public System::Windows::Forms::Form
	{
	public:
		Glavnaya(void)
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
		~Glavnaya()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(12, 53);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(128, 44);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Ввод в домен РС";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Glavnaya::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(165, 54);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(128, 43);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Очистка PC";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Glavnaya::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(12, 103);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(128, 44);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Установка фиксов";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(165, 103);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(128, 44);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Проверка всех серверов";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->Location = System::Drawing::Point(12, 153);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(128, 44);
			this->button5->TabIndex = 4;
			this->button5->Text = L"Подключить сетевые диски";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(71, 18);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(156, 22);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Сервисное меню";
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->Location = System::Drawing::Point(165, 153);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(128, 44);
			this->button6->TabIndex = 6;
			this->button6->Text = L"О программе";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Glavnaya::button6_Click);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->Location = System::Drawing::Point(97, 203);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(112, 40);
			this->button7->TabIndex = 7;
			this->button7->Text = L"Выход";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Glavnaya::button7_Click);
			// 
			// Glavnaya
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(305, 255);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"Glavnaya";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Меню неограниченных возможностей";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {




	}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show(this, "Разработал: Веретенников Илья Игоревич\nДуховный наставник: Светалкин Максим", "О программе", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);

}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) { Application::Exit(); }
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
{
	

}
};
}
