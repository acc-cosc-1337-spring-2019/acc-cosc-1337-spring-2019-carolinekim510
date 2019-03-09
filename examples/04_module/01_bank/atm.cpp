#include "atm.h"
#include <iostream>

void ATM::display_balance()
{
	std::cout << "Balance: " << customer.get_account().get_balance();
}

void ATM::deposit(double amt)
{
	customer.get_account().deposit(amt);
}

void ATM::withdraw(double amt)
{
	customer.get_account().withdraw(amt);
}
