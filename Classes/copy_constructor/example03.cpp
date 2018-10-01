/*****************************************************************
*	A simple class implementation
*	Description	:	use of class as object
*					1. Use of Constructor
*					2. Initializer list
*	Written by	:	James Jallorina
*	Date		:	09-16-2018
*
*	Note:
*	Copy constructors
*	A copy constructor of class T is a non-template constructor whose
*	first parameter is T&‍, const T&‍, volatile T&‍, or const volatile T&‍,
*	and either there are no other parameters, or the rest of the parameters
*	all have default values.
*
*
*	Syntax:
*	class_name ( const class_name & )	(1)
*	class_name ( const class_name & ) = default;	(2)
*	class_name ( const class_name & ) = delete;	(3)
*
*
*
*	source:	https://en.cppreference.com/w/cpp/language/copy_constructor
******************************************************************/



#include <iostream>

class human
{
public:
	human();
	human( human &android);
	~human();
	//public setter functions
	void setHeight(double h);
	void setWeight(double w);
	//public getter functions
	double getHeight();
	double getWeight();

private:
	double *height;
	double *weight;
};

human::human()
{
	height = nullptr;
	weight = nullptr;
}	//default constructor

human::human(human &android)
{
	height = new double;
	*height = android.getHeight();
	weight = new double;
	*weight = android.getWeight();
}	//copy constructor

human::~human()
{
	if (height)
	{
		delete height;
		height = nullptr;
	}
	if (weight)
	{
		delete weight;
		weight = nullptr;
	}

}	//default destructor


void human::setWeight(double h)
{
	if (!height)
		height = new double;
	*height = h;
}

void human::setHeight(double w)
{
	if (!weight)
		weight = new double;
	*weight = w;
}

double human::getHeight()
{
	if (!height)
		return 0;

	return *height;
}

double human::getWeight()
{
	if (!weight)
		return 0;

	return *weight;
}



int main(int argc, char **argv)
{
	human foo;
	foo.setWeight(50);
	foo.setHeight(4.5);

	std::cout << "foo's height: " << foo.getHeight() << std::endl;
	std::cout << "foo's weight: " << foo.getWeight() << std::endl;
	
	human foodroid = foo;

	std::cout << "foodroid's height: " << foodroid.getHeight() << std::endl;
	std::cout << "foodroid's weight: " << foodroid.getWeight() << std::endl;

	return 0;
}