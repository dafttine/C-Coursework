#pragma once


class Account {
private:
	float Balance=0;
	int numberOfDepositsMo=0;
	int numberOfWithdrawls=0;
	float annualInterestRate=0;
	float MonthlyServiceCharges=0;
	float balanceCounter = 0;
protected:
	//Constructor 
	Account(double b, float air);
	
	//adds balance to account
	virtual void deposit(float deposit);

	//takes user-inputted amount out of the account
	virtual void withdraw(float withdrawl);

	//caluclate the monthly interest of the account
	virtual void calcInt();

	//monthly report 
	virtual void monthlyProc();

	//gets balance in the account
	float getBalance();

	//get how much was spent (this will be a negative value but if you look at monthlyProc, the math is done to fix that) 
	float getBalanceCounter();

	//sets how much was spent
	void setBalanceCounter(float spent);

	//sets balance
	void setBalance(double balance);

	//gets the number of deposits made
	int getNumDep();

	//sets the number of deposits made
	void setNumDep(int a);

	//gets number of withdraws made
	int getNumWith();

	//sets the number of withdraws made
	void setNumWith(int a);

	//gets the interest rate
	float getanInRa();

	//sets the interest rate
	void setanInRa(float a);

	//gets the monthly service charge
	int getMoSerCha();

	//sets the monthly service charge
	void setMoSerCha(float a);
};