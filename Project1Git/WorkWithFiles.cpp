#include <fstream> //для работы с файлами
#include <string>

#include "WorkWithFiles.h"

using namespace Project1Git;

/// <summary>
/// конструктор
/// </summary>
WorkWithFiles::WorkWithFiles()
{

}
/// <summary>
/// метод создания файла с первой записью (в зависимости от параметра - users.txt или carpark.txt)
/// </summary>
/// <param name="nameFile"></param>
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
		fileOut << "1;1;MAN;1.5";		//запись строки:id=1;login=admin;
	}
	fileOut.close();
}
/// <summary>
/// метод проверки существования файла (в зависимости от параметра - users.txt или carpark.txt)
/// </summary>
/// <param name="nameFile"></param>
/// <returns></returns>
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
/// <summary>
/// метод считывания строк из файла (в зависимости от параметра - users.txt или carpark.txt)
/// </summary>
/// <param name="nameFile"></param>
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
	std::ifstream fileIn(fileName);	//открыли файл для чтения повторно
	int i = 0;
	while (!fileIn.eof())
	{
		std::string temp = "";
		std::getline(fileIn, temp); //считали строку из файла
		i++;
	}
	fileIn.close();
}
/// <summary>
/// метод подсчета строк в файле (в зависимости от параметра - users.txt или carpark.txt)
/// </summary>
/// <param name="nameFile"></param>
/// <returns></returns>
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
	std::ifstream fileIn(fileName);	//открыли файл для чтения повторно
	while (!fileIn.eof())
	{
		std::string temp = "";
		std::getline(fileIn, temp); //считали строку из файла
		countRowInFile++;
	}
	fileIn.close();
	return countRowInFile;
}
/// <summary>
/// метод заполнения вектора строк данными из файлов (в зависимости от параметра - users.txt или carpark.txt)
/// </summary>
/// <param name="nameFile"></param>
/// <returns></returns>
std::vector<std::string> WorkWithFiles::arrString(std::string nameFile)
{
	std::vector<std::string> arrStr;
	std::string fileName = "";
	if (nameFile == "users")
	{
		fileName = "users.txt";
	}
	if (nameFile == "carpark")
	{
		fileName = "carpark.txt";
	}
	if (nameFile == "usersTemp")
	{
		fileName = "usersTemp.txt";
	}
	if (nameFile == "carparkTemp")
	{
		fileName = "carparkTemp.txt";
	}
	std::ifstream fileIn(fileName);	//открыли файл для чтения повторно
	while (!fileIn.eof())
	{
		std::string temp = "";
		std::getline(fileIn, temp); //считали строку из файла
		if (!temp.empty())
		{
			arrStr.push_back(temp);
		}
	}
	fileIn.close();

	return arrStr;
}
/// <summary>
/// метод сохранения данных из вектора строк в файл (в зависимости от параметра - users.txt или carpark.txt)
/// </summary>
/// <param name="vr"></param>
/// <param name="nameFile"></param>
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
	fileOut.open(fileName); //создание или перезапись существующего файла
	for (std::string rowData : vr)
	{
		if (!rowData.empty())
		{
			fileOut << rowData;
		}
	}
	fileOut.close();        //закрываем файл
}
void WorkWithFiles::createAndSaveTempFile(std::string nameFile)
{
	std::vector<std::string> arrStr = arrString(nameFile);
	int sizeArrStr = arrStr.size();
	//создаем объект для записи в файл
	std::ofstream fileOut;
	std::string fileName = "";
	if (nameFile == "users")
	{
		fileName = "usersTemp.txt";
	}
	if (nameFile == "carpark")
	{
		fileName = "carparkTemp.txt";
	}
	if (nameFile == "usersTemp")
	{
		fileName = "users.txt";
	}
	if (nameFile == "carparkTemp")
	{
		fileName = "carpark.txt";
	}
	fileOut.open(fileName); //создание или перезапись существующего файла
	int countRow = 0;
	for (std::string rowData : arrStr)
	{
		if (!rowData.empty())
		{
			countRow ++;
			if (countRow < sizeArrStr)
			{
				rowData += "\n";
			}
			fileOut << rowData;
		}
	}
	fileOut.close();        //закрываем файл
}

/// <summary>
/// деструктор
/// </summary>
WorkWithFiles::~WorkWithFiles()
{

}