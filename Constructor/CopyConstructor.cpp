#include <iostream>

class Point
{
private:
    int x, y;
public:
    Point(int x1, int y1) : x(x1), y(y1)
    {
        std::cout << "x = " << x << ", y = " << y << std::endl;
    }
    Point(const Point& p1)
    {
        x = p1.x;
        y = p1.y;
    }

    // get method
    int getx() {return x;}
    int gety() {return y;}

    // set method
    void setx(int x) {this->x = x;}
    void sety(int y) {this->y = y;}

};

int main()
{
    Point p1(2, 3);
    Point p2(p1);

    std::cout << "x1 = " << p1.getx() << ", y1 = " << p1.gety() << std::endl;
    std::cout << "x2 = " << p2.getx() << ", y2 = " << p2.gety() << std::endl;

    p2.setx(6);
    p2.sety(8);

    std::cout << "x1 = " << p1.getx() << ", y1 = " << p1.gety() << std::endl;
    std::cout << "x2 = " << p2.getx() << ", y2 = " << p2.gety() << std::endl;
    return 0;
}