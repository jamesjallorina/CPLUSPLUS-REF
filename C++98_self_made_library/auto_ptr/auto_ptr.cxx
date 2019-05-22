#include <iostream>

namespace custom{

template<class T>
class auto_ptr
{
public:
	auto_ptr(T *ptr);

	~auto_ptr();

	T *operator->();
	
	T &operator*();
	
	T *get();
	
	void operator=(T *ptr);
	
	T *release();
	
	void reset(T *p = 0);
private:
	auto_ptr() {}
	T *ptr;
};

template <class T>
auto_ptr<T>::auto_ptr(T *ptr)
{
	this->ptr = ptr;
}

template <class T>
auto_ptr<T>::~auto_ptr()
{
	if(ptr)
	{
		delete ptr;
		ptr = NULL;
	}
}

template <class T>
T *auto_ptr<T>::operator->()
{
	return ptr;
}

template <class T>
T &auto_ptr<T>::operator*()
{
	return *ptr;
}

template <class T>
T *auto_ptr<T>::get()
{
	return ptr;
}

template <class T>
void auto_ptr<T>::operator=(T *ptr)
{
	if(this->ptr)
	{
		delete this->ptr;
		this->ptr = NULL;
	}
	this->ptr = ptr;
}

template <class T>
T *auto_ptr<T>::release()
{
	if(ptr)
	{
		delete ptr;
		ptr = NULL;
	}
	return ptr;
}

template <class T>
void auto_ptr<T>::reset(T *ptr)
{
	if(this->ptr)
	{
		delete this->ptr;
		this->ptr = NULL;
	}
	this->ptr = ptr;	
}

} // namespace custom

class foo 
{
	public:
	foo() { std::cout << "foo object created" << std::endl; }
	~foo() { std::cout << "foo object destroyed" << std::endl; }

	bool show()
	{
		std::cout << "this is a foo object class" << std::endl; 
	}

};

int main(int argc, char **argv)
{
	custom::auto_ptr<foo> pt(new foo);

	pt->show();	
//	custom::auto_ptr<int> pt(new int);
//	*pt = 5;

//	std::cout << "dereferenced : " << *pt << std::endl;
	return 0;	
}
