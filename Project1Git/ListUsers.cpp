#include <string>
#include "ListUsers.h"

using namespace ProjectGit1;

ListUsers::ListUsers()
{

}
ListUsers::~ListUsers()
{

}
User ListUsers::getUserByLogin(std::string login)
{
	return *user;
}