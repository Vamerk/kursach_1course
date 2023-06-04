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
	/// Сводка для LoginForm
	/// </summary>
	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:
		LoginForm(void)
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
		~LoginForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::TextBox^ login_tb;
	private: System::Windows::Forms::TextBox^ password_tb;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ Login_btn;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->login_tb = (gcnew System::Windows::Forms::TextBox());
			this->password_tb = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->Login_btn = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(7, 56);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(78, 27);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Логин";
			// 
			// login_tb
			// 
			this->login_tb->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->login_tb->Location = System::Drawing::Point(12, 84);
			this->login_tb->Name = L"login_tb";
			this->login_tb->Size = System::Drawing::Size(258, 36);
			this->login_tb->TabIndex = 1;
			// 
			// password_tb
			// 
			this->password_tb->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->password_tb->Location = System::Drawing::Point(12, 153);
			this->password_tb->Name = L"password_tb";
			this->password_tb->PasswordChar = '*';
			this->password_tb->Size = System::Drawing::Size(258, 36);
			this->password_tb->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(7, 125);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(99, 27);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Пароль";
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(12, 9);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(258, 47);
			this->label3->TabIndex = 4;
			this->label3->Text = L"ВХОД";
			this->label3->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// Login_btn
			// 
			this->Login_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Login_btn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Login_btn->Location = System::Drawing::Point(12, 388);
			this->Login_btn->Name = L"Login_btn";
			this->Login_btn->Size = System::Drawing::Size(258, 37);
			this->Login_btn->TabIndex = 5;
			this->Login_btn->Text = L"Войти";
			this->Login_btn->UseVisualStyleBackColor = true;
			this->Login_btn->Click += gcnew System::EventHandler(this, &LoginForm::Login_btn_Click);
			// 
			// label4
			// 
			this->label4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(12, 428);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(258, 23);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Зарегистрироваться";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label4->Click += gcnew System::EventHandler(this, &LoginForm::label4_Click);
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(282, 453);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->Login_btn);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->password_tb);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->login_tb);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"LoginForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"LoginForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	public: User^ user = nullptr;

	private: System::Void Login_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ login = this->login_tb->Text;
		String^ password = this->password_tb->Text;

		if (login->Length == 0 || password->Length == 0){
			MessageBox::Show("Введите данные", "");
			return;
		}
		//try
		//{
		String^ connString = "Data Source=(localdb)\\MSSQLLocalDB;Initial Catalog=userdb;Integrated Security=True";
		SqlConnection sqlConn(connString);
		sqlConn.Open();

		String^ sqlQuery = "SELECT * FROM users WHERE login=@login AND password=@pwd";
		SqlCommand command(sqlQuery, % sqlConn);
		command.Parameters->AddWithValue("@login", login);
		command.Parameters->AddWithValue("@pwd", password);

		SqlDataReader^ reader = command.ExecuteReader();

		if (reader->Read()) {
			user = gcnew User;
			user->id = reader->GetInt32(0);
			user->login = reader->GetString(1);
			user->password = reader->GetString(2);
			user->name = reader->GetString(3);
			user->sername = reader->GetString(4);
			user->birthday = reader->GetDateTime(5);
			

			this->Close();
		}
		else MessageBox::Show("Неверный логин или пароль", "login data error", MessageBoxButtons::OK);
			
		//}
		//catch (Exception^ e)
		//{
		//	MessageBox::Show("Database connection error", "");
		//}

	}

	public: bool switchToRegister = false;
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
		this->switchToRegister = true;
		this->Close();

	}
	};
}
