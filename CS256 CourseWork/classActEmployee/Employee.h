#pragma once
//#ifdef Employee_H
//#define Employee_H
//ALL THE CODE WE ARE WRITING BELOW
//#endif
//classes are a bunch of structs and functions

#include<string>
using namespace std;
class Employee {

private:
	string name;
	string department;
	string position;
	int idNumber;

public:
	//3 constructors
	class InvalidEmployeeNumber {};
	Employee(string name, string dept, string position, int id);
	Employee(string name, int id);
	Employee();

	//setters and accessors
	void setName(string name);
	void setIDNumber(int id);
	void setDepartment(string dept);
	void setPosition(string pos);

	string getName();
	int getIDNumber();
	string getDepartment();
	string getPosition();



};