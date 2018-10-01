/*****************************************************************
*	A simple class implementation
*	Description	:	use of class as object
*					1. static members of a class
*	Written by	:	James Jallorina
*	Date		:	09-22-2018
*
*	Note:
*	static members
*	Inside a class definition, the keyword static declares members that are
*	not bound to class instances. Outside a class definition, it has a different
*	meaning: see storage duration.
*
*	Syntax:
*	static data_member	(1)
*	static member_function	(2)
*
*	source:	https://en.cppreference.com/w/cpp/language/static
******************************************************************/



#include <iostream>

class human
{
public:
	human();
	~human();
	//public setter functions
	void setHeight(double h);
	void setWeight(double w);
	//public getter functions
	double getHeight();
	double getWeight();
	static int object_created;

private:
	double height;
	double weight;
};

human::human()
{
	height = 0;
	weight = 0;

	if (!object_created)
		std::cout << "one human is created" << std::endl;
	else
		std::cout << "another human is created" << std::endl;

	object_created++;		//increase the human count created everytime this ctor is called
}

human::~human() {}	//default destructor


void human::setWeight(double h)
{
	weight = h;
}

void human::setHeight(double w)
{
	height = w;
}

double human::getHeight()
{
	return height;
}

double human::getWeight()
{
	return weight;
}

int human::object_created = 0;	//This is always required to initialize static member of a class otherwise it is undefined reference

int main(int argc, char **argv)
{
	human foo;
	human scooby;

	std::cout << "total number of humans created " << human::object_created << std::endl;

	return 0;
}