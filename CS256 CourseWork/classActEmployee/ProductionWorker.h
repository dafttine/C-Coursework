#pragma once
#include "Employee.h"
class ProductionWorker : public Employee {
private:
	int shift; //1 = day, 2 = night
	double HourlyPayRate;
public:
	ProductionWorker(string nm, string dept, string pos, int id, int s, double hpr);
	class InvalidShift {};
	class InvalidPayRate {};
	int getShift(){ return shift; }
	double getHourlyPayRate() { return HourlyPayRate; }
	void setShift(int shift);
	void setHourlyPayRate(double hpr);
};