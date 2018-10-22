/*****************************************************************
*	A simple class implementation
*	Description	:	use of class as object
*					1. Singleton
*	Written by	:	James Jallorina
*	Date		:	10-21-2018
*
*	Description: 
*		A singleton example. Thread Safe implementation
*
*	source:	https://stackoverflow.com/questions/6568486/when-do-we-need-a-private-constructor-in-c
******************************************************************/



#include <iostream>


class Singleton
{
private:
	Singleton();


public:
	~Singleton();
	Singleton (Singleton const &) = delete;
	Singleton& operator=(Singleton const &) = delete;
	static Singleton& getInstance();
};

Singleton &Singleton::getInstance()
{
	static Singleton instance;
	return instance;
}	

int main(int argc, char **argv)
{
	Singleton *s = Singleton::getInstance();
	Singleton *s1 = Singleton:getInstance();

	return 0;
}