#include "stdafx.h"
#include "Employee.h"
#include "ProductionWorker.h"
#include <string>
#include <iostream>

using namespace std;

int main() {
	cout << "\nProduction Worker (InvalidID):" << endl;
	Employee MJ("Mark Jones", 10921);

	cout << "\nProduction Worker (InvalidShift):" << endl;
	ProductionWorker Mark("Mark Wo", "Department", "Position", 400, 6, 145.50);

	cout << "\nProduction Worker (InvalidPayRate):" << endl;
	ProductionWorker Em("Em Wo", "Department", "Positiion", 400, 1, -145.50);

}