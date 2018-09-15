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
		~human();
		//public setter functions
		void setHeight(int h);
		void setWeight(int w);
		//public getter functions
		int getHeight();
		int getWeight();
	
	private:
		int height;
		int weight;
};

human::human() {}	//default constructor
human::human(int h, int w) : height(h), weight(w)		//member initializer list
{
	std::cout << "object is created using initializer list " << std::ENDL;
	std::cout << "height : " << height << std::ENDL;
	std::cout << "weight : " << weight << std::ENDL;
}
human::~human(){}	//default destructor


void human::setWeight(int h)
{
	height = h;
}

void human::setHeight(int w)
{
	weight = w;
}

int human::getHeight()
{
	return height;
}

int human::getWeight()
{
	return weight;
}



int main(int argc, char **argv)
{
	human foo(50, 4.5);
	//foo.setWeight(50);
	//foo.setHeight(4.5);
	
	std::cout << "foo's weight: " << foo.getWeight() << std::ENDL;
	std::cout << "foo's height: " << foo.setWeight() << std::ENDL;

	return 0;
}