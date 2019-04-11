#include<fstream>
#include<iostream>
#include <string>
#include <vector>
#include "temperature.h"
#include "temperature_data.h"

int main() 
{
	std::vector<Temperature> temps{ Temperature(3, 79.5), Temperature(4, 85.9) };

	TemperatureData data("temps.txt");		//create a file
	data.save_readings(temps);				//adding(saving vector) into the file

	auto readings = data.get_readings();	//reading(vectors) from the file

	for (auto r : readings)
	{
		std::cout << r.get_hour() << " " << r.get_reading() << "\n";
	}

	return 0;
}