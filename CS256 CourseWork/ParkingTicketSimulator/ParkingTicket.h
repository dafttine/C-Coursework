#pragma once
#include <string>
#include "ParkedCar.h"
#include "ParkingMeter.h"
#include "PoliceOfficer.h"
using namespace std;

class ParkingTicket {
private: 
	PoliceOfficer po;
	ParkedCar c;
	ParkingMeter pm;
public:
	ParkingTicket(ParkedCar c, ParkingMeter pm, PoliceOfficer po);
	float fine(ParkedCar c, ParkingMeter m);
	void print();
};