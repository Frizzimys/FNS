#pragma once
#include "RegDomainSet.h"
#include "Glavnaya.h"

namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Text;
	using namespace System::Diagnostics;

	/// <summary>
	/// —водка дл€ RegDomain
	/// </summary>
	public ref class RegDomain : public System::Windows::Forms::Form
	{
	public:
		RegDomain(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~RegDomain()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(32, 31);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(115, 51);
			this->button1->TabIndex = 0;
			this->button1->Text = L"¬вод в домен (настройка сети и пользователей)";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &RegDomain::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(169, 31);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(111, 51);
			this->button2->TabIndex = 1;
			this->button2->Text = L"ќтлключение служб";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &RegDomain::button2_Click);
			// 
			// RegDomain
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(323, 111);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"RegDomain";
			this->Text = L"RegDomain";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Glavnaya^ kkkk = gcnew Glavnaya();
		kkkk->Show();
		RegDomain::Hide();
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
		
	};
}
