#pragma once
#include <string>
using namespace std;
class ParkingMeter {
private: 
	int paidMinutes;
public:
	ParkingMeter();
	ParkingMeter(int pm);
	int getPaidMinutes();
	string print();
};