#pragma once
#include "CustomerData.h"
#include "PersonData.h"
using namespace std;

class PrefferedCustomer :public CustomerData {
private:
	double purchasesAmount = 0;
	double discountLevel = 0;
public:
	PrefferedCustomer();
	PrefferedCustomer(double pa);
	double getPurchasesAmount();
	double getDiscountLevel();
	void setPurchasesAmount(double pa);
	void setDiscountLevel();
};