#pragma once
#include "Ship.h"
#include <string>
using namespace std;

class CargoShip:public Ship {
public:
	CargoShip();
	CargoShip(string name, int CargoCapacity);
	int getCargoCap();
	void setCargoCap(int CargoCapacity);
	void print();

private:
	int CargoCapacityTon;
};