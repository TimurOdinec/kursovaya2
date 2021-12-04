#include "Car.h"

#include <string>

using namespace Project1Git;

/// <summary>
/// �����������
/// </summary>
Car::Car()
{

}
/// <summary>
/// ����������� � �����������
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
/// ���������� id
/// </summary>
/// <param name="id"></param>
void Car::setId(int id)
{
	this->id = id;
}
/// <summary>
/// �������� id
/// </summary>
/// <returns></returns>
int Car::getId()
{
	return this->id;
}
/// <summary>
/// ���������� ��� ��������� ����
/// </summary>
/// <param name="conditionCar"></param>
void Car::setConditionCar(int conditionCar)
{
	this->conditionCar = conditionCar;
}
/// <summary>
/// �������� ��� ��������� ����
/// </summary>
/// <returns></returns>
int Car::getConditionCar()
{
	return this->conditionCar;
}
/// <summary>
/// ���������� ��� ����
/// </summary>
/// <param name="typeCar"></param>
void Car::setTypeCar(std::string typeCar)
{
	this->typeCar = typeCar;
}
/// <summary>
/// �������� ��� ����
/// </summary>
/// <returns></returns>
std::string Car::getTypeCar()
{
	return this->typeCar;
}
/// <summary>
/// ���������� ���������������� ����
/// </summary>
/// <param name="capacityCar"></param>
void Car::setCapacityCar(double capacityCar)
{
	this->capacityCar = capacityCar;
}
/// <summary>
/// �������� ���������������� ����
/// </summary>
/// <returns></returns>
double Car::getCapacityCar() 
{
	return this->capacityCar;
}
/// <summary>
/// ����������
/// </summary>
Car::~Car()
{

}