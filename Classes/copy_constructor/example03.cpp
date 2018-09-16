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
		human(human &android);
		~human();
		//public setter functions
		void setHeight(int h);
		void setWeight(int w);
		//public getter functions
		int getHeight();
		int getWeight();
	
	private:
		int *height;
		int *weight;
};

human::human() 
{
	height = nullptr;
	weight = nullptr;
}	//default constructor

human::human(const human &humanoid)
{
	height = new int;
	*height = humanoid.getHeight();
	weight = new int;
	*weight = human.getWeight()
}	//copy constructor

human::~human()
{
	if(height)
	{
		delete height;
		height = nullptr;
	}
	if(weight)
	{
			delete weight;
			weight = nullptr;
	}
	
}	//default destructor


void human::setWeight(int h)
{	
	if(!height)
		height = new int;
	*height = h;
}

void human::setHeight(int w)
{
	if(!weight)
		weight = new int;
	*weight = w;
}

int human::getHeight()
{
	if(!height)
		return 0;
	
	return *height;
}

int human::getWeight()
{
	if(!weight)
		return 0;
	
	return *weight;
}



int main(int argc, char **argv)
{
	human foo;
	foo.setWeight(50);
	foo.setHeight(4.5);
	
	std::cout << "foo's weight: " << foo.getWeight() << std::ENDL;
	std::cout << "foo's height: " << foo.getWeight() << std::ENDL;

	human foodroid = foo;
	
	std::cout << "foodroid's weight: " << foodroid.getWeight() << std::ENDL;
	std::cout << "foodroid's height: " << foodroid.getWeight() << std::ENDL;
	
	return 0;
}