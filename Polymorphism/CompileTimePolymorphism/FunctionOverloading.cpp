#include <iostream>

class TestFuncOverloading
{
public:
    void func(int x)
    {
        std::cout << "value of x is " << x << std::endl;
    }
    void func(double x)
    {
        std::cout << "value of x is " << x << std::endl;
    }
    void func(int x, double y)
    {
        std::cout << "value of x is " << x <<"\n";
        std::cout << "value of y is " << y << "\n";
    }
};

int main()
{
    TestFuncOverloading obj;

    obj.func(5);
    obj.func(0.05);
    obj.func(7, 0.09);

    return 0;
}