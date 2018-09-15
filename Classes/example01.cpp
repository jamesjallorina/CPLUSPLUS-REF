/************************************
*	A simple class implementation
*	Description	:	use of class as object
*	Written by	:	James Jallorina
*	Date		:	09-16-2018
*	
*************************************/

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
	std::cout << "foo's height: " << foo.setWeight() << std::ENDL;

	return 0;
}