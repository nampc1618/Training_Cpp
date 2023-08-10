#include <iostream>

class Parent
{
public:
    void Test_Print()
    {
        std::cout << "Parent Function" << std::endl;
    }
};

class Child : public Parent
{
public:
    void Test_Print()
    {
        std::cout << "Child Function" << std::endl;
        Parent::Test_Print();
    }
};

int main()
{
    // Have 3 ways access to function of Base class
    // 1. 
    Child child;
    child.Test_Print();
    
    //2. using Pointer
    Parent* ptr = &child;
    ptr->Test_Print();

    //3.
    child.Parent::Test_Print();

    return 0;
}