
#ifndef SHAPE_H
#define SHAPE_H
//h				: shape abstract object(concept) with lines
class Shape 
{
public:
	//virtual void draw(); this is a virtual function (orginally)
	virtual void draw() = 0;	//Pure virtual function by adding '=0' (one virtual function to create an abstract class)
};

#endif // !SHAPE_H