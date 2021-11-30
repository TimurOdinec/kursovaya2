#pragma once
#include "Car.h"

namespace Project1Git
{
	public class Carpark
	{
	private:
		int size;
		Car *car;
	public:
		Carpark();
		~Carpark();
		int getSize();
		int getCarIndex(int);
		Car getCarByIndex(int);
		int getNewId();
		void addNewCar(Car);
		Car getUserByIndex(int);
		void deleteCarById(int);
		void updateCar(Car);
		void sortByConditionCar();
		void sortByTypeCar();
		void sortByCapacityCar();
	};
}