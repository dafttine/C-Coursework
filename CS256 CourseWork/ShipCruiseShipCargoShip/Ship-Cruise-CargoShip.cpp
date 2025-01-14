#include "stdafx.h"
#include "Ship.h"
#include "CruiseShip.h"
#include "CargoShip.h"
#include <string>
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	const int NUM_BOATS = 6;

	Ship *boats[NUM_BOATS] =
	{   new Ship ("ShipA", "1954"),
		new Ship ("ShipB", "1910"),
		new CruiseShip ("CruiseShipA" , 2744),
		new CruiseShip("CruiseShipB",99),
		new CargoShip("CargoShipA",5656),
		new CargoShip("CargoShipB",1111)
	};
	for (int count = 0; count < NUM_BOATS; count++){
		cout << "Test #" << (count + 1) << ":\n";
		boats[count]->print();
		cout << endl;
	}
}

