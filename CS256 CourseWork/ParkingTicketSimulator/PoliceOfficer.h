#pragma once
#include <string>
#include "ParkedCar.h"
#include "ParkingMeter.h"

using namespace std;
class PoliceOfficer {
private:
	string name;
	int badgeNumber;
public:
	PoliceOfficer();
	PoliceOfficer(string name, int bn);
	string getName();
	int getBadgeNumber();
	void issueTicket(ParkedCar &c, ParkingMeter &pm);
};