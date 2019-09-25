#include"stdafx.h"
#include "Account.h"
#include"CheckingAcc.h"
#include <iostream>
#include <string>
using namespace std;

CheckingAcc::CheckingAcc(double b, float air):Account(b,air) {
}

void CheckingAcc::withdraw(float withdrawl) {
	if ((getBalance() - withdrawl) < 0) {
		cout << "Your transaction has failed due to insufficient funds, you will be charged $15 and cannot withdraw." << endl;
		float charge = 0;
		charge = getBalance() - 15;
		setBalance(charge);
		float with = getBalanceCounter() - 15;
		setBalanceCounter(with);
	}
	else {
		Account::withdraw(withdrawl);
		float with = getBalanceCounter() - withdrawl;
		setBalanceCounter(with);
	}
}

void CheckingAcc::monthlyProc() {
	float charge = 0;
	charge = (getMoSerCha() + 5) + (getNumWith() * .10);
	setMoSerCha(charge);
	Account::monthlyProc();
}