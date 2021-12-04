#include "Carpark.h"
#include "WorkWithFiles.h"

using namespace Project1Git;

/// <summary>
/// конструктор
/// </summary>
Carpark::Carpark()
{
	//создаем объект работы с файлами
	WorkWithFiles workWithFile;
	//если файла с данными по автопарку нет, то создаем его
	if (!workWithFile.isExistsFile("carpark"))
	{
		//создаем файл
		MessageBox::Show("File not found");
		workWithFile.createFile("carpark");
		MessageBox::Show("File created");
	}
	//считываем файл
	workWithFile.readFile("carpark");
	//получаем кол-во записей в файле автопарка
	size = workWithFile.countRowInFile("carpark");
	//создаем массив объектов - авто
	car = new Car[size];
	//считываем данные из файла в вектор - построчно
	std::vector<std::string> vr = workWithFile.arrString("carpark");
	//индекс объекта авто (НЕ РАВЕН id !!!)
	int ind = 0;
	//заполняем данными объекты - авто для автопарка
	for (std::string rowData : vr)
	{
		//режем строку по разделителю - ";"
		std::string tempRow = "";
		//проверяем строку на пустоту
		if (!rowData.empty())
		{
			int previousPosition = 0;
			//кол-во параметров в файле: id, conditionCar, typeCar, capacityCar - 4
			int countParameters = 4;
			//каждую строку режем по специальному разделителю на четыре части
			for (int j = 0; j < countParameters; j++)
			{
				int newPosition = rowData.find(";", previousPosition);     //определяем индекс вхождения символа ";"
				tempRow = rowData.substr(previousPosition, newPosition - previousPosition);   //вырезаем из строки подстроку начиная с позиции previousPosition, с количеством символов в ней (newPosition - previousPosition)
				previousPosition = newPosition + 1;                         //переходим к следующему вхождению
				if (!tempRow.empty())
				{
					//1 часть строки заносим в свойство id авто
					if (j == 0)
					{
						car[ind].setId(std::stoi(tempRow)); //переводим строку в число
					}
					//2 часть - свойство код состояния авто
					if (j == 1)
					{
						car[ind].setConditionCar(std::stoi(tempRow));
					}
					//3 часть - свойство тип авто
					if (j == 2)
					{
						car[ind].setTypeCar(tempRow);
					}
					//4 часть - свойство грузоподъемность авто 
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
/// <summary>
/// получить кол-во записей в автопарке (в файле)
/// </summary>
/// <returns></returns>
int Carpark::getSize()
{
	return this->size;
}
/// <summary>
/// получить id авто по переданному индексу (номеру строки-записи в файле)
/// </summary>
/// <param name="index"></param>
/// <returns></returns>
int Carpark::getCarIndex(int index)
{
	return this->car[index].getId();
}
/// <summary>
/// получить объект-авто по переданному index
/// </summary>
/// <param name="index"></param>
/// <returns></returns>
Car Carpark::getCarByIndex(int index)
{
	Car car(-1, -1, "", -1);	//создаем объект авто по умолчанию
	//проходим по массиву авто из автопарка
	for (int i = 0; i < this->size; i++)
	{
		int idRow = this->car[i].getId();
		//возвращаем авто, если совпал id объекта и переданный index
		if (idRow == index)
		{
			return this->car[i];
		}
	}
	return car;
}
/// <summary>
/// получить новый id для добавления авто (следующий за текущим максимальным id)
/// </summary>
/// <returns></returns>
int Carpark::getNewId()
{
	//получаем последний id из массива авто
	int lastId = car[size - 1].getId();
	//передаем последний полученный id+1
	return lastId + 1;
}
/// <summary>
/// добавить новый авто в автопарк (файл данных по автомобилям)
/// </summary>
/// <param name="car"></param>
void Carpark::addNewCar(Car car)
{
	//заполним вектор построчно данными  из массива объектов - авто из автопарка
	std::vector<std::string> vr;
	//идем по массиву авто
	for (int i = 0; i < this->size; i++)
	{
		std::string row = std::to_string(this->car[i].getId()) + ";" +
			std::to_string(this->car[i].getConditionCar()) + ";" +
			this->car[i].getTypeCar() + ";" +
			std::to_string(this->car[i].getCapacityCar()) + "\n";
		vr.push_back(row);
	}
	//переданный новый объект авто запишем последней строкой в вектор
	std::string newRow = std::to_string(car.getId()) + ";" +
		std::to_string(car.getConditionCar()) + ";" +
		car.getTypeCar() + ";" +
		std::to_string(car.getCapacityCar());
	vr.push_back(newRow);
	//создадим объект работы с файлами
	WorkWithFiles workWithFile;
	//запишем данные вектора в файл автопарка
	workWithFile.saveDataFile(vr, "carpark");
}
/// <summary>
/// удалить авто из автопарка по id (из файла)
/// </summary>
/// <param name="indexCar"></param>
void Carpark::deleteCarById(int indexCar)
{
	//заполним вектор построчно данными  из массива объектов - авто из автопарка
	std::vector<std::string> vr;
	//идем по массиву авто
	for (int i = 0; i < this->size; i++)
	{
		int idCar = this->car[i].getId();
		//если id авто совпадает с переданным индексом, то пропустим его запись в вектор
		if (idCar == indexCar)
		{
			continue;
		}
		std::string row = std::to_string(this->car[i].getId()) + ";" +
			std::to_string(this->car[i].getConditionCar()) + ";" +
			this->car[i].getTypeCar() + ";" +
			std::to_string(this->car[i].getCapacityCar());
		//если запись не является последней, то вставляем в конце переход на новую строку
		if (i != (this->size - 1))
		{
			row += "\n";
		}
		vr.push_back(row);
	}
	//создадим объект работы с файлами
	WorkWithFiles workWithFile;
	//запишем данные вектора в файл автопарка
	workWithFile.saveDataFile(vr, "carpark");
}
/// <summary>
/// редактировать авто (который передан как параметр метода)
/// </summary>
/// <param name="car"></param>
void Carpark::updateCar(Car car)
{
	int idCarUpd = car.getId();	//получим id редактируемого авто
	//заполним вектор построчно данными  из массива объектов - авто из автопарка
	std::vector<std::string> vr;
	//идем по массиву авто
	for (int i = 0; i < this->size; i++)
	{
		int idCar = this->car[i].getId();
		std::string row = "";
		//если id авто совпадает с редактируемым авто, то перезаписываем новые данные в вектор
		//иначе пишем в вектор старые данные
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
		//если запись не является последней, то вставляем в конце переход на новую строку
		if (i != (this->size - 1))
		{
			row += "\n";
		}
		vr.push_back(row);
	}
	//создадим объект работы с файлами
	WorkWithFiles workWithFile;
	//запишем данные вектора в файл автопарка
	workWithFile.saveDataFile(vr, "carpark");
}
/// <summary>
/// метод сортировки авто по сотсоянию
/// </summary>
void Carpark::sortByConditionCar()
{
	//используя алгоритм сортировки вставками, сортируем массив авто по коду состояния
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
/// метод сортировки авто по типу
/// </summary>
void Carpark::sortByTypeCar()
{
	//используя алгоритм сортировки вставками, сортируем массив авто по типу
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
/// метод сортировки авто по грузоподъемности
/// </summary>
void Carpark::sortByCapacityCar()
{
	//используя алгоритм сортировки вставками, сортируем массив авто по грузоподъемности
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
/// деструктор
/// </summary>
Carpark::~Carpark()
{

}
