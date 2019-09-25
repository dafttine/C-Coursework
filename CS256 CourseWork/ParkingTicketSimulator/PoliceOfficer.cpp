#include "stdafx.h"
#include "PoliceOfficer.h"
#include "ParkingTicket.h"
#include <string>
#include <iostream>
using namespace std;

PoliceOfficer::PoliceOfficer() {
	name = "";
	badgeNumber = 0;
}

PoliceOfficer::PoliceOfficer(string n, int bn) {
	name = n;
	badgeNumber = bn;
}

string PoliceOfficer::getName() {
	return name;
}

int PoliceOfficer::getBadgeNumber() {
	return badgeNumber;
}

void PoliceOfficer::issueTicket(ParkedCar &c, ParkingMeter &pm) {
	if ((c.getParkedMinutes()) > (pm.getPaidMinutes())) {
		PoliceOfficer b(name, badgeNumber);
		ParkingTicket a(c, pm, b);
		c.print();
		a.print();
	}
	else {
		c.print();
		cout << "no ticket needed" << endl;
	}

}