#include "Car.h"

#include <string>

using namespace Project1Git;

/// <summary>
/// конструктор
/// </summary>
Car::Car()
{

}
/// <summary>
/// коснтруктор с параметрами
/// </summary>
/// <param name="id"></param>
/// <param name="conditionCar"></param>
/// <param name="typeCar"></param>
/// <param name="capacityCar"></param>
Car::Car(int id, int conditionCar, std::string typeCar, double capacityCar)
{
	this->id = id;
	this->conditionCar = conditionCar;
	this->typeCar = typeCar;
	this->capacityCar = capacityCar;
}
/// <summary>
/// установить id
/// </summary>
/// <param name="id"></param>
void Car::setId(int id)
{
	this->id = id;
}
/// <summary>
/// получить id
/// </summary>
/// <returns></returns>
int Car::getId()
{
	return this->id;
}
/// <summary>
/// установить код состояния авто
/// </summary>
/// <param name="conditionCar"></param>
void Car::setConditionCar(int conditionCar)
{
	this->conditionCar = conditionCar;
}
/// <summary>
/// получить код состояния авто
/// </summary>
/// <returns></returns>
int Car::getConditionCar()
{
	return this->conditionCar;
}
/// <summary>
/// установить тип авто
/// </summary>
/// <param name="typeCar"></param>
void Car::setTypeCar(std::string typeCar)
{
	this->typeCar = typeCar;
}
/// <summary>
/// получить тип авто
/// </summary>
/// <returns></returns>
std::string Car::getTypeCar()
{
	return this->typeCar;
}
/// <summary>
/// установить грузоподъемность авто
/// </summary>
/// <param name="capacityCar"></param>
void Car::setCapacityCar(double capacityCar)
{
	this->capacityCar = capacityCar;
}
/// <summary>
/// получить грузоподъемность авто
/// </summary>
/// <returns></returns>
double Car::getCapacityCar() 
{
	return this->capacityCar;
}
/// <summary>
/// деструктор
/// </summary>
Car::~Car()
{

}