#include <iostream>

using namespace std;

template <class T> class SmartPtr
{
    T* ptr;
public:
    // Constructor
    explicit SmartPtr(T* p = NULL) {ptr = p;}

    // Destructor
    ~SmartPtr() {delete(ptr);}

    // Overloading dereferencing operator
    T& operator*() {return *ptr;}

    // Overloading arrow operator so that members of T can be accessed
    // like a pointer (useful if T represents a class or struct or union type)
    T* operator->(){return ptr;}
};

int main()
{
    SmartPtr<float> ptr(new float());
    *ptr = 50.87;
    cout << *ptr << endl;
    cout << "size of *ptr: " << sizeof(*ptr) << endl;
    return 0;
}