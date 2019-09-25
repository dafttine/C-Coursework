#include "stdafx.h"
#include "ParkingMeter.h"
#include <string>
#include <iostream>
using namespace std;

ParkingMeter::ParkingMeter()
{
	paidMinutes = 0;
}

ParkingMeter::ParkingMeter(int pm) {
	paidMinutes = pm;
}

int ParkingMeter::getPaidMinutes() {
	return  paidMinutes;
}