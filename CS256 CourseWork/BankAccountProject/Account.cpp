#include "stdafx.h"
#include "Account.h"
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;
Account::Account(double b, float air) {
	Balance = b;
	annualInterestRate = air;
}

float Account::getBalanceCounter() {
	return balanceCounter;
}

void Account::setBalanceCounter(float spent) {
	balanceCounter = spent;
}
void Account::deposit(float deposit) {
	Balance += deposit;
	numberOfDepositsMo++;
}

void Account::setBalance(double balance) {
	Balance = balance;
}

void Account::withdraw(float withdrawl) {
	Balance -= withdrawl;
	numberOfWithdrawls++;
}
void Account::calcInt() {
	float monthlyInterestRate = 0;
	float monthlyInterest = 0;
	monthlyInterestRate = (annualInterestRate / 12);
	monthlyInterest = Balance * monthlyInterestRate;
	Balance += monthlyInterest;
}
void Account::monthlyProc() {
	//-----stats-----//
	cout << "Beginning Balance: $" <<  getBalance() - balanceCounter << fixed << setprecision(2) << endl;
	//totalDeposits
	cout << "Number of Deposits made: " << numberOfDepositsMo << endl;
	//totalWith
	cout << "Number of Withdrawls made: " << numberOfWithdrawls << endl;
	//serviceCharges
	cout << "Monthly Service Charges: $" << MonthlyServiceCharges << fixed << setprecision(2) << endl;

	Balance -= MonthlyServiceCharges;
	calcInt();
	//endBalance
	cout << "Current Balance After Monthly Interest: $" << getBalance() << fixed << setprecision(2) << endl << endl;

	numberOfDepositsMo = 0;
	numberOfWithdrawls = 0;
	MonthlyServiceCharges = 0;
}
float Account::getBalance() {
	return Balance;
}
int Account::getNumDep() {
	return numberOfDepositsMo;
}
int Account::getNumWith() {
	return numberOfWithdrawls;
}
float Account::getanInRa() {
	return annualInterestRate;
}
int Account::getMoSerCha() {
	return MonthlyServiceCharges;
}
void Account::setNumDep(int a) {
	numberOfDepositsMo = a;
}

void Account::setNumWith(int a) {
	numberOfWithdrawls = a;
}

void Account::setanInRa(float a) {
	annualInterestRate = a;
}

void Account::setMoSerCha(float a) {
	MonthlyServiceCharges = a;
}