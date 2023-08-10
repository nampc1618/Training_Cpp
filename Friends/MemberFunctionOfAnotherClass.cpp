/* Advantages of Friend Functions
1. A friend function is able to access members without the need of inheriting the class
2. The friend function acts as a bridge between two classes by accessing their private data.
3. It can be used to increase the versability of overload operators.
4. It can be declared either in the public or private or protected part of the class.
*/

/* Disadvantages of Friend Functions
1. Friend functions have access to private members of a class from outside the class which violates the law of data hiding.
2. Friend functions cannot do any run-time polymorphism in their members.
*/

#include <iostream>

class Test;
class anotherClass
{
public:
    void memberFunction(Test &t);
};

class Test
{
private:
    int pri_var;
protected:
    int pro_var;
public:
    Test()
    {
        pri_var = 1;
        pro_var = 2;
    }

    friend void anotherClass::memberFunction(Test&);
};

void anotherClass::memberFunction(Test &t)
{
    std::cout << "pri_var = " << t.pri_var << std::endl;
    std::cout << "pro_var = " << t.pro_var << std::endl;
}

int main()
{
    Test t;
    anotherClass another;
    another.memberFunction(t);
    return 0;
}