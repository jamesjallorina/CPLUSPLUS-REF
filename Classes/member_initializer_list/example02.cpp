/*****************************************************************
*	A simple class implementation
*	Description	:	use of class as object
*					1. Use of Constructor
*					2. Initializer list
*	Written by	:	James Jallorina
*	Date		:	09-16-2018
*
*	Note:	
*	Constructors and member initializer lists
*	Constructor is a special non-static member function of a class that is used to 
*	initialize objects of its class type. In the definition of a constructor of a 
*	class, member initializer list specifies the initializers for direct and virtual 
*	base *	  subobjects and non-static data members. 
*	( Not to be confused with std::initializer_list )
*
*	Syntax
*	class-name ( parameter-list(optional) ) except-spec(optional) attr(optional)
*
*
*	source:		https://en.cppreference.com/w/cpp/language/initializer_list
******************************************************************/



#include <iostream>

class human
{	
	public:
		human();
		human(double h, double w);
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
human::human(double h, double w) : height(h), weight(w)		//member initializer list
{
	std::cout << "object is created using initializer list " << std::endl;
	std::cout << "height : " << height << std::endl;
	std::cout << "weight : " << weight << std::endl;
}
human::~human(){}	//default destructor


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
	human foo(50.0, 60);
	
	std::cout << "foo's height: " << foo.getHeight() << std::endl;
	std::cout << "foo's weight: " << foo.getWeight() << std::endl;

	return 0;
}