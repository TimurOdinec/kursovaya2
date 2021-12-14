#pragma once

#include <string>
#include <vector>

namespace Project1Git
{
	using namespace System::Windows::Forms;
	/// <summary>
	/// класс для создания объекта - для работы с файлами
	/// </summary>
	public class WorkWithFiles
	{
	public:
		WorkWithFiles();											//конструктор
		void createFile(std::string);								//метод создания файла с первой записью (в зависимости от параметра - users.txt или carpark.txt)
		bool isExistsFile(std::string);								//метод проверки существования файла (в зависимости от параметра - users.txt или carpark.txt)
		void readFile(std::string);									//метод считывания строк из файла (в зависимости от параметра - users.txt или carpark.txt)
		int countRowInFile(std::string);							//метод подсчета строк в файле (в зависимости от параметра - users.txt или carpark.txt)
		std::vector<std::string> arrString(std::string);			//метод заполнения вектора строк данными из файлов (в зависимости от параметра - users.txt или carpark.txt)
		void saveDataFile(std::vector<std::string>, std::string);	//метод сохранения данных из вектора строк в файл (в зависимости от параметра - users.txt или carpark.txt)
		void createAndSaveTempFile(std::string);
		~WorkWithFiles();											//деструктор
	};
}