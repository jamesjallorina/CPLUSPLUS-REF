#include <iostream>
#include <string.h>
#include <stdlib.h>

#include <memory>

namespace custom {

template <typename T>
class basic_string
{
	public:
	/* constructor */
	basic_string();
	basic_string(T *p);
	basic_string(T v);
	~basic_string();

	/* public interfaces */
		
	private:
	T *p;
	
}

template <typename T>
basic_string<T>::basic_string()
{
	std::cout << "[default ctor]: basic_string object created" << std::endl; 
}

template <typename T>
basic_string<T>::basic_string(T *p)
{
	//will continue if have time	

}

template <typename T>
basic_string<T>::~basic_string()
{
	std::cout << "[default dtor]: basic_string object destroyed" << std::endl;
}

} //namespace custom
