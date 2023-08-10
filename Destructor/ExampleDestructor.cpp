/* Properties of Destructor
1. The destructor function is automatically invoked when the objects are destroyed.
2. It cannot be declared static or const
3. The destructor does not have argurments.
4. It has no return type not even void.
5. An object of a class with a Destructor cannot become a member of the union.
6. A destructor should be declared in the public section of the class.
7. The programmer cannot access the address of the destructor.
*/

/* When is the destructor called
1. the function ends
2. the program ends
3. a block containing local variables ends.
4. a delete operator is called.
*/

#include <iostream>

int cCount = 0;
int dCount = 0;

class DemoDestructor
{
public:
    DemoDestructor()
    {
        cCount++;
        std::cout << "No. of Object created: " << cCount << std::endl;
    }
    ~DemoDestructor()
    {
        dCount++;
        std::cout << "No. of Object destroyed: " << dCount << std::endl;
    }
};

int main()
{
    DemoDestructor d0, d1, d2, d3;
    return 0;
}