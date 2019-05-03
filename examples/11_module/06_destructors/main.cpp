#include "destructor.h"

Destructor create_class();

int main() 
{
	Destructor d(10); 
	Destructor c(5);

	Destructor a = d; // create class copy; copy constructor executes
	Destructor b(d); //executes copy constructor

	c = d; //executes copy assignement

	d.set_value(5);

	// Can't work because the memory is already been released and there is no pointing.
	a.set_ptr_num(100);
	int x = 5; // 5 is R value?! can't access the memory, can't call
	int& y = x; // x is L vlaue can access the memory, can call
	int* z = &x;
	

	return 0;
}

Destructor create_class()
{
	return Destructor (5);
}