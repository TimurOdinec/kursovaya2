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
void WorkWithFiles::createFile(std::string nameFile)
{
	std::ofstream fileOut;
	if (nameFile == "users")
	{
		fileOut.open("users.txt");		//создание или перезапись существующего файла
		fileOut << "1;admin;1;1;@dmin";	//запись строки:id=1;login=admin;
	}
	if (nameFile == "carpark")
	{
		fileOut.open("carpark.txt");	//создание или перезапись существующего файла
		fileOut << "1;1;MAN;1.5";				//запись строки:id=1;login=admin;
	}
	fileOut.close();
}
bool WorkWithFiles::isExistsFile(std::string nameFile)
{
	bool isExistsFile = false;
	std::string fileName = "";
	if (nameFile == "users")
	{
		fileName = "users.txt";
	}
	if (nameFile == "carpark")
	{
		fileName = "carpark.txt";
	}
	std::ifstream fileIn(fileName);
	if (fileIn.is_open())
	{
		isExistsFile = true;
		fileIn.close();
	}
	return isExistsFile;
}
void WorkWithFiles::readFile(std::string nameFile)
{
	std::string fileName = "";
	if (nameFile == "users")
	{
		fileName = "users.txt";
	}
	if (nameFile == "carpark")
	{
		fileName = "carpark.txt";
	}
	std::ifstream fileIn(fileName);    //открыли файл для чтения повторно
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
int WorkWithFiles::countRowInFile(std::string nameFile)
{
	int countRowInFile = 0;
	std::string fileName = "";
	if (nameFile == "users")
	{
		fileName = "users.txt";
	}
	if (nameFile == "carpark")
	{
		fileName = "carpark.txt";
	}
	std::ifstream fileIn(fileName);    //открыли файл для чтения повторно
	while (!fileIn.eof())
	{
		std::string temp = "";
		std::getline(fileIn, temp); //считали строку из файла
		countRowInFile++;
	}
	fileIn.close();
	return countRowInFile;
}
std::vector<std::string> WorkWithFiles::arrString(std::string nameFile)
{
	std::vector<std::string> r;
	std::string fileName = "";
	if (nameFile == "users")
	{
		fileName = "users.txt";
	}
	if (nameFile == "carpark")
	{
		fileName = "carpark.txt";
	}
	std::ifstream fileIn(fileName);    //открыли файл для чтения повторно
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
void WorkWithFiles::saveDataFile(std::vector<std::string> vr, std::string nameFile)
{
	//запись в файл
	//создаем объект для записи в файл
	std::ofstream fileOut;
	std::string fileName = "";
	if (nameFile == "users")
	{
		fileName = "users.txt";
	}
	if (nameFile == "carpark")
	{
		fileName = "carpark.txt";
	}
	fileOut.open(fileName);   //создание или перезапись существующего файла
	for (std::string rowData : vr)
	{
		if (!rowData.empty())
		{
			fileOut << rowData;
		}
	}
	
	fileOut.close();            //закрываем файл
}