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
	human foo;
	foo.setWeight(50);
	foo.setHeight(4.5);
	
	std::cout << "foo's weight: " << foo.getWeight() << std::ENDL;
	std::cout << "foo's height: " << foo.getHeight() << std::ENDL;

	return 0;
}