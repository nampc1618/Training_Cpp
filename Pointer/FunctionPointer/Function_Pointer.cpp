#include <iostream>
using namespace std;

const int a = 5;
const int b = 3;

// Overload function
int multiply(int a, int b){return a * b;}
int multiply(){return a * b;}

void print(int (*funcPtr)())
{
    cout << "Pass a function pointer as a parameter " << endl;
    cout << "The value of the product is: " << funcPtr() << endl;
}

int main()
{
    int (*funcPtr)(int, int);
    funcPtr = multiply;

    int result = funcPtr(10, 5);
    cout << "The value of the product is: " << result << endl;

    print(multiply);

    return 0;
}