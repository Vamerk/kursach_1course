#include "LoginForm.h"
#include "MainForm.h"
#include "RegForm.h"

using namespace System;
using namespace System::Windows::Forms;

void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	User^ user = nullptr;
	while (true) {
		kursach01::LoginForm loginForm;
		loginForm.ShowDialog();

		if (loginForm.switchToRegister) {
			kursach01::RegForm regForm;
			regForm.ShowDialog();

			if (regForm.switchToLogin) continue;
			else{
				user = loginForm.user;
				break;
			}
		}
		else{
			user = loginForm.user;
			break;
		}
		
	}
	
	if (user != nullptr){	
		kursach01::MainForm mainForm(user);
		Application::Run(% mainForm);
	}
	else
		MessageBox::Show("Ok", "Ok", MessageBoxButtons::OK);
	

}