/*****************************************************************
*	A simple class implementation
*	Description	:	use of class as object
*					1. operator overloading
*	Written by	:	James Jallorina
*	Date		:	09-26-2018
*
*	Note:
*	operator overloading	
*	Customizes the C++ operators for operands of user-defined types.
*	
*	Syntax
*	Overloaded operators are functions with special function names:
*	
*	operator op	(1)	
*	operator type	(2)	
*	operator new 
*	operator new []	(3)	
*	operator delete 
*	operator delete []	(4)	
*	operator "" suffix-identifier	(5)	(since C++11)
*
*	
*
*	source:	https://en.cppreference.com/w/cpp/language/operators
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
		void setVerticalJump(double v);
		void setVerticalJump(int v);
		void setSpeed(double s);
		void setSpeed(int s);
		void setStrength(double st);
		void setStrength(int st);
		//public getter functions
		double getHeight();
		double getWeight();
		cababilities *getHumanCap();
		human operator+(const human &h);
	private:
		double height;
		double weight;
		//cababilities
		struct ability{
			double dvertical_jump;
			double dspeed;
			double dstrength;
			int ivertical_jump;
			int ispeed;
			int istrength;
		} capabilities;
};

human::human(){} //default ctor
human::human(double h, double w, cababilities c) : height(h), weight(w), capabilities(c) {}
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

capabilities *human::getHumanCap()
{
	return &cababilities;
}

human human::operator+(const human &h)
{
	human foo;
	foo.dvertical_jump = this->dvertical_jump + h.dvertical_jump;
	foo.dspeed = this->dspeed + h.dspeed;
	foo.dstrength = this->dstrength + h.dstrength;
	foo.ivertical_jump = this->ivertical_jump + h.ivertical_jump;
	foo.ispeed = this->ispeed + h.ispeed;
	foo.istrength = this->istrength + h.istrength;
	return foo;
}

int main(int argc, char **argv)
{
	human foo(5.8, 50.0, {50.0, 100.5, 45.0, 0, 0, 0});	 //all examples not yet tested so I don't really sure if we the ctor can initialize 
														//a struct using double bracket :)
	human poo(6.0, 60.0, {70.0, 120.8, 45.3, 0, 0, 0});
	
	human loo = foo + poo;
	
	capabilities *foo_t = foo.getHumanCap();
	cababilities *poo_t = poo.getHumanCap();
	capabilities *loo_t = loo.getHumanCap();
	
	
	std::cout << "human foo vertical jump: " << foo_t->dvertical_jump << std::ENDL;
	std::cout << "human foo speed: " << foo_t->dspeed << std::ENDL;
	std::cout << "human foo strength: " << foo_t->dstrength << std::ENDL;
	
	std::cout << "human poo vertical jump: " << poo_t->dvertical_jump << std::ENDL;
	std::cout << "human poo speed: " << poo_t->dspeed << std::ENDL;
	std::cout << "human poo strength: " << poo_t->dstrength << std::ENDL;
	
	std::cout << "human loo vertical jump: " << loo_t->dvertical_jump << std::ENDL;
	std::cout << "human loo speed: " << loo_t->dspeed << std::ENDL;
	std::cout << "human loo strength: " << loo_t->dstrength << std::ENDL;
	
	return 0;
}