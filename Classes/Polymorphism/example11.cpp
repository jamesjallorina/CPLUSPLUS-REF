/*****************************************************************
*	A simple class implementation
*	Description	:	use of class as object
*					1. Polymorphism
*	Written by	:	James Jallorina
*	Date		:	10-24-2018
*
*	Note:
*	The generic definition of the word polymorphism is the occurrence of something
* 	in several different forms. When *	considered relative to computer science, 
*	software engineering, and all things related to developing a software *system, 
*	it is often said that polymorphism lacks a clear explanation; nothing could be further from the truth.
*
*	source:	https://en.cppreference.com/book/intro/polymorphism
******************************************************************/



#include <iostream>

class human
{
	
public:
	virtual int speak();
	virtual int walk();
	virtual int run();
	virtual int jump();
	human();
	virtual ~human();
};

human::human() {}
human::~human() {}

int human::speak()
{
	std::cout << "human speak \n";
	return 0;
}

int human::walk()
{
	std::cout << "human walk \n";
	return 0;
}

int human::run()
{
	std::cout << "human run \n";
	return 0;
}

int human::jump()
{
	std::cout << "human jump \n";
	return 0;
}

class android : public human()
{
public:
	int speak();
	int walk();
	int run();
	int jump();
	android();
	~android();
}

int android::speak()
{
	std::cout << "android speak \n";
	return 0;
}

int android::walk()
{
	std::cout << "android walk \n";
	return 0;
}

int android::run()
{
	std::cout << "android run \n";
	return 0;
}

int android::jump()
{
	std::cout << "android jump \n";
	return 0;
}

android::android() {}
android::~android() {}

int main(int argc, char **argv)
{
	human *p = new android();
	
	p->speak();
	p->walk();
	p->run();
	p->jump();
	
	delete p;
	p = nullptr;
	
	return 0;
}