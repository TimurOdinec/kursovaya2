#pragma once
#include <string>
#include <vector>

namespace Project1Git
{
	using namespace System::Windows::Forms;

	class WorkWithFiles
	{
	public:
		//�����������
		WorkWithFiles();
		//����������
		~WorkWithFiles();
		void createFile();
		bool isExistsFile();
		void readFile();
		int countRowInFile();
		std::vector<std::string> arrString();
		void saveDataFile(std::vector<std::string>);
	};

}