#pragma once
#include "Car.h"

namespace Project1Git
{
	/// <summary>
	/// класс для создания объекта автопарка
	/// </summary>
	public class Carpark
	{
	private:
		int size;	//кол-во записей в автопарке
		Car *car;	//указатель на объекты - авто
	public:
		Carpark();					//конструктор
		int getSize();				//получить кол-во записей в автопарке (в файле)
		int getCarIndex(int);		//получить id авто по переданному индексу (номеру строки-записи в файле)
		Car getCarByIndex(int);		//получить объект-авто по переданному index
		int getNewId();				//получить новый id для добавления авто (следующий за текущим максимальным id)
		void addNewCar(Car);		//добавить новый авто в автопарк (файл данных по автомобилям)
		void deleteCarById(int);	//удалить авт из автопарка по id (из файла)
		void updateCar(Car);		//редактировать авто (который передан как параметр метода)
		void sortByConditionCar();	//метод сортировки авто по сотсоянию
		void sortByTypeCar();		//метод сортировки авто по типу
		void sortByCapacityCar();	//метод сортировки авто по грузоподъемности
		~Carpark();					//деструктор
	};
}