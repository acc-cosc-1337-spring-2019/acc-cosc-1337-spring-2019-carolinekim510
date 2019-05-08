#include <iostream>


int main() 
{

	const int SIZE = 5; //read only

	int hours[SIZE] = { 5, 10, 30, 20, 7 };

	for (int i = 0; i < SIZE; ++i) {
		std::cout << hours[i] << "\n";
	}

	return 0;
}