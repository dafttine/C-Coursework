#include "stdafx.h"
#include "Ship.h"
#include <string>
#include <iostream>
using namespace std;

Ship::Ship() {
	name = "";
	yearBuilt = "";
}

Ship::Ship(string name) {
	this->name = name;
}
Ship::Ship(string name, string yearBuilt) {
	this->name = name;
	this->yearBuilt = yearBuilt;
}

string Ship::getShipName() {
	return name;
}

string Ship::getYearBuilt() {
	return yearBuilt;
}

void Ship::setShipName(string name) {
	this->name = name;
}

void Ship::setYearBuilt(string yearBuilt) {
	this->yearBuilt = yearBuilt;
}

void Ship::print() {
	cout << "The " << getShipName() << " was built in " << getYearBuilt() << endl;
}