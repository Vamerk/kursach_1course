#pragma once
#include "User.h"
#include "RequestsForm.h"

namespace kursach01 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;
	
	/// <summary>
	/// Сводка для MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{

	public: int uid;
		  String^ uname;
		  String^ username;
		  String^ ubook1;
		  String^ ubook2;
	private: System::Windows::Forms::ComboBox^ readingRoomCB;
	private: System::Windows::Forms::Button^ requestsButton;

	public:
		String^ ubook3;
		  
	public:
		MainForm(User ^user)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			uid = user->id;
			uname = user->name;
			username = user->sername;
			ubook1 = user->book1;
			ubook2 = user->book2;
			ubook3 = user->book3;

			lbUserInfo->Text = 
				"ID: " + user->id + 
				"\nИмя: " + user->name + 
				"\nФамилия: " + user-> sername + 
				"\nДата рождения: " + user->birthday;

		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:








	private: System::Windows::Forms::Label^ lbUserInfo;
	private: System::Windows::Forms::Button^ getBook;
	private: System::Windows::Forms::Button^ passBook;
	private: System::Windows::Forms::Button^ readRoom;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ getBookCB;
	private: System::Windows::Forms::ComboBox^ passBookCB;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ userBooklb;
	private: System::Windows::Forms::Button^ reload;















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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->lbUserInfo = (gcnew System::Windows::Forms::Label());
			this->getBook = (gcnew System::Windows::Forms::Button());
			this->passBook = (gcnew System::Windows::Forms::Button());
			this->readRoom = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->getBookCB = (gcnew System::Windows::Forms::ComboBox());
			this->passBookCB = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->userBooklb = (gcnew System::Windows::Forms::Label());
			this->reload = (gcnew System::Windows::Forms::Button());
			this->readingRoomCB = (gcnew System::Windows::Forms::ComboBox());
			this->requestsButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// lbUserInfo
			// 
			this->lbUserInfo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lbUserInfo->Location = System::Drawing::Point(10, 45);
			this->lbUserInfo->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbUserInfo->Name = L"lbUserInfo";
			this->lbUserInfo->Size = System::Drawing::Size(262, 228);
			this->lbUserInfo->TabIndex = 1;
			this->lbUserInfo->Text = L"label1";
			// 
			// getBook
			// 
			this->getBook->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->getBook->Location = System::Drawing::Point(763, 20);
			this->getBook->Margin = System::Windows::Forms::Padding(2);
			this->getBook->Name = L"getBook";
			this->getBook->Size = System::Drawing::Size(115, 23);
			this->getBook->TabIndex = 2;
			this->getBook->Text = L"Взять книгу";
			this->getBook->UseVisualStyleBackColor = true;
			this->getBook->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
			// 
			// passBook
			// 
			this->passBook->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->passBook->Location = System::Drawing::Point(763, 82);
			this->passBook->Margin = System::Windows::Forms::Padding(2);
			this->passBook->Name = L"passBook";
			this->passBook->Size = System::Drawing::Size(115, 23);
			this->passBook->TabIndex = 3;
			this->passBook->Text = L"Сдать книгу";
			this->passBook->UseVisualStyleBackColor = true;
			this->passBook->Click += gcnew System::EventHandler(this, &MainForm::passBook_Click);
			// 
			// readRoom
			// 
			this->readRoom->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->readRoom->Location = System::Drawing::Point(763, 129);
			this->readRoom->Margin = System::Windows::Forms::Padding(2);
			this->readRoom->Name = L"readRoom";
			this->readRoom->Size = System::Drawing::Size(115, 41);
			this->readRoom->TabIndex = 4;
			this->readRoom->Text = L"Выбрать читальный зал";
			this->readRoom->UseVisualStyleBackColor = true;
			this->readRoom->Click += gcnew System::EventHandler(this, &MainForm::readRoom_Click);
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(9, 7);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(196, 37);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Мой профиль";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// getBookCB
			// 
			this->getBookCB->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->getBookCB->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->getBookCB->FormattingEnabled = true;
			this->getBookCB->Location = System::Drawing::Point(487, 20);
			this->getBookCB->Margin = System::Windows::Forms::Padding(2);
			this->getBookCB->Name = L"getBookCB";
			this->getBookCB->Size = System::Drawing::Size(264, 21);
			this->getBookCB->TabIndex = 6;
			// 
			// passBookCB
			// 
			this->passBookCB->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->passBookCB->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->passBookCB->FormattingEnabled = true;
			this->passBookCB->Location = System::Drawing::Point(487, 82);
			this->passBookCB->Margin = System::Windows::Forms::Padding(2);
			this->passBookCB->Name = L"passBookCB";
			this->passBookCB->Size = System::Drawing::Size(264, 21);
			this->passBookCB->TabIndex = 7;
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(9, 274);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(196, 37);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Мои книги";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// userBooklb
			// 
			this->userBooklb->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->userBooklb->Location = System::Drawing::Point(10, 311);
			this->userBooklb->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->userBooklb->Name = L"userBooklb";
			this->userBooklb->Size = System::Drawing::Size(262, 203);
			this->userBooklb->TabIndex = 9;
			// 
			// reload
			// 
			this->reload->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"reload.BackgroundImage")));
			this->reload->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->reload->Cursor = System::Windows::Forms::Cursors::Hand;
			this->reload->FlatAppearance->BorderSize = 0;
			this->reload->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->reload->Location = System::Drawing::Point(851, 493);
			this->reload->Margin = System::Windows::Forms::Padding(2);
			this->reload->Name = L"reload";
			this->reload->Size = System::Drawing::Size(34, 37);
			this->reload->TabIndex = 10;
			this->reload->UseVisualStyleBackColor = true;
			this->reload->Click += gcnew System::EventHandler(this, &MainForm::reload_Click);
			// 
			// readingRoomCB
			// 
			this->readingRoomCB->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->readingRoomCB->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->readingRoomCB->FormattingEnabled = true;
			this->readingRoomCB->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->readingRoomCB->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Зал Философии ", L"Технический зал", L"Ботанический зал",
					L"Гумунитарный зал", L"Художественный зал"
			});
			this->readingRoomCB->Location = System::Drawing::Point(487, 141);
			this->readingRoomCB->Margin = System::Windows::Forms::Padding(2);
			this->readingRoomCB->Name = L"readingRoomCB";
			this->readingRoomCB->Size = System::Drawing::Size(264, 21);
			this->readingRoomCB->TabIndex = 11;
			// 
			// requestsButton
			// 
			this->requestsButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->requestsButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->requestsButton->Location = System::Drawing::Point(378, 463);
			this->requestsButton->Name = L"requestsButton";
			this->requestsButton->Size = System::Drawing::Size(133, 56);
			this->requestsButton->TabIndex = 12;
			this->requestsButton->Text = L"Запросы";
			this->requestsButton->UseVisualStyleBackColor = true;
			this->requestsButton->Click += gcnew System::EventHandler(this, &MainForm::requestsButton_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::WhiteSmoke;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->ClientSize = System::Drawing::Size(886, 531);
			this->Controls->Add(this->requestsButton);
			this->Controls->Add(this->readingRoomCB);
			this->Controls->Add(this->reload);
			this->Controls->Add(this->userBooklb);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->passBookCB);
			this->Controls->Add(this->getBookCB);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->readRoom);
			this->Controls->Add(this->passBook);
			this->Controls->Add(this->getBook);
			this->Controls->Add(this->lbUserInfo);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MainForm";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
		public: String^ selectReadingroom;

		String^ connString = "Data Source=(localdb)\\MSSQLLocalDB;Initial Catalog=userdb;Integrated Security=True";
		public: User ^user;
		private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

			String^ selectedBook = this->getBookCB->SelectedItem->ToString();
			this->getBookCB->Items->Remove(selectedBook);
			if (selectedBook == "")
				MessageBox::Show("Вы не выбрали книгу!", "Внимание!", MessageBoxButtons::YesNo, MessageBoxIcon::Warning);
			else{
				bool b1 = false, b2 = false, b3 = false;

				System::Windows::Forms::DialogResult Result;
				Result = MessageBox::Show("взять книгу " + selectedBook + "?", "", MessageBoxButtons::YesNo, MessageBoxIcon::Information);
				if (Result == System::Windows::Forms::DialogResult::Yes) {
					SqlConnection sqlConn(connString); // Добавить проверку на книгу))
					sqlConn.Open();
					/* Проверка какая книга есть, какой нет*/
					String^ sqlQuery1 = "select book1 from users where id=@uid";
					SqlCommand scom1(sqlQuery1, % sqlConn);
					scom1.Parameters->AddWithValue("@uid", uid);
					SqlDataReader^ reader1 = scom1.ExecuteReader();
					if (reader1->Read()) {
						if (reader1->IsDBNull(0)){
							b1 = true;
						}
					}
					reader1->Close();


					String^ sqlQuery2 = "select book2 from users where id=@uid";
					SqlCommand scom2(sqlQuery2, % sqlConn);
					scom2.Parameters->AddWithValue("@uid", uid);
					SqlDataReader^ reader2 = scom2.ExecuteReader();
					if (reader2->Read()) {
						if (reader2->IsDBNull(0)) { 
							b2 = true; 
						}
					}
					reader2->Close();

					String^ sqlQuery3 = "select book3 from users where id=@uid";
					SqlCommand scom3(sqlQuery3, % sqlConn);
					scom3.Parameters->AddWithValue("@uid", uid);
					SqlDataReader^ reader3 = scom3.ExecuteReader();
					if (reader3->Read()) {
						if (reader3->IsDBNull(0)){
							b3 = true; 
						}
					}
					reader3->Close();

					/* КОНЕЦ */
					if (b1) {
						String^ sqlQuery = "update users set book1=@selectbook where id=@uid";
						SqlCommand command(sqlQuery, % sqlConn);
						command.Parameters->AddWithValue("@selectbook", selectedBook);
						command.Parameters->AddWithValue("@uid", uid);
						command.ExecuteNonQuery();
						sqlConn.Close();
					}
					else if (b2) {
						String^ sqlQuery = "update users set book2=@selectbook where id=@uid";
						SqlCommand command(sqlQuery, % sqlConn);
						command.Parameters->AddWithValue("@selectbook", selectedBook);
						command.Parameters->AddWithValue("@uid", uid);
						command.ExecuteNonQuery();
						sqlConn.Close();
					}
					else if (b3) {
						String^ sqlQuery = "update users set book3=@selectbook where id=@uid";
						SqlCommand command(sqlQuery, % sqlConn);
						command.Parameters->AddWithValue("@selectbook", selectedBook);
						command.Parameters->AddWithValue("@uid", uid);
						command.ExecuteNonQuery();
						sqlConn.Close();
					}
					else { 
						this->getBookCB->Items->Add(selectedBook);
						MessageBox::Show("Вы взяли ммаксимальное количество книг","Упс...",MessageBoxButtons::OK, MessageBoxIcon::Error); 
					}
					
				}
				else if (Result == System::Windows::Forms::DialogResult::No) {
					MessageBox::Show("В другой раз возьмешь", "");
				}
			}
			

		}
		
		private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
			selectReadingroom = "fillosofroom";
			SqlConnection sqlConn(connString);
			sqlConn.Open();
			String^ sqlQuery = "SELECT name FROM " + selectReadingroom;
			SqlCommand command(sqlQuery, % sqlConn);
			SqlDataReader^ reader = command.ExecuteReader();
			while (reader->Read()) {
				this->getBookCB->Items->Add(reader->GetString(0));
			}
			reader->Close();


			String^ sqlQuery1 = "select book1, book2, book3 from users where id=@uid";
			SqlCommand command1(sqlQuery1, % sqlConn);
			command1.Parameters->AddWithValue("@uid", uid);
			SqlDataReader^ reader1 = command1.ExecuteReader();
			int i = 1;
			if (reader1->Read()) {
				if (!reader1->IsDBNull(0)){
					this->userBooklb->Text += "Книга " + i + " - " + (reader1->GetString(0)) + "\n"; i++;
				}

				if (!reader1->IsDBNull(1)){
					this->userBooklb->Text += "Книга " + i + " - " + (reader1->GetString(1)) + "\n"; i++;
				}

				if (!reader1->IsDBNull(2)){
					this->userBooklb->Text += "Книга " + i + " - " + (reader1->GetString(2)) + "\n"; i++;
				}

				if (reader1->IsDBNull(0) && reader1->IsDBNull(1) && reader1->IsDBNull(2))
					this->userBooklb->Text += "У вас нет книг";

			}

			reader1->Close();
			sqlConn.Close();


			String^ psqlQuery = "select book1, book2, book3 from users where id=@uid";
			SqlConnection psqlConn(connString);
			psqlConn.Open();
			SqlCommand pcommand(psqlQuery, % psqlConn);
			pcommand.Parameters->AddWithValue("@uid", uid);
			SqlDataReader^ preader = pcommand.ExecuteReader();

			if (preader->Read()) {
				if (!preader->IsDBNull(0))
					this->passBookCB->Items->Add(preader->GetString(0));
				if (!preader->IsDBNull(1))
					this->passBookCB->Items->Add(preader->GetString(1));
				if (!preader->IsDBNull(2))
					this->passBookCB->Items->Add(preader->GetString(2));
			}

			preader->Close();
			psqlConn.Close();

			if (uid != 4) {
				this->requestsButton->Visible = false;
			}
		}

		private: System::Void reload_Click(System::Object^ sender, System::EventArgs^ e) {
			SqlConnection sqlConn(connString);
			sqlConn.Open();

			String^ sqlQuery1 = "select book1, book2, book3 from users where id=@uid";
			SqlCommand command1(sqlQuery1, % sqlConn);
			command1.Parameters->AddWithValue("@uid", uid);
			SqlDataReader^ reader1 = command1.ExecuteReader();
			this->userBooklb->Text = "";
			int i = 1;
			if (reader1->Read()) {
				if (!reader1->IsDBNull(0)){
					this->userBooklb->Text += "Книга " + i + " - " + (reader1->GetString(0)) + "\n"; i++;
				}

				if (!reader1->IsDBNull(1)){
					this->userBooklb->Text += "Книга " + i + " - " + (reader1->GetString(1)) + "\n"; i++;
				}

				if (!reader1->IsDBNull(2)){
					this->userBooklb->Text += "Книга " + i + " - " + (reader1->GetString(2)) + "\n"; i++;
				}

				if (reader1->IsDBNull(0) && reader1->IsDBNull(1) && reader1->IsDBNull(2))
					this->userBooklb->Text += "У вас нет книг";

			}
			reader1->Close();
			sqlConn.Close();

			String^ psqlQuery = "select book1, book2, book3 from users where id=@uid";
			SqlConnection psqlConn(connString);
			psqlConn.Open();
			SqlCommand pcommand(psqlQuery, % psqlConn);
			pcommand.Parameters->AddWithValue("@uid", uid);
			SqlDataReader^ preader = pcommand.ExecuteReader();
			this->passBookCB->Items->Clear();
			if (preader->Read()) {
				if (!preader->IsDBNull(0))
					this->passBookCB->Items->Add(preader->GetString(0));
				if (!preader->IsDBNull(1))
					this->passBookCB->Items->Add(preader->GetString(1));
				if (!preader->IsDBNull(2))
					this->passBookCB->Items->Add(preader->GetString(2));
			}

			preader->Close();
			psqlConn.Close();

		}
		private: System::Void passBook_Click(System::Object^ sender, System::EventArgs^ e) {
		
			/*----------------------------------------------------------------------------------------------------------*/
			String^ selectedBook = this->passBookCB->SelectedItem->ToString();

			System::Windows::Forms::DialogResult Result;
			Result = MessageBox::Show("Вы действительно хоитие сдать книгу: " + selectedBook, "Внимание!", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
			if (Result == System::Windows::Forms::DialogResult::Yes){	
				String^ SqlQuery = 
					"UPDATE users "+
						"SET " + 
							"book1 = CASE WHEN (book1 = @bookname AND id=@uid) THEN NULL ELSE book1 END, " + 
							"book2 = CASE WHEN (book2 = @bookname AND id=@uid) THEN NULL ELSE book2 END, " + 
							"book3 = CASE WHEN (book3 = @bookname AND id=@uid) THEN NULL ELSE book3 END;";
				//String^ SqlQuery = "UPDATE users SET book1 = CASE WHEN (book1 = @bookname AND id=@uid) THEN NULL ELSE book1 END, book2 = CASE WHEN (book2 = @bookname AND id=@uid) THEN NULL ELSE book2 END, book3 = CASE WHEN (book3 = @bookname AND id=@uid) THEN NULL ELSE book3 END
				
				SqlConnection sqlConn(connString);
				sqlConn.Open();
				SqlCommand command(SqlQuery, % sqlConn);
				command.Parameters->AddWithValue("@bookname", selectedBook);
				command.Parameters->AddWithValue("@uid", uid);

				command.ExecuteNonQuery();
				sqlConn.Close();

				this->passBookCB->Items->Remove(selectedBook);
				
			}
			else if (Result == System::Windows::Forms::DialogResult::No) {
				MessageBox::Show("В другой раз сдашь", "");
			}
		}
		private: System::Void readRoom_Click(System::Object^ sender, System::EventArgs^ e) {
			String^ selectedRoom = this->readingRoomCB->SelectedItem->ToString();
			
			if (selectedRoom == "Ботанический зал") {selectReadingroom = "bioroom";}
			if (selectedRoom == "Зал Философии ") {selectReadingroom = "fillosofroom";}
			if (selectedRoom == "Технический зал") {selectReadingroom = "techroom";}
			if (selectedRoom == "Гумунитарный зал") {selectReadingroom = "lohozal";}
			if (selectedRoom == "Художественный зал") {selectReadingroom = "books";}
			if (selectedRoom == " ") {selectReadingroom = "books";}
			
			
			SqlConnection sqlConn(connString);
			sqlConn.Open();
			String^ sqlQuery = "SELECT name FROM " + selectReadingroom;
			SqlCommand command(sqlQuery, % sqlConn);
			SqlDataReader^ reader = command.ExecuteReader();
			this->getBookCB->Items->Clear();
			while (reader->Read()) {
				this->getBookCB->Items->Add(reader->GetString(0));
			}
			reader->Close();
			sqlConn.Close();
		}
	private: System::Void requestsButton_Click(System::Object^ sender, System::EventArgs^ e) {
		kursach01::RequestsForm reqForm;
		reqForm.ShowDialog();
	}
};
}
