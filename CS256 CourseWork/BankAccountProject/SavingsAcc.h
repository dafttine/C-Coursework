#pragma once
#include "Account.h"
class SavingsAcc: public Account{
private: 
	bool status = NULL;
public: 
	//Constructor 
	SavingsAcc(double b, float air);

	//deposit function
	void deposit(float deposit);

	//withdraw function
	void withdraw(float withdrawl);

	//monthly report
	void monthlyProc();
};