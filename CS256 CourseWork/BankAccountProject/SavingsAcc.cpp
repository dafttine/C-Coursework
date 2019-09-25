#include "stdafx.h"
#include "SavingsAcc.h"
#include <iostream>
#include <string>
using namespace std;
SavingsAcc::SavingsAcc(double b, float air):Account(b, air) {
}
void SavingsAcc::deposit(float deposit) {
	if (status == false) {
		if ((getBalance() + deposit) > 25) {
			status = true;
			Account::deposit(deposit);
			float dep = getBalanceCounter() + deposit;
			setBalanceCounter(dep);
		}
		else {
			cout << "After your deposit of $" << deposit << ", your Saving Account balance is still beneath $25, your account will remain inactive." << endl;
			Account::deposit(deposit);
			float dep = getBalanceCounter() + deposit;
			setBalanceCounter(dep);
		}
	}
	else {
		Account::deposit(deposit);
		float dep = getBalanceCounter() + deposit;
		setBalanceCounter(dep);
	}
}

void SavingsAcc::withdraw(float withdrawl) {
	if (getBalance() < 25 || (getBalance()- withdrawl) < 0) {
		status = false;
	}
	else {
		status = true;
	}
	if (status) {
		Account::withdraw(withdrawl);
		float with = getBalanceCounter() - withdrawl;
		setBalanceCounter(with);
	}
	else {
		cout << "Your Savings Account Balance is less than $25 or you do not have sufficient funds to withdraw, you may not withdraw." << endl;
	}
}

void SavingsAcc::monthlyProc() {
	if (getNumWith() > 4) {
		float charge = (getNumWith() - 4);
		charge += getMoSerCha();
		setMoSerCha(charge);
		Account::monthlyProc();
	}
	else {
		Account::monthlyProc();
	}
	if (getBalance() < 25) {
		status = false;
	}
	else {
		status = true;
	}
}