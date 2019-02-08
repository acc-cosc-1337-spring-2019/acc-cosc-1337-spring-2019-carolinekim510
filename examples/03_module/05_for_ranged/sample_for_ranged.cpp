#include <iostream>
#include "sample_for_ranged.h"
//

void loop_string_w_index(std::string str)
{
	for (int i = 0; i < str.length(); ++i)
	{
		std::cout << str[i] << "\n";
	}
}

void loop_string_w_auto(std::string str)
{
	for (auto c : str)
	{
		std::cout << c << "\n";
	}
}
