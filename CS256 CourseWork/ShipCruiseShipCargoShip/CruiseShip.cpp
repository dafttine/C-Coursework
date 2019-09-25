#include "stdafx.h"
#include "Ship.h"
#include "CruiseShip.h"
#include <string>
#include <iostream>
using namespace std;

CruiseShip::CruiseShip():Ship(){
	maxPass = 0;
}

CruiseShip::CruiseShip(string name, int maxPass):Ship(name){
	this->maxPass = maxPass;
}

void CruiseShip::setMaxPass(int mp) {
	maxPass = mp;
}
int CruiseShip::getMaxPass() {
	return maxPass;
}
void CruiseShip::print() {
	cout << "The " << getShipName() << " can carry " << getMaxPass() << " people." << endl;
}