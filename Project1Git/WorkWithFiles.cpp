#include <fstream> //��� ������ � �������
#include <string>

#include "WorkWithFiles.h"

using namespace Project1Git;

/// <summary>
/// �����������
/// </summary>
WorkWithFiles::WorkWithFiles()
{

}
/// <summary>
/// ����� �������� ����� � ������ ������� (� ����������� �� ��������� - users.txt ��� carpark.txt)
/// </summary>
/// <param name="nameFile"></param>
void WorkWithFiles::createFile(std::string nameFile)
{
	std::ofstream fileOut;
	if (nameFile == "users")
	{
		fileOut.open("users.txt");		//�������� ��� ���������� ������������� �����
		fileOut << "1;admin;1;1;@dmin";	//������ ������:id=1;login=admin;
	}
	if (nameFile == "carpark")
	{
		fileOut.open("carpark.txt");	//�������� ��� ���������� ������������� �����
		fileOut << "1;1;MAN;1.5";		//������ ������:id=1;login=admin;
	}
	fileOut.close();
}
/// <summary>
/// ����� �������� ������������� ����� (� ����������� �� ��������� - users.txt ��� carpark.txt)
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
/// ����� ���������� ����� �� ����� (� ����������� �� ��������� - users.txt ��� carpark.txt)
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
	std::ifstream fileIn(fileName);	//������� ���� ��� ������ ��������
	int i = 0;
	while (!fileIn.eof())
	{
		std::string temp = "";
		std::getline(fileIn, temp); //������� ������ �� �����
		i++;
	}
	fileIn.close();
}
/// <summary>
/// ����� �������� ����� � ����� (� ����������� �� ��������� - users.txt ��� carpark.txt)
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
	std::ifstream fileIn(fileName);	//������� ���� ��� ������ ��������
	while (!fileIn.eof())
	{
		std::string temp = "";
		std::getline(fileIn, temp); //������� ������ �� �����
		countRowInFile++;
	}
	fileIn.close();
	return countRowInFile;
}
/// <summary>
/// ����� ���������� ������� ����� ������� �� ������ (� ����������� �� ��������� - users.txt ��� carpark.txt)
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
	std::ifstream fileIn(fileName);	//������� ���� ��� ������ ��������
	while (!fileIn.eof())
	{
		std::string temp = "";
		std::getline(fileIn, temp); //������� ������ �� �����
		if (!temp.empty())
		{
			arrStr.push_back(temp);
		}
	}
	fileIn.close();

	return arrStr;
}
/// <summary>
/// ����� ���������� ������ �� ������� ����� � ���� (� ����������� �� ��������� - users.txt ��� carpark.txt)
/// </summary>
/// <param name="vr"></param>
/// <param name="nameFile"></param>
void WorkWithFiles::saveDataFile(std::vector<std::string> vr, std::string nameFile)
{
	//������ � ����
	//������� ������ ��� ������ � ����
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
	fileOut.open(fileName); //�������� ��� ���������� ������������� �����
	for (std::string rowData : vr)
	{
		if (!rowData.empty())
		{
			fileOut << rowData;
		}
	}
	fileOut.close();        //��������� ����
}
void WorkWithFiles::createAndSaveTempFile(std::string nameFile)
{
	std::vector<std::string> arrStr = arrString(nameFile);
	int sizeArrStr = arrStr.size();
	//������� ������ ��� ������ � ����
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
	fileOut.open(fileName); //�������� ��� ���������� ������������� �����
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
	fileOut.close();        //��������� ����
}

/// <summary>
/// ����������
/// </summary>
WorkWithFiles::~WorkWithFiles()
{

}