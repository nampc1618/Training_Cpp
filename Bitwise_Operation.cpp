#include <iostream>
#include <bitset>

using namespace std;

int main()
{
    // a = 5(00000101)
    // b = 9(00001001)
    int a = 5, b = 9;
    std::cout << "a = " << a << "," << " b = " << b << endl;
    // a & b the result is 00000001
    cout << "a & b = " << bitset<8>((a & b)) << endl;
    // a | b the result is 00001101
    cout << "a | b = " << bitset<8>((a | b)) << endl;
    // a ^ b the result is 00001100
    cout << "a ^ b = " << bitset<8>((a ^ b)) << endl;
    // ~a the result is 11111010
    cout << "a ~ b = " << bitset<8>((~a)) << endl;
    // b << 2 the result is 00100100
    cout << "b << 2 = " << bitset<8>((b << 2)) << endl;
    cout << "b << 2 = " << (b << 2) << endl;
    // b >> 2 the result is 
    cout << "b >> 2 = " << bitset<8>((b >> 2)) << endl;
    cout << "b >> 2 = " << (b >> 2) << endl;

    return 0;
}