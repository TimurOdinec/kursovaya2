#include <fstream> //для работы с файлами
#include <string>
#include "WorkWithFiles.h"


using namespace Project1Git;

WorkWithFiles::WorkWithFiles()
{

}
WorkWithFiles::~WorkWithFiles()
{

}
void WorkWithFiles::createFile()
{
	std::ofstream fileOut;
	fileOut.open("users.txt");		//создание или перезапись существующего файла
	fileOut << "1;admin;1;@dmin";	//запись строки:id=1;login=admin;
	fileOut.close();
}
bool WorkWithFiles::isExistsFile()
{
	bool isExistsFile = false;
	std::ifstream fileIn("users.txt");
	if (fileIn.is_open())
	{
		isExistsFile = true;
		fileIn.close();
	}
	return isExistsFile;
}
void WorkWithFiles::readFile()
{
	std::ifstream fileIn("users.txt");    //открыли файл для чтения повторно
	int i = 0;
	//while (!fileIn.eof() && i < 3)
	while (!fileIn.eof())
	{
		std::string temp = "";
		std::getline(fileIn, temp); //считали строку из файла
		//System::String^ t = gcnew System::String(temp.data());
		//MessageBox::Show(t);
		i++;
	}
	fileIn.close();
}
int WorkWithFiles::countRowInFile()
{
	int countRowInFile = 0;
	std::ifstream fileIn("users.txt");    //открыли файл для чтения повторно
	while (!fileIn.eof())
	{
		std::string temp = "";
		std::getline(fileIn, temp); //считали строку из файла
		countRowInFile++;
	}
	fileIn.close();
	return countRowInFile;
}
std::vector<std::string> WorkWithFiles::arrString()
{
	std::vector<std::string> r;
	
	std::ifstream fileIn("users.txt");    //открыли файл для чтения повторно
	//while (!fileIn.eof() && i < 3)
	while (!fileIn.eof())
	{
		std::string temp = "";
		std::getline(fileIn, temp); //считали строку из файла
		r.push_back(temp);
	}
	fileIn.close();

	return r;
}
void WorkWithFiles::saveDataFile(std::vector<std::string> vr)
{
	//запись в файл
	//создаем объект для записи в файл
	std::ofstream fileOut;
	fileOut.open("users.txt");   //создание или перезапись существующего файла
	for (std::string rowData : vr)
	{
		if (!rowData.empty())
		{
			fileOut << rowData;
		}
	}
	
	fileOut.close();            //закрываем файл
}