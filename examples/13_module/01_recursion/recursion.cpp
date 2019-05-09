#include "recursion.h"
#include <iostream>
//

void display(int n)
{
	if (n == 0)
	{
		std::cout << "base case\n";
		return;
	}

	std::cout << "Hello World\n";
	display(n-1);
}


//Recursion calls by itself this won't need a 'for loop' to loop and print.
//Indication of increase of decrease will do the trick.

int factorial(int n)
{
	int f = 1;
	if (n == 0)
	{
		std::cout << "base case\n";
		return f;
	}
	
	// 5*4*3*2*1
	std::cout << "load stack \n";
	f = n * factorial(n - 1);
	std::cout << "unload stack \n";
	return f;
}