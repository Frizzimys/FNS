#pragma once
#include "Glavnaya.h" //Подключаем вторую форму
namespace Project2 {

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
			
			//
			//TODO: добавьте код конструктора
			//
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
	private: System::Windows::Forms::Button^ Exit1;
	protected:

	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;



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
			this->Exit1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// Exit1
			// 
			this->Exit1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->Exit1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->Exit1->FlatAppearance->BorderColor = System::Drawing::Color::WhiteSmoke;
			this->Exit1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Exit1->Location = System::Drawing::Point(81, 183);
			this->Exit1->Name = L"Exit1";
			this->Exit1->Size = System::Drawing::Size(112, 30);
			this->Exit1->TabIndex = 0;
			this->Exit1->Text = L"Войти";
			this->Exit1->UseVisualStyleBackColor = false;
			this->Exit1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(56, 98);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(168, 20);
			this->textBox1->TabIndex = 1;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(56, 141);
			this->textBox2->Name = L"textBox2";
			this->textBox2->PasswordChar = '*';
			this->textBox2->Size = System::Drawing::Size(168, 20);
			this->textBox2->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(77, 36);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(123, 22);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Авторизация";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(53, 80);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(42, 15);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Логин";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(53, 123);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(49, 15);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Пароль";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Cursor = System::Windows::Forms::Cursors::Default;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(262, 2);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(16, 15);
			this->label4->TabIndex = 6;
			this->label4->Text = L"X";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoValidate = System::Windows::Forms::AutoValidate::Disable;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(280, 257);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->Exit1);
			this->Cursor = System::Windows::Forms::Cursors::Default;
			this->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->HelpButton = true;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Авторизация";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		bool Login_Password(String^ Login,String^ Password) {
			if (Login == "1" && Password == "1")
			{
				return true;
			}
			else
			{
				MessageBox::Show(this, "Вы ввели неправильный пароль повторите попытку!","Сообщение", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				return false;
			}	
		
		}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ log=textBox1->Text;			//Логин
		String^ pas = textBox2->Text;		//Пароль

		if (Login_Password(log,pas))
		{
			Glavnaya^ Glav = gcnew Glavnaya();//Создаём экземпляр формы
			Glav->Show();
			MyForm::Hide();
		}
	}

	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) { Application::Exit(); }

};
