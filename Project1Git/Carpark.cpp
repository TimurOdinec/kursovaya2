#include "Carpark.h"
#include "WorkWithFiles.h"


using namespace Project1Git;

Carpark::Carpark()
{
	//MessageBox::Show("ListUsers()");
	WorkWithFiles workWithFile;
	if (!workWithFile.isExistsFile("carpark"))
	{
		//создаем файл
		MessageBox::Show("File not found");
		workWithFile.createFile("carpark");
		MessageBox::Show("File created");
	}
	//считываем файл
	workWithFile.readFile("carpark");
	size = workWithFile.countRowInFile("carpark");
	car = new Car[size];
	std::vector<std::string> vr = workWithFile.arrString("carpark");
	int ind = 0;

	for (std::string rowData : vr)
	{
		//режем строку по ;
		std::string tempRow = "";
		if (!rowData.empty())
		{
			int previousPosition = 0;
			//кол-во параметров в файле: id, conditionCar, typeCar, capacityCar
			int countParameters = 4;
			//каждую строку режем по специальному разделителю
			for (int j = 0; j < countParameters; j++)
			{
				int newPosition = rowData.find(";", previousPosition);     //определяем индекс вхождения символа ";"
				tempRow = rowData.substr(previousPosition, newPosition - previousPosition);   //вырезаем из строки подстроку начиная с позиции previousPosition, с количеством символов в ней (newPosition - previousPosition)
				previousPosition = newPosition + 1;                         //переходим к следующему вхождению
				if (!tempRow.empty())
				{
					if (j == 0)
					{
						car[ind].setId(std::stoi(tempRow)); //переводим строку в число
					}
					if (j == 1)
					{
						car[ind].setConditionCar(std::stoi(tempRow));
					}
					if (j == 2)
					{
						car[ind].setTypeCar(tempRow);
					}
					if (j == 3)
					{
						car[ind].setCapacityCar(std::stod(tempRow));//переводим строку в double
					}
				}
			}
		}
		ind++;
	}
}
int Carpark::getSize()
{
	return this->size;
}
int Carpark::getCarIndex(int index)
{
	return this->car[index].getId();
}
Car Carpark::getCarByIndex(int index)
{
	Car car(-1, -1, "", -1);
	//System::String^ tt = gcnew System::String(std::to_string(index).data());
	//MessageBox::Show("getUserByIndex tt : " + tt);
	for (int i = 0; i < this->size; i++)
	{
		int idRow = this->car[i].getId();
		//System::String^ tt = gcnew System::String(std::to_string(idRow).data());
		//MessageBox::Show("tt : " + tt);
		if (idRow == index)
		{
			return this->car[i];
		}
	}
	return car;
	//return this->user[index];
}
int Carpark::getNewId()
{
	int lastId = car[size - 1].getId();
	return lastId + 1;
}
void Carpark::addNewCar(Car car)
{
	std::vector<std::string> vr;
	for (int i = 0; i < this->size; i++)
	{
		std::string row = std::to_string(this->car[i].getId()) + ";" +
			std::to_string(this->car[i].getConditionCar()) + ";" +
			this->car[i].getTypeCar() + ";" +
			std::to_string(this->car[i].getCapacityCar()) + "\n";
		vr.push_back(row);
	}
	std::string newRow = std::to_string(car.getId()) + ";" +
		std::to_string(car.getConditionCar()) + ";" +
		car.getTypeCar() + ";" +
		std::to_string(car.getCapacityCar());
	vr.push_back(newRow);
	WorkWithFiles workWithFile;
	workWithFile.saveDataFile(vr, "carpark");
}
Car Carpark::getUserByIndex(int index)
{
	Car car(-1, -1, "", -1);
	//System::String^ tt = gcnew System::String(std::to_string(index).data());
	//MessageBox::Show("getUserByIndex tt : " + tt);
	for (int i = 0; i < this->size; i++)
	{
		int idRow = this->car[i].getId();
		//System::String^ tt = gcnew System::String(std::to_string(idRow).data());
		//MessageBox::Show("tt : " + tt);
		if (idRow == index)
		{
			return this->car[i];
		}
	}
	return car;
	//return this->user[index];
}
void Carpark::deleteCarById(int indexCar)
{
	std::vector<std::string> vr;
	for (int i = 0; i < this->size; i++)
	{
		int idCar = this->car[i].getId();
		if (idCar == indexCar)
		{
			continue;
		}
		std::string row = std::to_string(this->car[i].getId()) + ";" +
			std::to_string(this->car[i].getConditionCar()) + ";" +
			this->car[i].getTypeCar() + ";" +
			std::to_string(this->car[i].getCapacityCar());
		if (i != (this->size - 1))
		{
			row += "\n";
		}
		vr.push_back(row);
	}
	WorkWithFiles workWithFile;
	workWithFile.saveDataFile(vr, "carpark");
}
void Carpark::updateCar(Car car)
{
	std::vector<std::string> vr;
	for (int i = 0; i < this->size; i++)
	{
		int idCar = this->car[i].getId();
		int idCarUpd = car.getId();
		std::string row = "";
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

		if (i != (this->size - 1))
		{
			row += "\n";
		}
		vr.push_back(row);
	}
	WorkWithFiles workWithFile;
	workWithFile.saveDataFile(vr, "carpark");
}
void Carpark::sortByConditionCar()
{
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
void Carpark::sortByTypeCar()
{
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
void Carpark::sortByCapacityCar()
{
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
Carpark::~Carpark()
{

}
