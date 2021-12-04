#pragma once
#include "Car.h"

namespace Project1Git
{
	/// <summary>
	/// ����� ��� �������� ������� ���������
	/// </summary>
	public class Carpark
	{
	private:
		int size;	//���-�� ������� � ���������
		Car *car;	//��������� �� ������� - ����
	public:
		Carpark();					//�����������
		int getSize();				//�������� ���-�� ������� � ��������� (� �����)
		int getCarIndex(int);		//�������� id ���� �� ����������� ������� (������ ������-������ � �����)
		Car getCarByIndex(int);		//�������� ������-���� �� ����������� index
		int getNewId();				//�������� ����� id ��� ���������� ���� (��������� �� ������� ������������ id)
		void addNewCar(Car);		//�������� ����� ���� � �������� (���� ������ �� �����������)
		void deleteCarById(int);	//������� ��� �� ��������� �� id (�� �����)
		void updateCar(Car);		//������������� ���� (������� ������� ��� �������� ������)
		void sortByConditionCar();	//����� ���������� ���� �� ���������
		void sortByTypeCar();		//����� ���������� ���� �� ����
		void sortByCapacityCar();	//����� ���������� ���� �� ����������������
		~Carpark();					//����������
	};
}