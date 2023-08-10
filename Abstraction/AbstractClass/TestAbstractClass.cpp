#include <iostream>

class Shape
{
protected:
    int width, height;
public:
    virtual int getArea() = 0;
    void setWidth(int w)
    {
        width = w;
    }
    void setHeigh(int h)
    {
        height = h;
    }
};

class Rectangle : public Shape
{
public:
    int getArea()
    {
        return width * height;
    }
};

class Triangle : public Shape
{
public:
    int getArea()
    {
        return (width * height) / 2;
    }
};

int main()
{
    Rectangle rect;
    Triangle tri;

    rect.setHeigh(5);
    rect.setWidth(10);

    std::cout << "Area Rectangle = " << rect.getArea() << std::endl;

    tri.setHeigh(8);
    tri.setWidth(9);

    std::cout << "Area Triangle = " << tri.getArea() << std::endl;

    return 0;
}