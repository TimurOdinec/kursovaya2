#pragma once

#include <string>
#include <vector>

namespace Project1Git
{
	using namespace System::Windows::Forms;
	/// <summary>
	/// ����� ��� �������� ������� - ��� ������ � �������
	/// </summary>
	public class WorkWithFiles
	{
	public:
		WorkWithFiles();											//�����������
		void createFile(std::string);								//����� �������� ����� � ������ ������� (� ����������� �� ��������� - users.txt ��� carpark.txt)
		bool isExistsFile(std::string);								//����� �������� ������������� ����� (� ����������� �� ��������� - users.txt ��� carpark.txt)
		void readFile(std::string);									//����� ���������� ����� �� ����� (� ����������� �� ��������� - users.txt ��� carpark.txt)
		int countRowInFile(std::string);							//����� �������� ����� � ����� (� ����������� �� ��������� - users.txt ��� carpark.txt)
		std::vector<std::string> arrString(std::string);			//����� ���������� ������� ����� ������� �� ������ (� ����������� �� ��������� - users.txt ��� carpark.txt)
		void saveDataFile(std::vector<std::string>, std::string);	//����� ���������� ������ �� ������� ����� � ���� (� ����������� �� ��������� - users.txt ��� carpark.txt)
		void createAndSaveTempFile(std::string);
		~WorkWithFiles();											//����������
	};
}