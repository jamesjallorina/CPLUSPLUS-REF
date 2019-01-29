#include <iostream>
#include <vector>

int main(int argc, char **argv)
{
	std::vector<int> value = {1, 2, 3, 4, 5};
	for(auto i : value) {std::cout<< i << std::endl;}

	return 0;
}
