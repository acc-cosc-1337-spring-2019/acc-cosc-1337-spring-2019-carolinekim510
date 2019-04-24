#include "ref_pointers.h"
#include <iostream>


int main() 
{
	int number = 10;

	//ref(number);
	// a pointer can stire the address of a variable
	int* numberPtr = &number;

	ref(number, numberPtr);

	//display what value? we should see 100
	//std::cout << number;

	std::cout << "Address of number : " << &number << " value is : " << number << "\n";

	std::cout << "Address of numberPtr: " << &numberPtr << " value stored at address pointed to is: " << numberPtr << 
		"\nDeference numberPtr: " << *numberPtr;

	return 0;
}