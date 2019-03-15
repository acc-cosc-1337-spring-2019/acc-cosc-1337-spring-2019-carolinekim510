//#include "bank_account.h"
#include "atm.h"
#include "savings_account.h"
#include "checking_account.h"
#include <iostream>
#include <vector>

using std::vector;
//polymorphism : bankAccount becomes savings or checking accounts

int main()
{
	SavingsAccount s(12345, 1000);
	std::cout << s.get_balance()  << "\n";

	BankAccount & b = s;			//reference of bank account
	std::cout << b.get_balance() << "\n";

	CheckingAccount c(54321, 500);
	std::cout << c.get_balance() << "\n";

	BankAccount& d = c;
	std::cout << d.get_balance() << "\n";

	vector < std::reference_wrapper<BankAccount>> accounts{ s,c };

	for (auto & account : accounts)
	{//accout must be upwrapped with .get() to get the instance of Account
		std::cout << account.get().get_balance() << std::endl;
	}

	/*
	int num = 5;
	int &num_ref = num;
	std::cout << num_ref << "\n";
	*/

	/*	
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