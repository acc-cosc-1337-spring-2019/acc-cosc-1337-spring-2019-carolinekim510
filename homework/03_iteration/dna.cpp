#include "dna.h"

using std::string;

/*
Write code for function get_gc_content that accepts
a const reference string parameter and returns a double.
Calculate GC content:
Iterate string count Gs and Cs, divide count by string length.
Return quotient.
*/

double get_gc_content(string dna)
{
	double count = 0;

	for (int i = 0; i < dna.length(); i++)
	{
		if (dna[i] == 'G' || dna[i] == 'C')
		{
			count++;
		}		
	}
	
	double quotient = count / dna.length();
	return quotient;
}


/*
Write code for function get_reverse_string that
accepts a string parameter and returns a string reversed.
*/

string get_reverse_string(string dna)
{
	string reverseString = string(dna.rbegin(), dna.rend());
	return reverseString;

}

/*
Write prototype for function get_dna_complement that
accepts a string dna and returns a string.
Calculate dna complement:
a. call function get_reverse_string(dna), save results to a local string variable
b. iterate local string variable and
    replace A with T, T with A, C with G and G with C
c. return string

*/



string get_dna_complement(string dna)
{
	string dnaString = get_reverse_string(dna);

	for (auto& c: dnaString)
	{
		if (c == 'A')
		{
			c = 'T';
		}
		else if (c == 'T')
		{
			c = 'A';
		}
		else if (c == 'G')
		{
			c = 'C';
		}
		else if (c == 'C')
		{
			c = 'G';
		}

	}

	return dnaString;
}

