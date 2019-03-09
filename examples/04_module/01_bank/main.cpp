//#include "bank_account.h"
#include "atm.h"
#include <iostream>
//#include <vector>


int main()
{	
	BankAccount account(123456, 500);		//created bank account object acount#: 123456 balance: 500
	Customer customer (account);	
	ATM atm(customer);
	atm.display_balance();

	display(account);
	atm.deposit(50);
	atm.display_balance();
	
	BankAccount b(1, 900);
	BankAccount c = account + b;

	std::cout << "\n";
	display(c);

	std::cout << c << "\n";


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
	

	for (auto tic_tac_toe : list)
	{
		cou << tic_tac_toe << "\n";
	}
	*/
	return 0;
}