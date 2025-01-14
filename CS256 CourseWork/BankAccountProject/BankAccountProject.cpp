#include "stdafx.h"
#include "Account.h"
#include "CheckingAcc.h"
#include "SavingsAcc.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "Savings Account under 4 withdrawls:" << endl;
	SavingsAcc a(50, .5);
	a.deposit(25);
	a.withdraw(75);
	a.withdraw(25);
	a.deposit(100);
	a.monthlyProc();

	cout << "Savings Account over 4 withdrawls:" << endl;
	SavingsAcc b(50, 5);
	b.deposit(25);
	b.withdraw(75);
	b.withdraw(25);
	b.deposit(100);
	b.withdraw(10);
	b.withdraw(20);
	b.withdraw(30);
	b.withdraw(90);
	b.withdraw(40);
	b.monthlyProc();
    
	cout << "Checking Account over withdrawl: " << endl;
	CheckingAcc c(75, 4);
	c.withdraw(500);
	c.monthlyProc();
	
	cout << "Checking Account normal withdrawl: " << endl;
	CheckingAcc d(190, 3);
	d.withdraw(30);
	d.monthlyProc();
	return 0;

}

