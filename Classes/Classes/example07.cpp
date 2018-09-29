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
*	A class is a user-defined type.
*	A class type is defined by class-specifier, which appears in decl-specifier-seq 
*	of the declaration syntax. The class specifier has the following syntax:
*	
*	
*	
*	
*	
*	Syntax:
*	class-key attr class-head-name { member-specification }	(1)	
*	class-key attr class-head-name : base-specifier-list { member-specification }	(2)	
*	
*	
*
*
*
*	source:	https://en.cppreference.com/w/cpp/language/classes
******************************************************************/



#include <iostream>

//This is  user defined type struct an POD (plain old datatypes) which is originated in C PL
//all member variables is default in public
struct st_human{ 	
	int weight;
	double height;
};

//This 
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
};

human::human() {}
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
	foo.setWeight(50);
	foo.setHeight(5.5);
	
	std::cout << "foo's weight: " << foo.getWeight() << std::ENDL;
	std::cout << "foo's height: " << foo.getHeight << std::ENDL;

	struct st_human pod_foo;
	pod_foo.height = 5.4;
	pod_foo.weight = 45;
	
	std::cout << "pod_foo's weight: " << pod_foo.weight << std::ENDL;
	std::cout << "pod_foo's height: " << pod_foo.height << std::ENDL;

	
	return 0;
}