// C++ program to demonstrate Encapsulation
#include <iostream>

class Encapsulation
{
private:
    // Data hidden from outside world
    int x;
public:
    // Function to set value of variable x
    void set(int a) { x = a; }
    int get() { return x; }
};

int main()
{
    Encapsulation obj;
    obj.set(9);
    std::cout << "x = " << obj.get() << std::endl;
    return 0;
}