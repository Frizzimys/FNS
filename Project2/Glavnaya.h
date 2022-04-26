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
	private: System::Windows::Forms::Button^ Registration;
	private: System::Windows::Forms::Button^ Clenear;
	private: System::Windows::Forms::Button^ Fix;
	private: System::Windows::Forms::Button^ Servers;
	private: System::Windows::Forms::Button^ Plug;
	protected:

	protected:




	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ VII_System;
	private: System::Windows::Forms::Button^ Exit2;
	private: System::Windows::Forms::Label^ label2;




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
			this->Registration = (gcnew System::Windows::Forms::Button());
			this->Clenear = (gcnew System::Windows::Forms::Button());
			this->Fix = (gcnew System::Windows::Forms::Button());
			this->Servers = (gcnew System::Windows::Forms::Button());
			this->Plug = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->VII_System = (gcnew System::Windows::Forms::Button());
			this->Exit2 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// Registration
			// 
			this->Registration->Font = (gcnew System::Drawing::Font(L"Times New Roman", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Registration->Location = System::Drawing::Point(12, 53);
			this->Registration->Name = L"Registration";
			this->Registration->Size = System::Drawing::Size(128, 44);
			this->Registration->TabIndex = 0;
			this->Registration->Text = L"Ввод в домен";
			this->Registration->UseVisualStyleBackColor = true;
			this->Registration->Click += gcnew System::EventHandler(this, &Glavnaya::Registration_Click);
			// 
			// Clenear
			// 
			this->Clenear->Font = (gcnew System::Drawing::Font(L"Times New Roman", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Clenear->Location = System::Drawing::Point(165, 54);
			this->Clenear->Name = L"Clenear";
			this->Clenear->Size = System::Drawing::Size(128, 43);
			this->Clenear->TabIndex = 1;
			this->Clenear->Text = L"Очистка PC";
			this->Clenear->UseVisualStyleBackColor = true;
			this->Clenear->Click += gcnew System::EventHandler(this, &Glavnaya::Cleaner_Click);
			// 
			// Fix
			// 
			this->Fix->Font = (gcnew System::Drawing::Font(L"Times New Roman", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Fix->Location = System::Drawing::Point(12, 103);
			this->Fix->Name = L"Fix";
			this->Fix->Size = System::Drawing::Size(128, 44);
			this->Fix->TabIndex = 2;
			this->Fix->Text = L"Установка фиксов";
			this->Fix->UseVisualStyleBackColor = true;
			// 
			// Servers
			// 
			this->Servers->Font = (gcnew System::Drawing::Font(L"Times New Roman", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Servers->Location = System::Drawing::Point(165, 103);
			this->Servers->Name = L"Servers";
			this->Servers->Size = System::Drawing::Size(128, 44);
			this->Servers->TabIndex = 3;
			this->Servers->Text = L"Проверка всех серверов";
			this->Servers->UseVisualStyleBackColor = true;
			// 
			// Plug
			// 
			this->Plug->Font = (gcnew System::Drawing::Font(L"Times New Roman", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Plug->Location = System::Drawing::Point(12, 153);
			this->Plug->Name = L"Plug";
			this->Plug->Size = System::Drawing::Size(128, 44);
			this->Plug->TabIndex = 4;
			this->Plug->Text = L"Подключить сетевые диски";
			this->Plug->UseVisualStyleBackColor = true;
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
			// VII_System
			// 
			this->VII_System->Font = (gcnew System::Drawing::Font(L"Times New Roman", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->VII_System->Location = System::Drawing::Point(165, 153);
			this->VII_System->Name = L"VII_System";
			this->VII_System->Size = System::Drawing::Size(128, 44);
			this->VII_System->TabIndex = 6;
			this->VII_System->Text = L"О программе";
			this->VII_System->UseVisualStyleBackColor = true;
			this->VII_System->Click += gcnew System::EventHandler(this, &Glavnaya::VII_System_Click);
			// 
			// Exit2
			// 
			this->Exit2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Exit2->Location = System::Drawing::Point(97, 203);
			this->Exit2->Name = L"Exit2";
			this->Exit2->Size = System::Drawing::Size(112, 40);
			this->Exit2->TabIndex = 7;
			this->Exit2->Text = L"Выход";
			this->Exit2->UseVisualStyleBackColor = true;
			this->Exit2->Click += gcnew System::EventHandler(this, &Glavnaya::Exit2_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(287, 3);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(16, 15);
			this->label2->TabIndex = 8;
			this->label2->Text = L"X";
			this->label2->Click += gcnew System::EventHandler(this, &Glavnaya::Label_Exit_Click);
			// 
			// Glavnaya
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(305, 255);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->Exit2);
			this->Controls->Add(this->VII_System);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Plug);
			this->Controls->Add(this->Servers);
			this->Controls->Add(this->Fix);
			this->Controls->Add(this->Clenear);
			this->Controls->Add(this->Registration);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Glavnaya";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Меню неограниченных возможностей";
			this->ResumeLayout(false);
			this->PerformLayout();
		}
#pragma endregion
//Кнопки с функциями действия
private: System::Void Registration_Click(System::Object^ sender, System::EventArgs^ e)
	{


	}	
private: System::Void Cleaner_Click(System::Object^ sender, System::EventArgs^ e) 
	{


	}

private: System::Void VII_System_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show(this, "Разработал: Веретенников Илья Игоревич\nДуховный наставник: Светалкин Максим", "О программе", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);

}
private: System::Void Exit2_Click(System::Object^ sender, System::EventArgs^ e) { Application::Exit(); }
private: System::Void Label_Exit_Click(System::Object^ sender, System::EventArgs^ e) { Application::Exit();}
};
}
