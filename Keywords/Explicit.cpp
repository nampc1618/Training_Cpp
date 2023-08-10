#include <iostream>

class Complex
{
private:
    double real;
    double imag;
public:
    // Default constructor
    explicit Complex(double r=0.0, double i=0.0) : real(r), imag(i)
    {

    }
    // A method to compare two Complex numbers
    bool operator == (Complex rhs)
    {
        return (real == rhs.real && imag == rhs.imag);
    }
};

int main()
{
    Complex com1(3.0, 0.0);
    if(com1 == (Complex)3.0)
    {
        std::cout << "Same";
    }
    else
        std::cout << "No same";
}