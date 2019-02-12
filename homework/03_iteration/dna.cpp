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
	auto getContent = 0;

	for (unsigned i = 0; i < dna.length(); i++)
	{
		if (dna.at(i) == 'G' || dna.at(i) == 'g')
		{
			getContent++;
		}
		else if (dna.at(i) == 'C' || dna.at(i) == 'c')
		{
			getContent++;
		}
	}
	
	double calculateGc = (getContent / dna.length()) * 100;
	
	return calculateGc;
}


/*
Write code for function get_reverse_string that
accepts a string parameter and returns a string reversed.
*/


/*
Write prototype for function get_dna_complement that
accepts a string dna and returns a string.
Calculate dna complement:
a. call function get_reverse_string(dna), save results to a local string variable
b. iterate local string variable and
    replace A with T, T with A, C with G and G with C
c. return string

*/
