/*****************************************************************
*	A simple class implementation
*	Description	:	use of class as object
*					1. static members of a class
*	Written by	:	James Jallorina
*	Date		:	09-22-2018
*
*	Note:	
*	static members
*	Inside a class definition, the keyword static declares members that are
*	not bound to class instances. Outside a class definition, it has a different 
*	meaning: see storage duration.
*	
*	Syntax:
*	static data_member	(1)	
*	static member_function	(2)		
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
		void setWeight(int w);
		//public getter functions
		double getHeight();
		int getWeight();
	
	private:
		double height;
		int weight;
		
	public:
		static int total_num_of_human_created;
};

human::human() 
{
	height = 0;
	weight = 0;
	
	if(!total_num_of_human_created)
		std::cout << "one human is created" << std::ENDL;
	else
		std::cout << "another human is created" << std::ENDL;
	
	total_num_of_human_created++;		//increase the human count created everytime this ctor is called
}
human::~human() {}	//default destructor


void human::setWeight(int h)
{	
	height = h;
}

void human::setHeight(int w)
{
	weight = w;
}

double human::getHeight()
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
	human scooby;

	std::cout << "total number of humans created" << human::total_num_of_human_created << std::ENDL;
	
	return 0;
}