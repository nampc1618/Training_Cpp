// C++ program to demonstrate the working of Abstraction
#include <iostream>

class ImplementAbstraction
{
private:
    int a, b;
public:
    void set(int x, int y)
    {
        a = x;
        b = y;
    }
    void display()
    {
        std::cout << "a = " << a << std::endl;
        std::cout << "b = " << b << std::endl;
    }
};

int main()
{
    ImplementAbstraction obj;
    obj.set(5, 10);
    obj.display();
    return 0;
}