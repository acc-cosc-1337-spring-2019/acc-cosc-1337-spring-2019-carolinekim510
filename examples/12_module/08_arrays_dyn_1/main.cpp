#include "examples/12_module/08_arrays_dyn_1/bank_account.h"
#include <iostream>

int main()
{
	//stack/static array of objects (not in HEAP)
	BankAccount accounts[5];
	//read data file or database
	//initialize the balances

	for (auto account : accounts)
	{
		std::cout << account.get_balance() << "\n";
	}
	
	//STACK or STATIC array
	//read data file or database
	//initialize with an initializer list
	BankAccount accounts1[] = { BankAccount(5), BankAccount{10}, BankAccount(50), BankAccount(100) };


	return 0;
}