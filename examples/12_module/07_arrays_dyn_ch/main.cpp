#include <iostream>

int main()
{
	char* name = new char[10]; //allocate
	std::cout << "Enter name: ";
	std::cin.getline(name, 10); // \0 : the end of character
	std::cout << name;

	delete[] name; //deallocates array from memory
	name = nullptr;

	char* name1 = new char[10]; //allocate
	name1[0] = 'a';
	//...
	name1[9] = '\0';

	delete[] name1;
	name1 = nullptr;
	



	return 0;
}