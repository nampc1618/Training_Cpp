// NULL Pointer is a pointer which is pointing to nothing. In case, if we don't have address to be assigned to a pointer
// then we can simply use NULL.
// ***Important Points
// 1. NULL vs Uninitialized pointer - An uninitialized pointer stores an undefined value. A null pointer
//    stores a defined value, but one that is defined by the environment to not be a valid address for any member or object.
// 2. NULL vs Void Pointer - Null pointer is a value, while void pointer is a type.

#include <iostream>

using namespace std;
int main()
{
    // Null pointer
    int* ptr = NULL;
    cout << "The value of ptr is " << ptr;

    return 0;
}