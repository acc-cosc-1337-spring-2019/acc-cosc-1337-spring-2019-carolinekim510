//#include "bank_account.h"
#include "customer.h"

#ifndef ATM_H  // hearder-guard
#define ATM_H

class ATM
{
public:
	//ATM() : account(1, 5) {}  //constructor : one or more statments can be defined at here **remember not to define at cpp.
	//ATM(BankAccount a) : account(a) {}
	ATM(Customer c) : customer(c) {}
	void display_balance();

private:
	//BankAccount account;
	Customer customer;
};

#endif // !ATM_H