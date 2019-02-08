#include <iostream>
#include "loops.h"

/*
Use a do while loop to prompt the user for 
a number, call the factorial function, and display the number's
factorial.  Also, loop continues as long as user wants to.
*/
int main() 
{
	int num;
	char choice;
	do
	{
		std::cout << "Enter number: ";
		std::cin >> num;
		std::cout << factorial(num);

		std::cout << "Do you want to contionue (y to continue or any other to exit): ";
		std::cin >> choice;

	} while (choice == 'y' || choice == 'Y');

	return 0;
}