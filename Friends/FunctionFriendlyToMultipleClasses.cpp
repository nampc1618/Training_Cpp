#include <iostream>

class Test1;
class Test2;

class Test1
{
private:
    int pri_var;
protected:
    int pro_var;
public:
    Test1(int var1, int var2) : pri_var(var1), pro_var(var2)
    {
    }

    friend void findNumberThanGreat(Test1&, Test2&);
};

class Test2
{
private:
    int pri_var;
protected:
    int pro_var;
public:
    Test2(int var1, int var2) : pri_var(var1), pro_var(var2)
    {
    }
    friend void findNumberThanGreat(Test1&, Test2&);
};

void findNumberThanGreat(Test1 &t1, Test2 &t2)
{
    if(t1.pri_var > t2.pri_var)
    {
        std::cout << t1.pri_var;
    }
    else
        std::cout << t2.pri_var;
}

int main()
{
    Test1 t1(5, 6);
    Test2 t2(7, 8);
    findNumberThanGreat(t1, t2);
    return 0;
}