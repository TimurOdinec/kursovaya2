#pragma once
#include <string>

namespace Project1Git
{
	public class Car
	{
	private:
		std::string typeCar;
		double capacityCar;
	public:
		Car();
		Car(std::string, double);
		void setTypeCar(std::string);
		std::string getTypeCar();
		void setCapacityCar(double);
		double getCapacityCar();


		~Car();
	};
}
