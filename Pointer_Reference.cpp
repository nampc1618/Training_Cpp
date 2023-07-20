#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    int *p; // The pointer can null, when declare we can no need to assign a value
    p = &x;
    int &ref = x; // The variable reference can not null

    cout << "Pointer address: " << p << endl;
    cout << "Reference address: " << &ref << endl;

    cout << "Value pointer: " << *p << endl;
    cout << "Value reference: " << ref << endl;
    return 0;
}