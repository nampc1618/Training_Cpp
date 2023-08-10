// Example for demonstrate difference between pointer to an integer and pointer to an array of integer.
#include <iostream>

using namespace std;
int main()
{
    // Pointer to an integer
    int *p;

    // pointer to an array of 5 integers
    int (*ptr)[5];
    int arr[5];

    // Pointd to 0th element of the arr
    p = arr;

    // Points to the whole array arr.
    ptr = &arr;

    cout << "p = " << p << ", ptr = " << ptr << endl;
    p++;
    ptr++;
    cout << "p = " << p << ", ptr = " << ptr << endl;

    int arr1[] = {1, 2, 3, 4, 5, 6};
    int *p1 = arr1;
    int (*ptr1)[6] = &arr1;
    cout << "p1 = " << p1 << ", ptr1 = " << ptr1 << endl;
    cout << "*p1 = " << *p1 << ", *ptr1 = " << ptr1 << endl;
    cout << "sizeof(p1) = " << sizeof(p1) << ", sizeof(*p1) = " << sizeof(*p1) << endl;
    cout << "sizeof(ptr1) = " << sizeof(ptr1) << ", sizeof(*ptr1) = " << sizeof(*ptr1) << endl;

    return 0;
}