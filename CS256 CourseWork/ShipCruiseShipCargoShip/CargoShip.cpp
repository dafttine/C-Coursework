#include "stdafx.h"
#include "Ship.h"
#include "CargoShip.h"
#include <string>
#include <iostream>
using namespace std;


CargoShip::CargoShip():Ship() {
	CargoCapacityTon = 0;
}
CargoShip::CargoShip(string name, int CargoCapacity):Ship(name) {
	CargoCapacityTon = CargoCapacity;
}
int CargoShip::getCargoCap() {
	return CargoCapacityTon;
}
void CargoShip::setCargoCap(int CargoCapacity) {
	CargoCapacityTon = CargoCapacity;
}

void CargoShip::print() {
	cout << "The " << getShipName() << " has a cargo capacity of " << getCargoCap() << "." << endl;
}