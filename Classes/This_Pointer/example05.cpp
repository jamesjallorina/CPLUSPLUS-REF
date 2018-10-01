/*****************************************************************
*	A simple class implementation
*	Description	:	use of class as object
*					1. Use of Constructor
*					2. Initializer list
*	Written by	:	James Jallorina
*	Date		:	09-16-2018
*
*	Note:
*	this pointer
*	The keyword this is a prvalue expression whose value is the address of the object,
*	on which the member function is being called. It can appear in the following contexts:
*
*	1) Within the body of any non-static member function, including member initializer list
*	2) within the declaration of a non-static member function anywhere after the (optional)
*	cv-qualifier sequence, including dynamic exception specification(deprecated), noexcept
*	specification(C++11), and the trailing return type(since C++11)
*	3) within default member initializer (since C++11)
*
*
*
*	source:	https://en.cppreference.com/w/cpp/language/this
******************************************************************/



#include <iostream>


class human
{
public:
	human();
	human(double height, double weight);
	~human();
	//public setter functions
	void setHeight(double h);
	void setWeight(double w);
	//public getter functions
	double getHeight();
	double getWeight();


private:
	double height;
	double weight;
};

human::human()
{
	height = 0;
	weight = 0;
}

human::human(double height, double weight)
{
	this->height = height;	//this refer to member variable of an object
	this->weight = weight;
}	//default constructor

human::~human() {}	//default destructor


void human::setWeight(double height)
{
	this->height = height;
}

void human::setHeight(double weight)
{
	this->weight = weight;
}

double human::getHeight()
{
	return height;
}

double human::getWeight()
{
	return weight;
}



int main(int argc, char **argv)
{
	human foo(5.8, 60.0);

	std::cout << "foo's height : " << foo.getHeight() << " (ft)" << std::endl;
	std::cout << "foo's weight : " << foo.getWeight() << " (kg)" << std::endl;
	

	return 0;
}