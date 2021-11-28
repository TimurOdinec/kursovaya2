#include <string>
#include "Car.h"

using namespace Project1Git;

Car::Car()
{

}
Car::Car(std::string typeCar, double capacityCar)
{
	this->typeCar = typeCar;
	this->capacityCar = capacityCar;
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