#include "Carpark.h"
#include "WorkWithFiles.h"

using namespace Project1Git;

/// <summary>
/// �����������
/// </summary>
Carpark::Carpark()
{
	//������� ������ ������ � �������
	WorkWithFiles workWithFile;
	//���� ����� � ������� �� ��������� ���, �� ������� ���
	if (!workWithFile.isExistsFile("carpark"))
	{
		//������� ����
		MessageBox::Show("File not found");
		workWithFile.createFile("carpark");
		MessageBox::Show("File created");
	}
	//��������� ����
	workWithFile.readFile("carpark");
	//�������� ���-�� ������� � ����� ���������
	size = workWithFile.countRowInFile("carpark");
	//������� ������ �������� - ����
	car = new Car[size];
	//��������� ������ �� ����� � ������ - ���������
	std::vector<std::string> vr = workWithFile.arrString("carpark");
	//������ ������� ���� (�� ����� id !!!)
	int ind = 0;
	//��������� ������� ������� - ���� ��� ���������
	for (std::string rowData : vr)
	{
		//����� ������ �� ����������� - ";"
		std::string tempRow = "";
		//��������� ������ �� �������
		if (!rowData.empty())
		{
			int previousPosition = 0;
			//���-�� ���������� � �����: id, conditionCar, typeCar, capacityCar - 4
			int countParameters = 4;
			//������ ������ ����� �� ������������ ����������� �� ������ �����
			for (int j = 0; j < countParameters; j++)
			{
				int newPosition = rowData.find(";", previousPosition);     //���������� ������ ��������� ������� ";"
				tempRow = rowData.substr(previousPosition, newPosition - previousPosition);   //�������� �� ������ ��������� ������� � ������� previousPosition, � ����������� �������� � ��� (newPosition - previousPosition)
				previousPosition = newPosition + 1;                         //��������� � ���������� ���������
				if (!tempRow.empty())
				{
					//1 ����� ������ ������� � �������� id ����
					if (j == 0)
					{
						car[ind].setId(std::stoi(tempRow)); //��������� ������ � �����
					}
					//2 ����� - �������� ��� ��������� ����
					if (j == 1)
					{
						car[ind].setConditionCar(std::stoi(tempRow));
					}
					//3 ����� - �������� ��� ����
					if (j == 2)
					{
						car[ind].setTypeCar(tempRow);
					}
					//4 ����� - �������� ���������������� ���� 
					if (j == 3)
					{
						car[ind].setCapacityCar(std::stod(tempRow));//��������� ������ � double
					}
				}
			}
		}
		ind++;
	}
}
/// <summary>
/// �������� ���-�� ������� � ��������� (� �����)
/// </summary>
/// <returns></returns>
int Carpark::getSize()
{
	return this->size;
}
/// <summary>
/// �������� id ���� �� ����������� ������� (������ ������-������ � �����)
/// </summary>
/// <param name="index"></param>
/// <returns></returns>
int Carpark::getCarIndex(int index)
{
	return this->car[index].getId();
}
/// <summary>
/// �������� ������-���� �� ����������� index
/// </summary>
/// <param name="index"></param>
/// <returns></returns>
Car Carpark::getCarByIndex(int index)
{
	Car car(-1, -1, "", -1);	//������� ������ ���� �� ���������
	//�������� �� ������� ���� �� ���������
	for (int i = 0; i < this->size; i++)
	{
		int idRow = this->car[i].getId();
		//���������� ����, ���� ������ id ������� � ���������� index
		if (idRow == index)
		{
			return this->car[i];
		}
	}
	return car;
}
/// <summary>
/// �������� ����� id ��� ���������� ���� (��������� �� ������� ������������ id)
/// </summary>
/// <returns></returns>
int Carpark::getNewId()
{
	//�������� ��������� id �� ������� ����
	int lastId = car[size - 1].getId();
	//�������� ��������� ���������� id+1
	return lastId + 1;
}
/// <summary>
/// �������� ����� ���� � �������� (���� ������ �� �����������)
/// </summary>
/// <param name="car"></param>
void Carpark::addNewCar(Car car)
{
	//�������� ������ ��������� �������  �� ������� �������� - ���� �� ���������
	std::vector<std::string> vr;
	//���� �� ������� ����
	for (int i = 0; i < this->size; i++)
	{
		std::string row = std::to_string(this->car[i].getId()) + ";" +
			std::to_string(this->car[i].getConditionCar()) + ";" +
			this->car[i].getTypeCar() + ";" +
			std::to_string(this->car[i].getCapacityCar()) + "\n";
		vr.push_back(row);
	}
	//���������� ����� ������ ���� ������� ��������� ������� � ������
	std::string newRow = std::to_string(car.getId()) + ";" +
		std::to_string(car.getConditionCar()) + ";" +
		car.getTypeCar() + ";" +
		std::to_string(car.getCapacityCar());
	vr.push_back(newRow);
	//�������� ������ ������ � �������
	WorkWithFiles workWithFile;
	//������� ������ ������� � ���� ���������
	workWithFile.saveDataFile(vr, "carpark");
}
/// <summary>
/// ������� ���� �� ��������� �� id (�� �����)
/// </summary>
/// <param name="indexCar"></param>
void Carpark::deleteCarById(int indexCar)
{
	//�������� ������ ��������� �������  �� ������� �������� - ���� �� ���������
	std::vector<std::string> vr;
	//���� �� ������� ����
	for (int i = 0; i < this->size; i++)
	{
		int idCar = this->car[i].getId();
		//���� id ���� ��������� � ���������� ��������, �� ��������� ��� ������ � ������
		if (idCar == indexCar)
		{
			continue;
		}
		std::string row = std::to_string(this->car[i].getId()) + ";" +
			std::to_string(this->car[i].getConditionCar()) + ";" +
			this->car[i].getTypeCar() + ";" +
			std::to_string(this->car[i].getCapacityCar());
		//���� ������ �� �������� ���������, �� ��������� � ����� ������� �� ����� ������
		if (i != (this->size - 1))
		{
			row += "\n";
		}
		vr.push_back(row);
	}
	//�������� ������ ������ � �������
	WorkWithFiles workWithFile;
	//������� ������ ������� � ���� ���������
	workWithFile.saveDataFile(vr, "carpark");
}
/// <summary>
/// ������������� ���� (������� ������� ��� �������� ������)
/// </summary>
/// <param name="car"></param>
void Carpark::updateCar(Car car)
{
	int idCarUpd = car.getId();	//������� id �������������� ����
	//�������� ������ ��������� �������  �� ������� �������� - ���� �� ���������
	std::vector<std::string> vr;
	//���� �� ������� ����
	for (int i = 0; i < this->size; i++)
	{
		int idCar = this->car[i].getId();
		std::string row = "";
		//���� id ���� ��������� � ������������� ����, �� �������������� ����� ������ � ������
		//����� ����� � ������ ������ ������
		if (idCar == idCarUpd)
		{
			row = std::to_string(car.getId()) + ";" +
				std::to_string(car.getConditionCar()) + ";" +
				car.getTypeCar() + ";" +
				std::to_string(car.getCapacityCar());
		}
		else
		{
			row = std::to_string(this->car[i].getId()) + ";" +
				std::to_string(this->car[i].getConditionCar()) + ";" +
				this->car[i].getTypeCar() + ";" +
				std::to_string(this->car[i].getCapacityCar());
		}
		//���� ������ �� �������� ���������, �� ��������� � ����� ������� �� ����� ������
		if (i != (this->size - 1))
		{
			row += "\n";
		}
		vr.push_back(row);
	}
	//�������� ������ ������ � �������
	WorkWithFiles workWithFile;
	//������� ������ ������� � ���� ���������
	workWithFile.saveDataFile(vr, "carpark");
}
/// <summary>
/// ����� ���������� ���� �� ���������
/// </summary>
void Carpark::sortByConditionCar()
{
	//��������� �������� ���������� ���������, ��������� ������ ���� �� ���� ���������
	for (int i = 1; i < this->size; i++)
	{
		for (int j = i; j > 0 && car[j - 1].getConditionCar() > car[j].getConditionCar(); j--)
		{
			Car carTemp = car[j - 1];
			car[j - 1] = car[j];
			car[j] = carTemp;
		}
	}
}
/// <summary>
/// ����� ���������� ���� �� ����
/// </summary>
void Carpark::sortByTypeCar()
{
	//��������� �������� ���������� ���������, ��������� ������ ���� �� ����
	for (int i = 1; i < this->size; i++)
	{
		for (int j = i; j > 0 && car[j - 1].getTypeCar() > car[j].getTypeCar(); j--)
		{
			Car carTemp = car[j - 1];
			car[j - 1] = car[j];
			car[j] = carTemp;
		}
	}
}
/// <summary>
/// ����� ���������� ���� �� ����������������
/// </summary>
void Carpark::sortByCapacityCar()
{
	//��������� �������� ���������� ���������, ��������� ������ ���� �� ����������������
	for (int i = 1; i < this->size; i++)
	{
		for (int j = i; j > 0 && car[j - 1].getCapacityCar() > car[j].getCapacityCar(); j--)
		{
			Car carTemp = car[j - 1];
			car[j - 1] = car[j];
			car[j] = carTemp;
		}
	}
}
/// <summary>
/// ����������
/// </summary>
Carpark::~Carpark()
{

}
