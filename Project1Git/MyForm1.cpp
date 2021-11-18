#include <Windows.h>
#include <msclr\marshal_cppstd.h>

#include "MyForm.h"
#include "MyForm1.h"
#include "MyForm2.h"
#include "User.h"
#include "ListUsers.h"
#include "Authorization.h"


using namespace Project1Git;

void MyForm1::checkUser(System::String^ login, System::String^ password)
{
	//вывод сообщения
	/*std::string message = "after run button1_Click";
	System::String^ mes = gcnew String(message.data());
	MessageBox::Show(mes);
	*/

	//ListUsers *listUsers = new ListUsers();

	msclr::interop::marshal_context context;
	std::string loginString = context.marshal_as<std::string>(login);
	std::string passwordString = context.marshal_as<std::string>(password);

	Authorization authorization(loginString, passwordString);

	if (authorization.checkCurrentUser())
	{
		MessageBox::Show("checkCurrentUser - TRUE");
		User currentUser = authorization.getCurrentUser();
		//std::string curLogin = currentUser->getLogin();

		std::string t = "id=" + std::to_string(currentUser.getId()) + 
						"; log=" + currentUser.getLogin() + 
						"; type=" + std::to_string(currentUser.getUserType()) +
						"; password=" + currentUser.getPassword();
		System::String^ tt = gcnew System::String(t.data());
		MessageBox::Show("authorization::tt : " + tt);
		currentLogin = gcnew System::String(currentUser.getLogin().data());
		currentType = currentUser.getUserType();

	}
	else
	{
		MessageBox::Show("checkCurrentUser - FALSE");
		MessageBox::Show("Ваша учетная запись не зарегистрирована.");
	}

    /*User* user = new User();
	msclr::interop::marshal_context context;
	std::string standardString = context.marshal_as<std::string>(login);
	user->setLogin(standardString);
	System::String^ t = gcnew String((user->getLogin()).data());
	MessageBox::Show(t);*/
}


