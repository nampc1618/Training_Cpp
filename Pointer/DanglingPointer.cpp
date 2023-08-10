// A pointer pointing to a memory location that has been deleted (or freed) is called dangling pointer.
// There are three different ways where Pointer acts as dangling pointer.

/* 1. De-allocation of memory
#include <cstdlib>
#include <iostream>

int main()
{
    int* ptr = (int *)malloc(sizeof(int));

    // After below free call, ptr becomes a dangling pointer
    free(ptr);

    // No more dangling pointer
    ptr = NULL;

    return 0;
}*/

/* 2. Function Call
// The pointer pointing to local variable becomes dangling when local variable is not static


#include <iostream>

int* fun()
{
    // x is local variable and goes out of scope after an execution of fun() is over.
    // with c++ 17 is the compiler will inform error, and cannot complie.
    // int x = 5;

    // we will must to declare a static variable.
    // x now has scope throughout the program.
    static int x = 5;
    return &x;
}

int main()
{
    int *p = fun();
    fflush(stdin);

    // p points to something which is not valid anymore
    std::cout << *p;

    return 0;
}*/

/* 3. Variable goes out of scope
int main()
{
    int *ptr;
    ...
    ...
    {
        int ch;
        ptr = &ch;
    }
    ...
    // Here ptr is dangling pointer.
}
*/