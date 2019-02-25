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
	
	std::vector<int>::iterator it;

	it = find(vstack.begin(), vstack.end(), 7);
	if(it != vstack.end())
		std::cout << "found 7 on vector: " << *it << std::endl; 
		 	
	return 0;	
}
