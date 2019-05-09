//
#include "report.h"
#include <iostream>

Report::Report()
{
	//read from file or database
	accounts = new BankAccount[5];
	//iterate to update balance
	accounts[0].get_balance();
}

void Report::display()
{
	for (int i = 0; i < 5; ++i)
	{
		std::cout << accounts[i].get_balance() << '\n';
	}
}

Report::~Report()
{
	std::cout << "Clear array \n";
	delete[] accounts;
	accounts = nullptr;
}