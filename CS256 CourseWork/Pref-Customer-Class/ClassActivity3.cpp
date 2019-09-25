#include "stdafx.h"
#include "CustomerData.h"
#include "PersonData.h"
#include "PreferredCustomer.h"
#include <iostream>
#include <string>
using namespace std;

int main() {
	PrefferedCustomer a(777);
	a.setAddress("1234 NoWhen St.");
	a.setCity("Jaboo");
	a.setFirstName("Veasna");
	a.setLastName("Ame");
	a.setPhone(1111111111);
	a.setState("CA");
	a.setZip(18192);
	cout << a.getFirstName() << " " << a.getLastName() << " (Customer code: " << a.getCustomerNumber() << ") has spent " << a.getPurchasesAmount() << " leaving them with a " << (a.getDiscountLevel() * 100) << " % discount on all future purchases." << endl;
	return 0;
}
