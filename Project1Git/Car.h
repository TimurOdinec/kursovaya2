#pragma once

#include <string>

namespace Project1Git
{
	/// <summary>
	/// ����� ��� �������� ������� ����
	/// </summary>
	public class Car
	{
	private:
		int id;				//id ������ ����
		int conditionCar;	//��������� ���� (���)
		std::string typeCar;//��� ����
		double capacityCar;	//���������������� ����
	public:
		Car();								//�����������
		Car(int, int, std::string, double); //����������� � �����������
		void setId(int);					//���������� id
		int getId();						//�������� id
		void setConditionCar(int);			//���������� ��� ��������� ����
		int getConditionCar();				//�������� ��� ��������� ����
		void setTypeCar(std::string);		//���������� ��� ����
		std::string getTypeCar();			//�������� ��� ����
		void setCapacityCar(double);		//���������� ���������������� ����
		double getCapacityCar();			//�������� ���������������� ����
		~Car();								//����������
	};
}
