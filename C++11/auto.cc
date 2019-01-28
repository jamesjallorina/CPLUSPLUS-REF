#include <iostream>
#include <string>

class A
{
    public:
        A() { std::cout << "ctor A created" << std::endl;}
        A(int a, int b) : a(a), b(b) { std::cout << "ctor A created" << std::endl; }
        A(const A &a) 
        { 
            this->a = a.a;
            this->b = a.b;
        }
        ~A() { std::cout << "dtor A destroyed" << std::endl; }
        void print()
        {
            std::cout << "a: " << this->a << std::endl;
            std::cout << "b: " << this->b << std::endl;
        }
    private:
        int a;
        int b;
};


int main(int argc, char **argv)
{
    auto i = 0;
    auto str = "this is a string";
    A a_obj(10,20);
    auto _a_obj = a_obj;

    std::cout << "this is a string: " << str << std::endl;
    std::cout << "this is an int: " << i << std::endl;
    _a_obj.print();
    return 0;

}
