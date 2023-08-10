// unique_ptr stores one pointer only. We can assign a different object by removing the current object from the pointer.

/*C++ program to demonstrate the working of unique_ptr
Here we are showing the unique_ptr is pointing to P1.
But, then we remove P1 and assign P2 so the pointer now points to P2.
*/
#include <iostream>
#include <memory> // Dynamic Memory management library

class Rectangle
{
private:
    int length;
    int breadth;
public:
    Rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    }
    int area() {return length * breadth;}
};

int main()
{
    //Smart Pointer
    std::unique_ptr<Rectangle> P1(new Rectangle(10, 5));
    std::cout << P1->area() << std::endl;

    std::unique_ptr<Rectangle> P2;
    P2 = move(P1);

    std::cout << P2->area() << std::endl;

    return 0;
}