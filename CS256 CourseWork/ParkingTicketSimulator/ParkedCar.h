#pragma once
#include <string>
using namespace std;
class ParkedCar {
private:
	string make;
	string model;
	string color;
	string license;
	int minutes;
public:
	ParkedCar();
	ParkedCar(string make, string model, string color, string license, int minutes);
	int getParkedMinutes() const;
	void print();
};