#pragma once
#include <string>
using namespace std;
class Ship {
public:
	void virtual print();
	string getYearBuilt();
	string getShipName();
	Ship();
	Ship(string name, string yearBuilt);
	Ship(string name);
	void setShipName(string name);
	void setYearBuilt(string yearBuilt);

private:
	string name;
	string yearBuilt;
};