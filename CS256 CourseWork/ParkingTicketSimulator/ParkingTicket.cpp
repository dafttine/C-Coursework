#include "stdafx.h"
#include "ParkingTicket.h"
#include "ParkedCar.h"
#include "ParkingMeter.h"
#include "PoliceOfficer.h"
#include<string>
#include<iostream>
#include <cmath>
using namespace std;
 
ParkingTicket::ParkingTicket(ParkedCar c, ParkingMeter m, PoliceOfficer p) {
	this->c = c;
	this->pm = m;
	this->po = p;
}

float ParkingTicket::fine(ParkedCar c, ParkingMeter m) {
	if (c.getParkedMinutes() > pm.getPaidMinutes()) {
		float x = (25 + (10 * ((c.getParkedMinutes() - pm.getPaidMinutes()) / 60)));
		return x;
		}
		else
			return 0;
}

void ParkingTicket::print() {
	cout << "Ticket:" << endl;
	cout << "Issued by: " << po.getName() << " badge number " << po.getBadgeNumber() << endl;
	cout << "amount: $" << fine(c, pm) << endl;

}