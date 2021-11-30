#pragma once
#include <string>
#include <vector>

namespace Project1Git
{
	using namespace System::Windows::Forms;

	class WorkWithFiles
	{
	public:
		//конструктор
		WorkWithFiles();
		//деструктор
		~WorkWithFiles();
		void createFile(std::string);
		bool isExistsFile(std::string);
		void readFile(std::string);
		int countRowInFile(std::string);
		std::vector<std::string> arrString(std::string);
		void saveDataFile(std::vector<std::string>, std::string);
	};

}