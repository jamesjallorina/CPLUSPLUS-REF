/*****************************************************************
*	A simple class implementation
*	Description	:	use of class as object
*					1. Singleton
*	Written by	:	James Jallorina
*	Date		:	10-21-2018
*
*
*
*	source:	https://en.cppreference.com/w/cpp/language/operators
******************************************************************/



#include <iostream>


class Singleton
{
private:
	static Singleton *instance;

public:
	Singleton();
	~Singleton();
	Singleton *getInstance();
};

Singleton *Singleton::getInstance()
{
	if (!instance)
	{
		std::cout << "instance created" << std::endl;
		return instance = new Singleton();
	}
	else
	{
		std::cout << "instance already created" << std::endl;
		return instance;
	}
}	

Singleton::instance = NULL;

int main(int argc, char **argv)
{
	Singleton *s = Singleton::getInstance();
	Singleton *s1 = Singleton:getInstance();

	return 0;
}