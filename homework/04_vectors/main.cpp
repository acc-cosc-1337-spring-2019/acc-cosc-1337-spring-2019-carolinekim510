#include <iostream>
#include "vectors.h"
#include <string>

using std::cout;
using std::cin;



/*
Prompt user for 1 for Get Max from vector and 2 for Get primes.
Prompt user for a number and return max value or list of primes
and display them to screen.
Program continues until user decides to exit.

*/
int main()
{
	vector<int> numberV;
	int i, selection;
	char choice;

	do
	{
		cout << "Enter 1 to get Max from the list or 2 to get primes: ";
		cin >> selection;

		if (selection == 1)
		{
		
			for (int i = 0; i < 5; i++)
			{
				numberV.push_back(rand() % (100));
			}
			int get_max_from_vector(const vector<int>& numberV);
			
			cout << "The max value from your vector is: " << get_max_from_vector(numberV) << "\n";
		}
		else if (selection == 2)
		{
			cout << "Enter a number you wish to find prime numbers: ";
			cin >> i;

			vector<int> prime = vector_of_primes(i);

			for (int n = 0; n < prime.size(); n++)
			{
				cout << prime[n] << "\n";
			}

		}

		cout << "\nEnter y if you wish to continues.";
		cin >> choice;


	} while (choice == 'y' || choice == 'Y');

}