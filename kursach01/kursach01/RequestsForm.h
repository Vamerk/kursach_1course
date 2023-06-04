#pragma once
#include <string>
#include <iostream>
#include <cstring>
#include <sstream>

namespace kursach01 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Сводка для RequestsForm
	/// </summary>
	public ref class RequestsForm : public System::Windows::Forms::Form
	{
	public: int uid;
		  String^ uname;
		  String^ username;
		  String^ ubook1;
		  String^ ubook2;
	public:
		RequestsForm(void)
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
		~RequestsForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^ userInfoCb;
	protected:

	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ infolb;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ UserInfoBtn;
	private: System::Windows::Forms::Button^ bookInfoBtn;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ComboBox^ bookInfoCb;
	private: System::Windows::Forms::Button^ RoomsInfoBtn;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ComboBox^ roomInfoCb;



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
			this->userInfoCb = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->infolb = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->UserInfoBtn = (gcnew System::Windows::Forms::Button());
			this->bookInfoBtn = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->bookInfoCb = (gcnew System::Windows::Forms::ComboBox());
			this->RoomsInfoBtn = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->roomInfoCb = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// userInfoCb
			// 
			this->userInfoCb->FormattingEnabled = true;
			this->userInfoCb->Location = System::Drawing::Point(93, 15);
			this->userInfoCb->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->userInfoCb->Name = L"userInfoCb";
			this->userInfoCb->Size = System::Drawing::Size(1015, 24);
			this->userInfoCb->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(16, 236);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(1201, 39);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Информация";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// infolb
			// 
			this->infolb->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->infolb->Location = System::Drawing::Point(16, 289);
			this->infolb->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->infolb->Name = L"infolb";
			this->infolb->Size = System::Drawing::Size(1192, 336);
			this->infolb->TabIndex = 2;
			this->infolb->Text = L"Окно информации ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(19, 11);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(50, 25);
			this->label2->TabIndex = 3;
			this->label2->Text = L"user";
			// 
			// UserInfoBtn
			// 
			this->UserInfoBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->UserInfoBtn->Location = System::Drawing::Point(1117, 7);
			this->UserInfoBtn->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->UserInfoBtn->Name = L"UserInfoBtn";
			this->UserInfoBtn->Size = System::Drawing::Size(100, 37);
			this->UserInfoBtn->TabIndex = 4;
			this->UserInfoBtn->Text = L"Выбрать";
			this->UserInfoBtn->UseVisualStyleBackColor = true;
			this->UserInfoBtn->Click += gcnew System::EventHandler(this, &RequestsForm::UserInfoBtn_Click);
			// 
			// bookInfoBtn
			// 
			this->bookInfoBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bookInfoBtn->Location = System::Drawing::Point(1117, 74);
			this->bookInfoBtn->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->bookInfoBtn->Name = L"bookInfoBtn";
			this->bookInfoBtn->Size = System::Drawing::Size(100, 37);
			this->bookInfoBtn->TabIndex = 7;
			this->bookInfoBtn->Text = L"Выбрать";
			this->bookInfoBtn->UseVisualStyleBackColor = true;
			this->bookInfoBtn->Click += gcnew System::EventHandler(this, &RequestsForm::bookInfoBtn_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(4, 76);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(65, 25);
			this->label3->TabIndex = 6;
			this->label3->Text = L"books";
			// 
			// bookInfoCb
			// 
			this->bookInfoCb->FormattingEnabled = true;
			this->bookInfoCb->Location = System::Drawing::Point(93, 81);
			this->bookInfoCb->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->bookInfoCb->Name = L"bookInfoCb";
			this->bookInfoCb->Size = System::Drawing::Size(1015, 24);
			this->bookInfoCb->TabIndex = 5;
			// 
			// RoomsInfoBtn
			// 
			this->RoomsInfoBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->RoomsInfoBtn->Location = System::Drawing::Point(1117, 144);
			this->RoomsInfoBtn->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->RoomsInfoBtn->Name = L"RoomsInfoBtn";
			this->RoomsInfoBtn->Size = System::Drawing::Size(100, 37);
			this->RoomsInfoBtn->TabIndex = 10;
			this->RoomsInfoBtn->Text = L"Выбрать";
			this->RoomsInfoBtn->UseVisualStyleBackColor = true;
			this->RoomsInfoBtn->Click += gcnew System::EventHandler(this, &RequestsForm::RoomsInfoBtn_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(16, 146);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(56, 25);
			this->label4->TabIndex = 9;
			this->label4->Text = L"room";
			// 
			// roomInfoCb
			// 
			this->roomInfoCb->FormattingEnabled = true;
			this->roomInfoCb->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Зал Философии ", L"Технический зал", L"Ботанический зал",
					L"Гумунитарный зал", L"Художественный зал"
			});
			this->roomInfoCb->Location = System::Drawing::Point(93, 151);
			this->roomInfoCb->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->roomInfoCb->Name = L"roomInfoCb";
			this->roomInfoCb->Size = System::Drawing::Size(1015, 24);
			this->roomInfoCb->TabIndex = 8;
			// 
			// RequestsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1224, 636);
			this->Controls->Add(this->RoomsInfoBtn);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->roomInfoCb);
			this->Controls->Add(this->bookInfoBtn);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->bookInfoCb);
			this->Controls->Add(this->UserInfoBtn);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->infolb);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->userInfoCb);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"RequestsForm";
			this->Text = L"RequestsForm";
			this->Load += gcnew System::EventHandler(this, &RequestsForm::RequestsForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		String^ GetFirstWord(String^ sentence)
		{
			// Разделить строку на слова, используя пробел в качестве разделителя
			array<Char>^ delimiterChars = { ' ' };
			array<String^>^ words = sentence->Split(delimiterChars, StringSplitOptions::RemoveEmptyEntries);

			// Вернуть первое слово
			if (words->Length > 0)
				return words[0];
			else
				return String::Empty;
		}


		String^ connString = "Data Source=(localdb)\\MSSQLLocalDB;Initial Catalog=userdb;Integrated Security=True";

		private: System::Void RequestsForm_Load(System::Object^ sender, System::EventArgs^ e) {
			SqlConnection sqlConn(connString);
			sqlConn.Open();
			String^ sqlQuery = "SELECT id, name, sername FROM users";
			SqlCommand command(sqlQuery, % sqlConn);
			SqlDataReader^ reader = command.ExecuteReader();
			while (reader->Read()) {
				this->userInfoCb->Items->Add(reader->GetInt32(0) + " - " + reader->GetString(1) + " " + reader->GetString(2));
			}
			reader->Close();

			
			String^ sqlQuery1 = "SELECT name FROM books";			
			SqlCommand command1(sqlQuery1, % sqlConn);
			SqlDataReader^ reader1 = command1.ExecuteReader();
			while (reader1->Read()) {
				this->bookInfoCb->Items->Add(reader1->GetString(0));
			}
			reader1->Close();

			String^ sqlQuery2 = "SELECT name FROM bioroom";
			SqlCommand command2(sqlQuery2, % sqlConn);
			SqlDataReader^ reader2 = command2.ExecuteReader();
			while (reader2->Read()) {
				this->bookInfoCb->Items->Add(reader2->GetString(0));
			}
			reader2->Close();

			String^ sqlQuery3 = "SELECT name FROM fillosofroom";
			SqlCommand command3(sqlQuery3, % sqlConn);
			SqlDataReader^ reader3 = command3.ExecuteReader();
			while (reader3->Read()) {
				this->bookInfoCb->Items->Add(reader3->GetString(0));
			}
			reader3->Close();

			String^ sqlQuery4 = "SELECT name FROM lohozal";
			SqlCommand command4(sqlQuery4, % sqlConn);
			SqlDataReader^ reader4 = command4.ExecuteReader();
			while (reader4->Read()) {
				this->bookInfoCb->Items->Add(reader4->GetString(0));
			}
			reader4->Close();

			String^ sqlQuery5 = "SELECT name FROM techroom";
			SqlCommand command5(sqlQuery5, % sqlConn);
			SqlDataReader^ reader5 = command5.ExecuteReader();
			while (reader5->Read()) {
				this->bookInfoCb->Items->Add(reader5->GetString(0));
			}
			reader5->Close();

			sqlConn.Close();

			
		}
		private: System::Void UserInfoBtn_Click(System::Object^ sender, System::EventArgs^ e) {

			String^ selectedUser = userInfoCb->SelectedItem->ToString();
		
			String^ uid = GetFirstWord(selectedUser);


			SqlConnection sqlConn(connString);
			sqlConn.Open();
			String^ sqlQuery1 = "select name, sername, login, book1, book2, book3 from users where id=@uid";
			SqlCommand command1(sqlQuery1, % sqlConn);
			command1.Parameters->AddWithValue("@uid", uid);
			SqlDataReader^ reader1 = command1.ExecuteReader();
			int i = 1;
			this->infolb->Text = "";
			if (reader1->Read()) {
				this->infolb->Text += "Имя: " + reader1->GetString(0) + " " + reader1->GetString(1) +
									  "\nЛогин: " + reader1->GetString(2) +
									  "\n\nКниги:\n";
				if (!reader1->IsDBNull(3)) {
					this->infolb->Text += "Книга " + i + " - " + (reader1->GetString(3)) + "\n"; i++;
				}

				if (!reader1->IsDBNull(4)) {
					this->infolb->Text += "Книга " + i + " - " + (reader1->GetString(4)) + "\n"; i++;
				}

				if (!reader1->IsDBNull(5)) {
					this->infolb->Text += "Книга " + i + " - " + (reader1->GetString(5)) + "\n"; i++;
				}

				if (reader1->IsDBNull(3) && reader1->IsDBNull(4) && reader1->IsDBNull(5))
					this->infolb->Text += "У пользователя нет книг";

			}

			reader1->Close();
			sqlConn.Close();


		}
		private: System::Void bookInfoBtn_Click(System::Object^ sender, System::EventArgs^ e) {
			String^ selectedBook = bookInfoCb->SelectedItem->ToString();

			String^ bookInfoQuery =
				"SELECT name, author, publishYear, count FROM books WHERE name = @BookName " +
				"UNION ALL " +
				"SELECT name, author, publishYear, count FROM bioroom WHERE name = @BookName " +
				"UNION ALL " +
				"SELECT name, author, publishYear, count FROM fillosofroom WHERE name = @BookName " +
				"UNION ALL " +
				"SELECT name, author, publishYear, count FROM lohozal WHERE name = @BookName " +
				"UNION ALL " +
				"SELECT name, author, publishYear, count FROM techroom WHERE name = @BookName;";

			SqlConnection sqlConn(connString);
			sqlConn.Open();
			SqlCommand command(bookInfoQuery, % sqlConn);
			command.Parameters->AddWithValue("@BookName", selectedBook);
			SqlDataReader^ reader = command.ExecuteReader();
			this->infolb->Text = "";
			while (reader->Read())
			{
				int count = reader->GetInt32(3);  // Индекс 0 соответствует столбцу [count]
				this->infolb->Text +=
					"Название: " + reader->GetString(0) +
					"\nАвтор: " + reader->GetString(1) +
					"\nПубликация: " + reader->GetDateTime(2) +
					"\nСвободное кол-во: " + count.ToString();
			}

			reader->Close();
			sqlConn.Close();

		}
	private: System::Void RoomsInfoBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("Сейчас зал пустой", "", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
};
}
