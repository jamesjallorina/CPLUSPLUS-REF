/*****************************************************************
*	A simple class implementation
*	Description	:	use of class as object
*					1. Pointer to Object
*	
*	Written by	:	James Jallorina
*	Date		:	09-16-2018
*
*
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
	human *ptr_foo = new foo(5.7, 58);			//we use pointer to create object that is stored in the heap //later we will use shared_pointer and smart_pointer
	
	std::cout << "foo's weight : " << foo->getWeight()  << " (kg" << std::ENDL;
	std::cout << "foo's height :" << foo->getHeight() << " (ft)" << std::ENDL;

	delete ptr_foo;								//we use delete to release the memory allocated in the heap
	ptr_foo = NULL;
	return 0;
}