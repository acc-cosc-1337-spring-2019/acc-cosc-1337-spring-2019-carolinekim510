#include <iostream>
#include "dna.h"

using std::cout;
using std::cin;
/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
int main()
{
	auto choice = 0;
	char choice2;
	string dna;

	do
	{
		cout << "\nEnter 1 to Get GC Content or 2 to Get DNA Complement: ";
		cin >> choice;
		cout << "Enter DNA string: ";
		cin >> dna;

		if (choice == 1)
		{
			get_gc_content(dna);
			cout << "GC content result: " << get_gc_content(dna);
		}
		else if (choice == 2)
		{
			get_reverse_string(dna);
			get_dna_complement(dna);
			cout << "DNA complement result: " << get_dna_complement(dna);
		}

		cout <<"\n"<< "\nDo you wish to continue? Y or N: ";
		cin >> choice2;

	} while (choice2 == 'y' || choice2 == 'Y');

}