#include <iostream>

int main()
{
	//original values
	const int SIZE = 5; //read only

	int hours[SIZE] = { 5, 10, 30, 20, 7 };

	for (auto hour : hours) 
	{
		std::cout << hour << "\n";
	}

	//modification in the loop
	int i = 1;
	for (auto& hour : hours)
	{
		std::cout << hour << "\n";
		hour = i++;
	}

	//after modified (hour is updated)
	for (auto hour : hours)
	{
		std::cout << hour << "\n";
	}
	return 0;
}