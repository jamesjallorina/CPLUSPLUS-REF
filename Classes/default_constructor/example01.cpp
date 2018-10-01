
/**************************************************************************
*	A simple class implementation
*	Description	:	use of class as object
*	Written by	:	James Jallorina
*	Date		:	09-16-2018
*
*
*	Note:
*	Default constructors
*	A default constructor is a constructor which can be called with
*	no arguments (either defined with an empty parameter list, or with
*	default arguments provided for every parameter). A type with a public
*	default constructor is DefaultConstructible.
*
*	Syntax:

*	ClassName ( ) ;	(1)
*	ClassName :: ClassName ( ) body	(2)
*	ClassName() = delete ;	(3)	(since C++11)
*	ClassName() = default ;	(4)	(since C++11)
*	ClassName :: ClassName ( ) = default ;	(5)	(since C++11)
*
*	source:	https://en.cppreference.com/w/cpp/language/default_constructor
***************************************************************************/

#include <iostream>

using namespace std;

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

human::human() {}	//default constructor
human::~human() {}	//default destructor


void human::setWeight(double h)
{
	height = h;
}

void human::setHeight(double w)
{
	weight = w;
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
	foo.setWeight(50.0);
	foo.setHeight(4.5);

	cout << "foo's weight: " << foo.getWeight() << endl;
	cout << "foo's height: " << foo.getHeight() << endl;

	return 0;
}
