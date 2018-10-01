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
	human(double h, double w, ability_t c);
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
	human operator+(const human &h);
private:
	double height;
	double weight;
	//cababilities
	ability_t capabilities;
};

human::human() {};
human::human(double h, double w, ability_t c) : height(h), weight(w), capabilities(c) {}
human::~human() {}	//default dtor


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

void human::setVerticalJump(double v)
{
	capabilities.dvertical_jump = v;
}

void human::setVerticalJump(int v)
{
	capabilities.ivertical_jump = v;
}

void human::setSpeed(double s)
{
	capabilities.dspeed = s;
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
	capabilities.istrength = st;
}

ability_t *human::getHumanCap()
{
	return &capabilities;
}

human human::operator+(const human &h)
{
	human foo;
	foo.capabilities.dvertical_jump = this->capabilities.dvertical_jump + h.capabilities.dvertical_jump;
	foo.capabilities.dspeed = this->capabilities.dspeed + h.capabilities.dspeed;
	foo.capabilities.dstrength = this->capabilities.dstrength + h.capabilities.dstrength;
	foo.capabilities.ivertical_jump = this->capabilities.ivertical_jump + h.capabilities.ivertical_jump;
	foo.capabilities.ispeed = this->capabilities.ispeed + h.capabilities.ispeed;
	foo.capabilities.istrength = this->capabilities.istrength + h.capabilities.istrength;
	return foo;
}

int main(int argc, char **argv)
{
	human foo(5.8, 50.0, { 50.0, 100.5, 45.0, 0, 0, 0 });	 //all examples not yet tested so I don't really sure if we the ctor can initialize 
															//a struct using double bracket :)
	human poo(6.0, 60.0, { 70.0, 120.8, 45.3, 0, 0, 0 });

	human loo = foo + poo;

	ability_t *foo_t = foo.getHumanCap();
	ability_t *poo_t = poo.getHumanCap();
	ability_t *loo_t = loo.getHumanCap();


	std::cout << "human foo vertical jump: " << foo_t->dvertical_jump << std::endl;
	std::cout << "human foo speed: " << foo_t->dspeed << std::endl;
	std::cout << "human foo strength: " << foo_t->dstrength << std::endl;

	std::cout << "human poo vertical jump: " << poo_t->dvertical_jump << std::endl;
	std::cout << "human poo speed: " << poo_t->dspeed << std::endl;
	std::cout << "human poo strength: " << poo_t->dstrength << std::endl;

	std::cout << "human loo vertical jump: " << loo_t->dvertical_jump << std::endl;
	std::cout << "human loo speed: " << loo_t->dspeed << std::endl;
	std::cout << "human loo strength: " << loo_t->dstrength << std::endl;

	return 0;
}