/*****************************************************************
*	A simple class implementation
*	Description	:	use of class as object
*					1. function overloading
*	Written by	:	James Jallorina
*	Date		:	09-25-2018
*
*	Note:	
*	You can have multiple definitions for the same function name in the same scope.
*	The definition of the function must differ from each other by the types and/or 
*	the number of arguments in the argument list. You cannot overload function declarations 
*	that differ only by return type.
*
*	source:	https://www.tutorialspoint.com/cplusplus/cpp_overloading.htm
******************************************************************/



#include <iostream>

typedef struct {
	double dvertical_jump;
	double dspeed;
	double dstrength;
	int ivertical_jump;
	int ispeed;
	int istrength;
}ability_t;


class human	
{	
	public:
		human();
		~human();
		//public setter functions
		void setHeight(double h);
		void setWeight(double w);
		void setVerticalJump(double v);
		void setVerticalJump(int v);
		void setSpeed(double s);
		void setSpeed(int s);
		void setStrength(double st);
		void setStrength(int st);
		//public getter functions
		double getHeight();
		double getWeight();
		ability_t *getHumanCap();
	private:
		double height;
		double weight;
		//cababilities
		ability_t cababilities;

};

human::human(){} //default ctor
human::human(double h, double w, ability_t c) : height(h), weight(w), cababilities(c) {}
human::~human(){}	//default dtor


void human::setWeight(int h)
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

void human::setVerticalJump(double v)
{
	cababilities.dvertical_jump = v;
}

void human::setVerticalJump(int v)
{
	cababilities.ivertical_jump = v;
}

void human::setSpeed(double s)
{
	cababilities.dspeed = s;
}

void human::setSpeed(int s)
{
	capabilities.ispeed = s;
}

void human::setStrength(double st)
{
	capabilities.dstrength = st;
}

void human::setStrength(int st)
{
	cababilities.istrength = st;
}

ability_t *human::getHumanCap()
{
	return &cababilities;
}

int main(int argc, char **argv)
{
	human foo(5.8, 50.0, {50.0, 100.5, 45.0, 0, 0, 0});	 //all examples not yet tested so I don't really sure if we the ctor can initialize 
														//a struct using double bracket :)
	
	ability_t *foo_t = foo.getHumanCap();
	
	std::cout << "human vertical jump: " << foo_t->dvertical_jump << std::ENDL;
	std::cout << "human speed: " << foo_t->dspeed << std::ENDL;
	std::cout << "human strength: " << foo_t->dstrength << std::ENDL;
	
	return 0;
}