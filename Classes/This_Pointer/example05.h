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
		human(int height, int weight);
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

human::human()
{
	height = 0;
	weight = 0;
}

human::human(int height, int weight) 
{
	this->height = height;	//this refer to member variable of an object
	this->weight = weight;
}	//default constructor

human::~human(){}	//default destructor


void human::setWeight(int height)
{	
	this->height = height;
}

void human::setHeight(int weight)
{
	this->weight = weight;
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
	human foo(5.8, 60);
	
	std::cout << "foo's weight : " << foo.getWeight()  << " (kg" << std::ENDL;
	std::cout << "foo's height :" << foo.getHeight() << " (ft)" << std::ENDL;

	return 0;
}