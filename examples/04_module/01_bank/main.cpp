//#include "bank_account.h"
#include "atm.h"
#include <iostream>
//#include <vector>


int main()
{
	/*
	BankAccount account (123, 100);
	BankAccount copy = account;
	account.deposit(50);  //even there was the deposit, the account will be updated witht he 50 of deposit BUT the *copy* won't.
	*/
	
	BankAccount account(123456, 500);		//created bank account object acount#: 123456 balance: 500
	Customer customer (account);
	
	//ATM atm(account);
	
	ATM atm(customer);
	atm.display_balance();
	
	//std::cout << copy.get_balance();

	/*
	std::vector<BankAccount> accounts;

	BankAccount account(12345689, 500);
	BankAccount account1(55545689, 5000);

	accounts.push_back(account);
	accounts.push_back(account1);

	for (auto act : accounts)
	{
		std::cout << act.get_balance() << "\n";
	}
	*/

	return 0;
}