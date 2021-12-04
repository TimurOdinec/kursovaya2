#pragma once

#include <string>

namespace Project1Git
{
	/// <summary>
	/// класс для создания объекта авто
	/// </summary>
	public class Car
	{
	private:
		int id;				//id записи авто
		int conditionCar;	//состояние авто (код)
		std::string typeCar;//тип авто
		double capacityCar;	//грузоподъемность авто
	public:
		Car();								//конструктор
		Car(int, int, std::string, double); //коснтруктор с параметрами
		void setId(int);					//установить id
		int getId();						//получить id
		void setConditionCar(int);			//установить код состояния авто
		int getConditionCar();				//получить код состояния авто
		void setTypeCar(std::string);		//установить тип авто
		std::string getTypeCar();			//получить тип авто
		void setCapacityCar(double);		//установить грузоподъемность авто
		double getCapacityCar();			//получить грузоподъемность авто
		~Car();								//деструктор
	};
}
