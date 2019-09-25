#include "stdafx.h"
#include "Employee.h"
#include "ProductionWorker.h"
#include <string>
#include <iostream>
using namespace std;

ProductionWorker::ProductionWorker(string nm, string dept, string pos, int id, int s, double hpr):Employee(nm, dept, pos, id) {
	try {
		setShift(s);
	}
	catch (ProductionWorker::InvalidShift) {
		cout << "Error: Enter 0 for no shift, 1 for day shift, or 2 for night shift." << endl;
	}
	try {
		setHourlyPayRate(hpr);
	}
	catch (ProductionWorker::InvalidPayRate) {
		cout << "Error: Pay rate should be a value greater than 0." << endl;
	}
}

void ProductionWorker::setShift(int shift) {
	if (shift == 1 || shift == 2 || shift == 0) {
		this->shift = shift;
	}
	else {
		shift = 0;
		throw InvalidShift();
	}
}
void ProductionWorker::setHourlyPayRate(double hpr) {
	if (hpr > 0) {
		HourlyPayRate = hpr;
	}
	else {
		throw InvalidPayRate();
	}
}