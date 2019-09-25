#include "stdafx.h"
#include "ParkedCar.h"
#include <string>
#include <iostream>
using namespace std;

ParkedCar::ParkedCar() {
	make = "";
	model = "";
	color = "";
	license = "";
	minutes = 0;
}

ParkedCar::ParkedCar(string ma, string mo, string c, string l, int m) {
	make = ma;
	model = mo;
	color = c;
	license = l;
	minutes = m;
}
int ParkedCar::getParkedMinutes() const {
	return minutes;
}

void ParkedCar::print() {
	cout << "Car:" << endl;
	cout << "Make: " << make << endl;
	cout << "Model: " << model << endl;
	cout << "Color: " << color << endl;
	cout << "License: " << license << endl;
	cout << "Minutes Parked: " << minutes << endl;
}