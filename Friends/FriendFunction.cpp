#include <iostream>

class base
{
private:
    int pri_var;
protected:
    int pro_var;
public:
    base()
    {
        pri_var = 7;
        pro_var = 8;
    }

    friend void friendFunction(base &b);
};

// friendFunction has priviliges to access all private and protected members of the class
void friendFunction(base &b)
{
    std::cout << "private_var = " << b.pri_var << std::endl;
    std::cout << "protected_var = " << b.pro_var << std::endl;
}

int main()
{
    base b;
    friendFunction(b);
    return 0;
}