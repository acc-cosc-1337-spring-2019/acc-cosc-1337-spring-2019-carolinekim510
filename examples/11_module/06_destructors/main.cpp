#include "destructor.h"

int main() 
{
	Destructor d(10); 

	Destructor a = d; // create class copy
	d.set_value(5);

	// Can't work because the memory is already been released and there is no pointing.
	a.set_ptr_num(100);

	return 0;
}