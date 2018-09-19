/*****************************************************************
*	A simple class implementation
*	Description	:	use of class as object
*					1. private
*					2. public
*					3. protected
*	Written by	:	James Jallorina
*	Date		:	09-18-2018
*
*	Note:	
*	access specifiers
*	In a member-specification of a class/struct or union, define the 
*	accessibility of subsequent members. In a base-specifier of a derived class
*	declaration, define the accessibility of inherited members of the subsequent base class.
*	
*	
*	Syntax:
*	public : member-declarations	(1)	
*	protected : member-declarations	(2)
*	private : member-declarations	(3)
*
*
*	source:	https://en.cppreference.com/w/cpp/language/access%23Public_member_access
******************************************************************/



#include <iostream>

class human
{	
	public:
		human();
		~human();
		int public_height;
		int public_weight;

	
	private:
		int private_height;
		int private_weight;
};

human::human() 
{
	private_height = 6;
	private_weight = 75;
}	//default constructor

human::~human() {}	//default destructor



int main(int argc, char **argv)
{
	human foo;
	foo.public_height = 5.7;		//public member are access directly
	foo.public_weight = 50;
	
	std::cout << "foo's public weight: " << foo.public_weight << std::ENDL;
	std::cout << "foo's public height: " << foo.public_height << std::ENDL;

	
	std::cout << "foo's private weight: " << foo.private_weight << std::ENDL;		//this will cause error //we need to provide a public getter functions to 
	std::cout << "foo's private height: " << foo.private_height << std::ENDL;		// access the private data members
	
	return 0;
}