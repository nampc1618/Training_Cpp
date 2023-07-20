#include <iostream>

// Example Pass by value
int functionTestPassByVal(int a, int b){
    a += b;
    std::cout << "a = " << a << ", b = " << b << std::endl;
    return a + b;
}

void functionTestPassByRef(int* a, int *b){
    *a += *b;
    std::cout << "value a = " << *a << " , value b = " << *b << std::endl;
}

int main()
{
    std::cout << "---Example pass by value---\n";
    int a = 8, b = 9;
    int sum = functionTestPassByVal(a, b);
    std::cout << "In main() " << "a = " << a << " , b = " << b << std::endl;
    std::cout << "sum = " << sum << std::endl;

    std::cout << "---Example pass by reference---" << std::endl;
    int x = 2, y = 3;
    functionTestPassByRef(&x, &y);
    std::cout << "In main() " << "value x = " << x << ", value y = " << y << std::endl;

    return 0;
}