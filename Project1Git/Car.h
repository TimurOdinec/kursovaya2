#pragma once
#include <string>

namespace Project1Git
{
	public class Car
	{
	private:
		int id;
		int conditionCar;
		std::string typeCar;
		double capacityCar;
	public:
		Car();
		Car(int, int, std::string, double);
		void setId(int);
		int getId();
		void setConditionCar(int);
		int getConditionCar();
		void setTypeCar(std::string);
		std::string getTypeCar();
		void setCapacityCar(double);
		double getCapacityCar();


		~Car();
	};
}
