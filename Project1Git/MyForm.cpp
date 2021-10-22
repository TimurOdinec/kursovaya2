#include <Windows.h>

#include "MyForm.h"
#include "MyForm1.h"
#include "MyForm2.h"
#include "User.h"

using namespace Project1Git;

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm);

	/*User *user = new User();
	std::string login = "after run myForm";
	user->setLogin(login);
	System::String^ t = gcnew String((user->getLogin()).data());
	MessageBox::Show(t);*/
	
	return 0;
}
