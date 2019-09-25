#include "stdafx.h"
#include <iostream>
#include<string>

using namespace std;

class DayOfYear {
private:
	int day;
public:
	DayOfYear();
	DayOfYear(string, int);
	DayOfYear operator++(int);
	DayOfYear operator--(int);
	int getDay();
	void setDay(int);
	void print(int);
};

DayOfYear DayOfYear::operator++(int x) {
	if (this->day == 365)
		this->day == 1;
	else
		this->day = this->day + 1;
	return *this;
	
}

DayOfYear DayOfYear::operator--(int x) {
	if (this->day == 1)
		this->day == 365;
	else
		this->day = this->day - 1;
	return *this;
}

void DayOfYear::setDay(int day) {
		this->day = day;
}

int DayOfYear::getDay() {
	return day;
}

DayOfYear::DayOfYear() {
	setDay(0);
}

DayOfYear::DayOfYear(string month, int day) {
	if (day > 31)
		cout << "That day does not exist within a month." << endl;
	if (day <= 0)
		cout << "That day does not exist within a month." << endl;
	else {
		int monthDay;
		if (month == "January")
			monthDay = 0;
		if (month == "February")
			monthDay = 31;
		if (month == "March")
			monthDay = 31 + 28;
		if (month == "April")
			monthDay = (31* 2) + 28;
		if (month == "May")
			monthDay = (31 * 2) + 30 +28;
		if (month == "June")
			monthDay = (31 * 3) + 30 + 28;
		if (month == "July")
			monthDay = (31 * 3) + (30 * 2) + 28;
		if (month == "August")
			monthDay = (31 * 4) + (30 * 2) + 28;
		if (month == "September")
			monthDay = (31 * 5) + (30 * 2) + 28;
		if (month == "October")
			monthDay = (31 * 5) + (30 * 3) + 28;
		if (month == "November")
			monthDay = (31 * 6) + (30 * 3) + 28;
		if(month == "December")
			monthDay = (31 * 6) + (30 * 4) + 28;
		this->day = day + monthDay;
	}
}

void DayOfYear::print(int day) {
	int dayOfMonth = day;
	string writtenMonth;
	if (day <= 31) {
		writtenMonth = "January";
		dayOfMonth = day % 31;
		if (day == 31)
			dayOfMonth = 31;
	}
	if (day > 31 && day <= 59){
		writtenMonth = "February";
		dayOfMonth = day - 31;
		if (day == 59)
			dayOfMonth = 28;
	}
	if (day > 59 && day <= 90) {
		writtenMonth = "March";
		dayOfMonth = day - 59;
		if (day == 90)
			dayOfMonth = 31;
	}
	if (day > 90 && day <= 120){
		writtenMonth = "April";
		dayOfMonth = day - 90;
		if (day == 120)
			dayOfMonth = 30;
	}
	if (day > 120 && day <= 151) {
		writtenMonth = "May";
		dayOfMonth = day - 120;
		if (day == 151)
			dayOfMonth = 31;
	}
	if (day > 151 && day <= 181){
		writtenMonth = "June";
		dayOfMonth = day - 151;
		if (day == 181)
			dayOfMonth = 30;
	}
	if (day > 181 && day <= 212) {
		writtenMonth = "July";
		dayOfMonth = day - 181;
		if (day == 212)
			dayOfMonth = 31;
	}
	if (day > 212 && day <= 243){
		writtenMonth = "August";
		dayOfMonth = day - 212;
		if (day == 243)
			dayOfMonth = 31;
	}
	if (day >243  && day <= 273) {
		writtenMonth = "September";
		dayOfMonth = day - 243;
		if (day == 273)
			dayOfMonth = 30;
	}
	if (day > 273 && day <= 304){
		writtenMonth = "October";
		dayOfMonth = day - 273;
		if (day == 304)
			dayOfMonth = 31;
	}
	if (day > 304 && day <= 334){
		writtenMonth = "November";
		dayOfMonth = day - 304;
		if (day == 30)
			dayOfMonth = 30;
	}
	if (day > 334 && day <= 365){
		writtenMonth = "December";
		dayOfMonth = day - 334;
		if (day == 31)
			dayOfMonth = 31;
	}

	cout << "Day " << day << " would be " << writtenMonth << " " << dayOfMonth << "." << endl;
}

int main()
{
	DayOfYear A;
	int day;
	string month;
	cout << "Enter in an integer value from 1-365." << endl;
	cin >> day;
	A.setDay(day);
	A.print(A.getDay());
	cout << "Incrementing:" << endl;
	A++;
	A.print(A.getDay());
	cout << "Decrementing:" << endl;
	A--;
	A.print(A.getDay());
}

