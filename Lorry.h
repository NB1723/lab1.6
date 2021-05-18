#pragma once
#include <string>

using namespace std;

class Lorry
{
public:
	class Car
	{
	private:
		string model;
		int cylinder, power;

	public:
		string getModel() const { return model; }
		int getCylinder() const { return cylinder; }
		int getPower() const { return power; }

		void setModel(string model);
		void setCylinder(int cylinder);
		void setPower(int power);

		void Init(string model, int cylinder, int power);
		void Display() const;
		void Read();
	};

	int getCapacity_of_car() const { return capacity_of_car; }
	Lorry::Car getCar() const { return car; }

	void setCapacity_of_car(int capacity_of_car);
	void setCar(Car car) { this->car = car; }

	void Init(int capacity_of_car, Car car);
	void Display() const;
	void Read();

private:
	int capacity_of_car;
	Lorry::Car car;
};