//main
#include "shape.h"
#include "line.h"
#include "circle.h"
#include <vector>
#include <iostream>
#include <memory>

int main() 
{
	//Shape s_abstract; can't create instance; pure virtual
	//function makes it an abstract class

	Shape* line = new Line();	// creates dynamin memory (heap)
	line->draw();				// use the memmory
	delete line;				// release the memory

	std::vector<Shape*> shapes{new Line(), new Circle()};			//vector already knows how to release the memory, no need to type
	for (auto& shape : shapes)
	{
		shape->draw();
	}

	std::cout << "\n";

	for (auto* shape : shapes)
	{
		shape->draw();
	}

	std::cout << "\n";

	//Shape instance using Smart Pointer
	std::unique_ptr<Shape> l = std::make_unique<Line>();
	l->draw();
	
	//Vector of Shape instances using Smart Pointers
	std::vector <std::unique_ptr < Shape >> shaps;
	shaps.push_back(std::make_unique< Line >());
	shaps.push_back(std::make_unique< Circle >());

	for (auto & shape : shaps)
	{
		shape->draw();
	}


	return 0;
}