/*****************************************************************
*	A simple class implementation
*	Description	:	use of class as object
*					1. inheritance
*	Written by	:	James Jallorina
*	Date		:	09-24-2018
*
*	Note:	
*	Access				public	protected	private
*	Same class			yes		yes			yes
*	Derived classes		yes		yes			no
*	Outside classes		yes		no			no
*
*	source:	https://www.tutorialspoint.com/cplusplus/cpp_inheritance.htm
******************************************************************/



#include <iostream>

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

human::human() : height(0), weight(0) {} //default ctor
human::~human(){}	//default dtor


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


class runner : public human
{	
	public:
		runner(){}
		~runner(){}
		double getSpeed();
	private:
		double distance_run;
		double time_finished;
		double speed;
		double calculate_speed(double distance, double time);
}

runner::runner(double d = 0.0, double t = 0.0) : distance_run(d), time_finished(t) 
{
	speed = 0.0;
}

double runner::calculate_speed(double distance, double time)
{
		speed = distance/time;
		return speed;
}

double runner::getSpeed()
{
	return calculate_speed(this->distance_run, this->time_finished)
}

int main(int argc, char **argv)
{
	runner foo(100, 10);
	
	std::cout << "speed of runner: " << foo.getSpeed() << std::ENDL;
	
	return 0;
}