#include <iostream>
#include <vector>
#include <algorithm>

int main(int argc, char **argv)
{
	std::vector<int> vstack;
	vstack.reserve(10);

	for(int i=10; i>0; i--)	
		vstack.push_back(i);

	for(auto &a : vstack)
	       std::cout << a << std::endl;

	std::vector<int>::iterator itr1 = vstack.begin();
	std::vector<int>::iterator itr2 = vstack.end();

	sort(itr1, itr2);

	for(auto &a : vstack)
		std::cout << a << std::endl;

	return 0;	
}
