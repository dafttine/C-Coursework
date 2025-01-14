// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Employee.h"
#include <string>
#include <iostream>
using namespace std;

Employee::Employee(string nm, string dept, string pos, int id) {
	name = nm;
	department = dept;
	position = pos;
	try {
		setIDNumber(id);
	}
	catch (Employee::InvalidEmployeeNumber& e) {
		cout << "Error: The ID value should be more than 0 and less that 9999." << endl;
	}
}
Employee::Employee(string nm, int id) {
	name = nm;
	department = "";
	position = "";
	try {
		setIDNumber(id);
	}
	catch (Employee::InvalidEmployeeNumber e) {
		cout << "Error: The ID value should be more than 0 and less that 9999." << endl;
	}
}
Employee::Employee() {
	name = "";
	department = "";
	position = "";
	idNumber = 0;
}

void Employee::setName(string nm) {
	name = nm;
}
void Employee::setIDNumber(int id) {
	if (id > 0 && id < 9999) {
		idNumber = id;
	}
	else {
		throw InvalidEmployeeNumber();
	}
	
}
void Employee::setDepartment(string dept) {
	department = dept;
}
void Employee::setPosition(string pos) {
	position = pos;
}
string Employee::getName() {
	return name;
}
int Employee::getIDNumber() {
	return idNumber;
}
string Employee::getDepartment() {
	return department;
}
string Employee::getPosition() {
	return position;
}