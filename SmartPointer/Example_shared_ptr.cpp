/*
C++ program to demonstrate the working of shared_ptr
Here both smart pointer P1 and P2 are pointing to the
object Addtion to which they both maintain a reference of the object
*/
 #include <iostream>
 #include <memory>

 class Rectangle
 {
private:
    int length;
    int breadth;
public:
    Rectangle(int l, int b){
        length = l;
        breadth = b;
    }
    int area() {return length * breadth;}
 };

 int main()
 {
    std::shared_ptr<Rectangle> P1(new Rectangle(20, 30));
    std::cout << P1->area() << std::endl;

    std::shared_ptr<Rectangle> P2;
    P2 = P1;

    std::cout << P2->area() << std::endl;
    std::cout << P1->area() << std::endl;

    std::cout << P1.use_count() << std::endl;

    return 0;
 }