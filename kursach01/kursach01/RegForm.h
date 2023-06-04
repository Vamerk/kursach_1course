#pragma once
#include "User.h"


namespace kursach01 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Сводка для RegForm
	/// </summary>
	public ref class RegForm : public System::Windows::Forms::Form
	{
	public:
		RegForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			this->CenterToScreen();
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~RegForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ reglogintb;
	private: System::Windows::Forms::TextBox^ regpastb;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ regUsersernametb;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ regUsernametb;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::DateTimePicker^ regDatepiker;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ regButton;
	private: System::Windows::Forms::LinkLabel^ linkLabel1;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->reglogintb = (gcnew System::Windows::Forms::TextBox());
			this->regpastb = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->regUsersernametb = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->regUsernametb = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->regDatepiker = (gcnew System::Windows::Forms::DateTimePicker());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->regButton = (gcnew System::Windows::Forms::Button());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(14, -2);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(256, 35);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Регистрация";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(13, 49);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(78, 27);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Логин";
			this->label2->Click += gcnew System::EventHandler(this, &RegForm::label2_Click);
			// 
			// reglogintb
			// 
			this->reglogintb->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->reglogintb->Location = System::Drawing::Point(12, 79);
			this->reglogintb->Name = L"reglogintb";
			this->reglogintb->Size = System::Drawing::Size(258, 34);
			this->reglogintb->TabIndex = 2;
			this->reglogintb->TextChanged += gcnew System::EventHandler(this, &RegForm::reglogintb_TextChanged);
			// 
			// regpastb
			// 
			this->regpastb->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->regpastb->Location = System::Drawing::Point(12, 142);
			this->regpastb->Name = L"regpastb";
			this->regpastb->Size = System::Drawing::Size(258, 34);
			this->regpastb->TabIndex = 4;
			this->regpastb->TextChanged += gcnew System::EventHandler(this, &RegForm::textBox1_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(13, 112);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(99, 27);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Пароль";
			this->label3->Click += gcnew System::EventHandler(this, &RegForm::label3_Click);
			// 
			// regUsersernametb
			// 
			this->regUsersernametb->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->regUsersernametb->Location = System::Drawing::Point(12, 272);
			this->regUsersernametb->Name = L"regUsersernametb";
			this->regUsersernametb->Size = System::Drawing::Size(258, 34);
			this->regUsersernametb->TabIndex = 8;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(13, 242);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(119, 27);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Фамилия";
			// 
			// regUsernametb
			// 
			this->regUsernametb->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->regUsernametb->Location = System::Drawing::Point(12, 205);
			this->regUsernametb->Name = L"regUsernametb";
			this->regUsernametb->Size = System::Drawing::Size(258, 34);
			this->regUsernametb->TabIndex = 6;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(13, 175);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(59, 27);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Имя";
			// 
			// regDatepiker
			// 
			this->regDatepiker->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->regDatepiker->Location = System::Drawing::Point(12, 339);
			this->regDatepiker->MaxDate = System::DateTime(2020, 1, 1, 0, 0, 0, 0);
			this->regDatepiker->MinDate = System::DateTime(1930, 1, 1, 0, 0, 0, 0);
			this->regDatepiker->Name = L"regDatepiker";
			this->regDatepiker->Size = System::Drawing::Size(256, 34);
			this->regDatepiker->TabIndex = 9;
			this->regDatepiker->Value = System::DateTime(2020, 1, 1, 0, 0, 0, 0);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(13, 309);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(192, 27);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Дата рождения";
			// 
			// regButton
			// 
			this->regButton->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->regButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->regButton->Location = System::Drawing::Point(12, 419);
			this->regButton->Name = L"regButton";
			this->regButton->Size = System::Drawing::Size(254, 52);
			this->regButton->TabIndex = 11;
			this->regButton->Text = L"Регистрация";
			this->regButton->UseVisualStyleBackColor = false;
			this->regButton->Click += gcnew System::EventHandler(this, &RegForm::regButton_Click);
			// 
			// linkLabel1
			// 
			this->linkLabel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->linkLabel1->Location = System::Drawing::Point(8, 474);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(254, 23);
			this->linkLabel1->TabIndex = 12;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"Логин";
			this->linkLabel1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &RegForm::linkLabel1_LinkClicked);
			// 
			// RegForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(282, 503);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->regButton);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->regDatepiker);
			this->Controls->Add(this->regUsersernametb);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->regUsernametb);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->regpastb);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->reglogintb);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"RegForm";
			this->Text = L"Регистрация";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {

		}

		private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {

		}

		private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {

		}

		private: System::Void reglogintb_TextChanged(System::Object^ sender, System::EventArgs^ e) {

		}

		public: User^ user = nullptr;
		private: System::Void regButton_Click(System::Object^ sender, System::EventArgs^ e) {
			String^ reg_login = reglogintb->Text;
			String^ reg_password = regpastb->Text;
			String^ reg_name = regUsernametb->Text;
			String^ reg_sername = regUsersernametb ->Text;
			DateTime^ reg_birthday = regDatepiker->Value;

			if (reg_login->Length == 0 || reg_password->Length == 0 || reg_name->Length == 0 || reg_sername -> Length == 0){
				MessageBox::Show("Вы ввели не все данные(", "Введите все данные!!!", MessageBoxButtons::OK);
				return;
			}

			try{
				String^ connString = "Data Source=(localdb)\\MSSQLLocalDB;Initial Catalog=userdb;Integrated Security=True";
				SqlConnection sqlConn(connString);
				sqlConn.Open();

				String^ sqlQuery = "INSERT INTO users" + 
						"(login, password, name, sername, birthday) VALUES" + 
						"(@login, @password, @name, @sername, @birthday);";
				SqlCommand command(sqlQuery, % sqlConn);
				command.Parameters->AddWithValue("@login", reg_login);
				command.Parameters->AddWithValue("@password", reg_password);
				command.Parameters->AddWithValue("@name", reg_name);
				command.Parameters->AddWithValue("@sername", reg_sername);
				command.Parameters->AddWithValue("@birthday", reg_birthday);

				command.ExecuteNonQuery();
				user = gcnew User;

				user->login = reg_login;
				user->password = reg_password;
				user->name = reg_name;
				user->sername = reg_sername;
				user->birthday = reg_birthday;

				this->Close();
			}
			catch (Exception^ e){ MessageBox::Show("Database connection error", "");}
		}

	public: bool switchToLogin = false;
	private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		switchToLogin = true;
		this->Close();
	}
};
}
