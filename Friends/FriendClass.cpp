#include <iostream>

class DemoFriend
{
private:
    int private_var;
protected:
    int protected_var;
public:
    DemoFriend(int var1, int var2) : private_var(var1), protected_var(var2)
    {
        
    }

    friend class TestClassFriend;
};

class TestClassFriend
{
public:
    void Display(DemoFriend &demo)
    {
        std::cout << "private_var = " << demo.private_var << std::endl;
        std::cout << "protected_var = " << demo.protected_var << std::endl;
    }
};

int main()
{
    DemoFriend dm(5, 6);

    TestClassFriend test;
    test.Display(dm);
    return 0;
}