#pragma once
using namespace std;

class Car
{
protected:
	int fuelCapacity;
	int fuelConsumption;
	int averageSpeed[3];
	char* name;
public:
	virtual float GoCar(bool&, int, int) = 0;
	virtual char* getName() = 0;
};