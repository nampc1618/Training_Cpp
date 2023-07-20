#include <iostream>

using namespace std;

class operation
{
    private:
        int a, b, add, sub, mul;
        float div;
    public:
        void get();
        void sum();
        void difference();
        void multi();
        void division();
};
inline void operation::get()
{
    cout << "Enter first value:";
    cin >> a;
    cout << "Enter second value:";
    cin >> b;
}
inline void operation::sum()
{
    add = a + b;
    cout << "Additon of two numbers: " << a + b << "\n";
}
inline void operation::difference()
{
    sub = a - b;
    cout << "Difference of two numbers: " << a - b << "\n";
}
inline void operation::multi()
{
    mul = a * b;
    cout << "Multi of two numbers: " << a * b << "\n";
}
inline void operation::division()
{
    div = a / b;
    cout << "Division of two numbers: " << a / b << "\n";
}

int main()
{
    cout << "Program using inline function\n";
    operation s;
    s.get();
    s.sum();
    s.difference();
    s.multi();
    s.division();
    return 0;
}