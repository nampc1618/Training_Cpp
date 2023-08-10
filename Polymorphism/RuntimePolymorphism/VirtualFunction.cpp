/* Virtual Function
A virtual function is a member function that is declared in the base class using keyword virtual 
and is re-defined in the derived class

Some Key Points about Virtual Functions:
1. Virtual functions are Dynamic in nature
2. They are defined by inserting the keyword "virtual" inside a base class and are always declared with a base class
and overridden in a child class.
3. A virtual function is called during Runtime.
*/

#include <iostream>

class Base
{
public:
    virtual void display()
    {
        std::cout << "Called virtual function in Base Class" << "\n";
    }
    void print()
    {
        std::cout << "Called print function in Base Class" << "\n";
    }
};

class Derived : public Base
{
public:
    void display()
    {
        std::cout << "Called display function in Derived Class" << "\n";
    }
    void print()
    {
        std::cout << "Called print function in Derived Class" << std::endl;
    }
};

int main()
{
    Base* base;
    Derived derived;

    base = &derived;

    base->display();
    base->Base::display();
    base->print();
    derived.display();

    return 0;
}