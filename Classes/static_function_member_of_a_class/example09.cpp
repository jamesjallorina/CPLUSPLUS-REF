/*****************************************************************
*	A simple class implementation
*	Description	:	use of class as object
*					1. static members of a class
*	Written by	:	James Jallorina
*	Date		:	09-22-2018
*
*	Note:
*	Static member functions
*	Static member functions are not associated with any object.
*	When called, they have no this pointer. Static member functions
*	cannot be virtual, const, or volatile.
*	The address of a static member function may be stored in a regular
*	pointer to function, but not in a pointer to member function.
*
*
*
*	source:	https://en.cppreference.com/w/cpp/language/static
******************************************************************/



#include <iostream>

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

public:
	static int total_num_of_human_created;
	static int getTotal_num_of_human_created();		//so we have declared a static function. please refer to link above for more details
};

human::human()
{
	height = 0.0;
	weight = 0.0;

	if (!total_num_of_human_created)
		std::cout << "one human is created" << std::endl;
	else
		std::cout << "another human is created" << std::endl;

	total_num_of_human_created++;		//increase the human count created everytime this ctor is called
}
human::~human() {}	//default destructor

int human::getTotal_num_of_human_created()
{
	return total_num_of_human_created;
}


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

int human::total_num_of_human_created = 0;

int main(int argc, char **argv)
{
	human foo;
	human scooby;

	std::cout << "total number of humans created: " << human::total_num_of_human_created << std::endl;
	std::cout << "total number of humans created (using static member function): " << human::getTotal_num_of_human_created() << std::endl;

	return 0;
}