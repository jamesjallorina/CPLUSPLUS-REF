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
	human *ptr_foo = new human(5.7, 58.0);			//we use pointer to create object that is stored in the heap //later we will use shared_pointer and smart_pointer

	std::cout << "foo's height : " << ptr_foo->getHeight() << " (ft)" << std::endl;
	std::cout << "foo's weight : " << ptr_foo->getWeight() << " (kg)" << std::endl;

	if (ptr_foo)
	{
		std::cout << "deallocate ptr_foo" << std::endl;
		delete ptr_foo;								//we use delete to release the memory allocated in the heap
		ptr_foo = NULL;
	}
	
	return 0;
}