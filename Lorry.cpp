#include "Lorry.h"
#include <iostream>

using namespace std;

void Lorry::setCapacity_of_car(int  value) { capacity_of_car = value; }

void Lorry::Init(int capacity_of_car, Lorry::Car car)
{
	setCar(car);
	setCapacity_of_car(capacity_of_car);
}

void Lorry::Display() const
{
	cout << endl;
	cout << "\nCar: " << endl;
	car.Display();
	cout << "Capacity of car ( in kg ) = " << capacity_of_car << endl;
}

void Lorry::Read()
{
	int  capacity_of_car;
	Lorry::Car car;
	cout << endl;
	cout << "Car = ? " << endl;
	car.Read();
	cout << "Capacity of car ( in kg ) = ? "; cin >> capacity_of_car;
	Init(capacity_of_car, car);
}

void Lorry::Car::setModel(string value)
{
	model = value;
}

void Lorry::Car::setCylinder(int  value)
{
	if (value > 0)
		cylinder = value;
	else
		cylinder = 0;
}

void Lorry::Car::setPower(int  value)
{
	if (value > 0)
		power = value;
	else
		power = 0;
}

void Lorry::Car::Init(string model, int cylinder, int power)
{
	setModel(model);
	setCylinder(cylinder);
	setPower(power);
}

void Lorry::Car::Display() const
{
	cout << endl;
	cout << "model = " << model << endl;
	cout << "cylinder = " << cylinder << endl;
	cout << "power ( in kW ) = " << power << endl;
}

void Lorry::Car::Read()
{
	string model;
	int cylinder;
	int power;
	cout << endl;
	cout << "model = ? "; cin >> model;
	cout << " Your value must be positive!" << endl;
	cout << "cylinder = ? "; cin >> cylinder;
	cout << "power ( in kW ) = ? "; cin >> power;
	Init(model, cylinder, power);
}