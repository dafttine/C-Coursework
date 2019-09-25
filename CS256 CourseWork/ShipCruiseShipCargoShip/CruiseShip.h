#pragma once
#include "Ship.h"
#include <string>
using namespace std;
class CruiseShip : public Ship {
private:
	int maxPass;
	
public:
	CruiseShip();
	CruiseShip(string name, int maxPass);
	void setMaxPass(int mp);
	int getMaxPass();
	void print();
};