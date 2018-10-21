/*****************************************************************
*	A simple class implementation
*	Description	:	use of class as object
*					1. Singleton
*	Written by	:	James Jallorina
*	Date		:	10-21-2018
*
*	Description: 
*		A simple implementation of singleton. Later we will explain a more advanced singleton
*	design pattern.
*
*	source:	https://stackoverflow.com/questions/6568486/when-do-we-need-a-private-constructor-in-c
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