#include <Windows.h>
#include <msclr\marshal_cppstd.h>

#include "MyForm.h"
#include "MyForm1.h"
#include "MyForm2.h"
#include "User.h"
#include "ListUsers.h"
#include "Authorization.h"


using namespace Project1Git;

void MyForm1::checkUser(System::String^ login)
{
	//вывод сообщения
	/*std::string message = "after run button1_Click";
	System::String^ mes = gcnew String(message.data());
	MessageBox::Show(mes);
	*/

	//ListUsers *listUsers = new ListUsers();

	msclr::interop::marshal_context context;
	std::string loginString = context.marshal_as<std::string>(login);
	Authorization authorization(loginString);
	if (authorization.checkCurrentUser())
	{
		MessageBox::Show("checkCurrentUser - TRUE");
	}
	else
	{
		MessageBox::Show("checkCurrentUser - FALSE");
	}

    /*User* user = new User();
	msclr::interop::marshal_context context;
	std::string standardString = context.marshal_as<std::string>(login);
	user->setLogin(standardString);
	System::String^ t = gcnew String((user->getLogin()).data());
	MessageBox::Show(t);*/
}


