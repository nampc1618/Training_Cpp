#include <iostream>

using namespace std;
int main()
{
    int arr[3][4] = 
    {
        {11, 12, 13, 14},
        {21, 22, 23, 24},
        {31, 32, 33, 34}
    };
    int (*ptr)[4];
    ptr = arr;

    cout << ptr << " " << ptr + 1 << " " << ptr + 2 << endl;
    cout << *ptr << " " << *(ptr + 1) << " " << *(ptr + 2) << endl;
    cout << **ptr << " " << *(*(ptr + 1) + 2) << " " << *(*(ptr + 2) + 3) << endl; // *(*(arr + i) + j)
    cout << ptr[0][0] << " " << ptr[1][2] << " " << ptr[2][3] << endl;

    return 0;
}