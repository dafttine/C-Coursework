#include "stdafx.h"
#include "PersonData.h"
#include "CustomerData.h"
#include "PreferredCustomer.h"
#include <string>
#include <iostream>
using namespace std;

PrefferedCustomer::PrefferedCustomer():CustomerData() {
	purchasesAmount = 0;
}

PrefferedCustomer::PrefferedCustomer(double pa):CustomerData() {
	purchasesAmount += pa;
	setDiscountLevel();

}
double PrefferedCustomer::getPurchasesAmount() {
	return purchasesAmount;
}
double PrefferedCustomer::getDiscountLevel() {
	return discountLevel;
}
void PrefferedCustomer::setPurchasesAmount(double pa) {
	if (pa > 0) {
		purchasesAmount += pa;
	}
	else
		cout << "That is an invalid input, please start over and enter a positive value." << endl;
}
void PrefferedCustomer::setDiscountLevel() {
	if (purchasesAmount >= 500 && purchasesAmount < 1000)
		discountLevel = .05;
	else if (purchasesAmount >= 1000 && purchasesAmount < 1500)
		discountLevel = .06;
	else if (purchasesAmount >= 1500 && purchasesAmount < 2000)
		discountLevel = .07;
	else if (purchasesAmount > 2000)
		discountLevel = .10;
}