#include <string>
#include "Car.h"

using namespace Project1Git;

Car::Car()
{

}
Car::Car(int id, int conditionCar, std::string typeCar, double capacityCar)
{
	this->id = id;
	this->conditionCar = conditionCar;
	this->typeCar = typeCar;
	this->capacityCar = capacityCar;
}
void Car::setId(int id)
{
	this->id = id;
}
int Car::getId()
{
	return this->id;
}
void Car::setConditionCar(int conditionCar)
{
	this->conditionCar = conditionCar;
}
int Car::getConditionCar()
{
	return this->conditionCar;
}
void Car::setTypeCar(std::string typeCar)
{
	this->typeCar = typeCar;
}
std::string Car::getTypeCar()
{
	return this->typeCar;
}
void Car::setCapacityCar(double capacityCar)
{
	this->capacityCar = capacityCar;
}
double Car::getCapacityCar() 
{
	return this->capacityCar;
}
Car::~Car()
{

}