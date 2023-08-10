// Void Pointer is a specific pointer type -void*- a pointer that points
// to some data location in storage, which doesn't have any specific type.
// void refers to the type. Basically the type of data that is points to is can be any.
// If we assign address of char data type to void pointer it will become char Pointer.
// if int data type then int pointer and so on. Any pointer type is convertible to a void
// pointer hence it can point to any value.
//
// *** Impotant Points
// 1. void pointers cannot be dereferenced. It can however be done using typecasting the void pointer
// 2. Pointer arithmetic is not possible on pointers of void due to lack of concrete value and thus size.

#include <iostream>
using namespace std;
int main()
{
    int x = 4;
    float y = 5.5;
    // A void pointer
    void* ptr;
    ptr = &x;
    // (int*)ptr - does type casting of void
    // *((int*)ptr) - dereferences the type casted void pointer variable.
    cout << "Integer variable is = " << *((int*)ptr) << endl;
    ptr = &y;
    cout << "Float variable is = " << *((float*)ptr) << endl;

    return 0;
}