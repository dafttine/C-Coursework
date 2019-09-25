#pragma once
#include "Account.h"

class CheckingAcc:Account {
public:
	//Checking account constructor which used the Account class
	CheckingAcc(double b, float air);

	//withdraws from the checking account
	void withdraw(float withdrawl);

    //monthly report print out
	void monthlyProc();
};