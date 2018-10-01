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
*	A class is a user-defined type.
*	A class type is defined by class-specifier, which appears in decl-specifier-seq
*	of the declaration syntax. The class specifier has the following syntax:
*
*
*
*
*
*	Syntax:
*	class-key attr class-head-name { member-specification }	(1)
*	class-key attr class-head-name : base-specifier-list { member-specification }	(2)
*
*
*
*
*
*	source:	https://en.cppreference.com/w/cpp/language/classes
******************************************************************/



#include <iostream>

//This is  user defined type struct an POD (plain old datatypes) which is originated in C PL
//all member variables is default in public
struct st_human {
	double weight;
	double height;
};

//This 
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

private:
	double height;
	double weight;
};

human::human() {}
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



int main(int argc, char **argv)
{
	human foo;
	foo.setHeight(5.5);
	foo.setWeight(50.0);


	std::cout << "foo's height: " << foo.getHeight() << std::endl;
	std::cout << "foo's weight: " << foo.getWeight() << std::endl;

	struct st_human pod_foo;
	pod_foo.height = 5.4;
	pod_foo.weight = 45.0;

	std::cout << "pod_foo's height: " << pod_foo.height << std::endl;		//this is POD (Plain Old Data Structure) type in C-style
	std::cout << "pod_foo's weight: " << pod_foo.weight << std::endl;		//this is POD (Plain Old Data Structure) type in C-style

	return 0;
}