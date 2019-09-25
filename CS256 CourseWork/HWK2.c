/*
HWK2.c
      Created on: Apr 10, 2018
      Author: Kristine

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

Console Output:

1. Resturant Bill
Meal Cost: 88.669998
Tax Amount: 5.985225
Tip Amount: 17.733999
Total Bill: 112.389221

2. OceanLevel
The ocean level will rise 7.500000 millimeters in 5.
The ocean level will rise 10.500000 millimeters in 7.
The ocean level will rise 15.000000 millimeters in 10.

3. Stock Trading Program Bill
The amount of money Joe paid for the stock: $45500.00
The amount of commission Joe paid his broker when he bought the stock: $910.00
The amount that Joe sold the stock for: $56900.00
The amount of commission Joe paid his broker when he sold the stock: $1138.00
The amount of profit that Joe made after selling his stock and paying the two commissions to his broker: $9352.00

4. Pattern Displays
pyramid:
+
++
+++
++++
+++++
++++++
+++++++
++++++++
+++++++++
++++++++++
upside-down pyramid:
++++++++++
+++++++++
++++++++
+++++++
++++++
+++++
++++
+++
++
+
*/

#include <stdio.h>

int main(){
printf("1. Resturant Bill\n");

        float mealCharge = 88.67;
        float taxPercentage = .0675;
        float tipPercentage = .2;
        float tax = mealCharge * taxPercentage;
        float tip = mealCharge * tipPercentage;
        float totalBill = mealCharge + tax + tip;

        printf("Meal Cost: %f\n",mealCharge);
        printf("Tax Amount: %f\n",tax);
        printf("Tip Amount: %f\n",tip);
        printf("Total Bill: %f\n\n",totalBill);

printf("2. OceanLevel\n");
	
	int years[] = {5,7,10};
	for(int i = 0; i < 3 ;i++){
		float millimeters = 1.5 * years[i];
		printf("The ocean level will rise %f millimeters in %d.\n", millimeters, years[i]);
	}
	printf("\n");

printf("3. Stock Trading Program Bill\n");
	int stocksBought = 1000;
	float stockPricePerShare = 45.5;
	float stockValueAfterOneWeek = 56.9;
	float Commission = .02;

	float AmountPaidForStocks = stocksBought * stockPricePerShare;
	float AmountPaidForBuyingCommission = AmountPaidForStocks * Commission;
	float amountForSellingStocks = stocksBought * stockValueAfterOneWeek;
	float AmountPaidForSellingCommission = amountForSellingStocks * Commission;
	float totalProfit = (0 - AmountPaidForStocks - AmountPaidForBuyingCommission - AmountPaidForSellingCommission + amountForSellingStocks);
	
	printf("The amount of money Joe paid for the stock: $%.2f\n", AmountPaidForStocks);
        printf("The amount of commission Joe paid his broker when he bought the stock: $%.2f\n", AmountPaidForBuyingCommission);
        printf("The amount that Joe sold the stock for: $%.2f\n",amountForSellingStocks);
        printf("The amount of commission Joe paid his broker when he sold the stock: $%.2f\n",AmountPaidForSellingCommission);
        printf("The amount of profit that Joe made after selling his stock and paying the two commissions to his broker: $%.2f\n\n",totalProfit);

printf("4. Pattern Displays\n");
	printf("pyramid:\n");

	for(int i = 0; i < 10; i++){
		int count = 0;
		while(count <= i){
		  printf("+");
		  count++;
		}
		printf("\n");
	}
	printf("upside-down pyramid:\n");
	for(int i = 0; i < 10; i++){
		int count = 10;
		while(count > i){
		  printf("+");
		  count--;
		}
		printf("\n");
	}
	return 0;
}


