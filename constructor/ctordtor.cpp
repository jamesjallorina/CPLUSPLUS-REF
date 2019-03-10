#include <iostream>
#include <string>
#include <vector>

class Base{
public:
	Base(const std::string &s) : msg(s) { std::cout << s << std::endl; }
	~Base() { std::cout << "~" << msg << std::endl; }
private:
	std::string msg;
};

void f(const std::vector<int> &v)
{
	Base b{"in f()"};
	for(auto f : v)
		Base a{std::string{"v loop"} + 	std::to_string(f)};
}




int main(int argc, char **argv)
{
	f({2,3,4,5});

	return 0;	

}
