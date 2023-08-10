#include <iostream>
using namespace std;

// Function Template 1
template <typename T> T myMax(T x, T y)
{
    return (x > y) ? x : y;
}

// Function Template 2
template <class T> void bubbleSort(T arr[], int n)
{
    for (int i = 0; i < n-1; i++)
    {
        for (int j = n-1; i < j; j--)
        {
            if(arr[j] < arr[j-1])
                swap(arr[j], arr[j-1]);
        }
        
    }
    
}

// Class Template 1
template <typename T> class Array
{
private:
    T* ptr;
    int size;
public:
    Array(T arr[], int s);
    void print();
};
template <typename T> Array<T>::Array(T arr[], int s)
{
    ptr = new T[s];
    size = s;
    for (int i = 0; i < size; i++)
    {
        ptr[i] = arr[i];
    }
    
}
template <typename T> void Array<T>::print()
{
    for (int i = 0; i < size; i++)
    {
        cout << " " << *(ptr + i);
    }
    cout << endl;
}

// Class Template 2
template <class T, class U> class A 
{
    T x;
    U y;
public:
    A() { cout << "Construct Called: " << typeid(T).name() << " - " << typeid(U).name() << endl; }
};

// Class Template 3
template <class T, class U = char> class B
{
public:
    T x;
    U y;
    B() {cout << "Constructor Called: " << typeid(T).name() << endl;}
};

// Class Template 4
template <class T, int max> int arrMin(T arr[], int n)
{
    int m = max;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] < m)
            m = arr[i];
    }
    return m;
}

// Class Template 5
template <class T> class info
{
public:
    info(T A)
    {
        cout << "\n" << "A = " << A << " size of data in bytes: " << sizeof(A);
    }
};

int main()
{
    cout << "=====Test Function Template 1=====" << endl;
    cout << myMax<int>(8, 6) << endl;
    cout << myMax<double>(5.3, 8.9) << endl;
    cout << myMax<char>('a', 'n') << endl;

    cout << "=====Test Function Template 2=====" << endl;
    int arr[8] = {3, 9, 5, 20, 45, 22, 10, 60};
    int n = sizeof(arr) / sizeof(arr[0]);
    bubbleSort<int>(arr, n);
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "=====Test Class Template 1=====" << endl;
    int arrTemplate1[5] = {1, 2, 3, 4, 5};
    Array<int> array(arrTemplate1, 5);
    array.print();

    cout << "=====Test Class Template 2=====" << endl;
    A<char, char> c;
    A<int, double> d;

    cout << "=====Test Class Template 3=====" << endl;
    B<int> g;

    cout << "=====Test Class Template 4=====" << endl;
    int arr1[] = {10, 20, 15, 12};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    char arr2[] = {1, 2, 3};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    // Second template parameter to arrMin must be a constant
    cout << arrMin<int, 10000>(arr1, n1) << endl;
    cout << arrMin<char, 256>(arr2, n2) << endl;

    cout << "=====Test Class Template 5=====" << endl;

    // passing character value by creating an objects
    info<char> ch('x');

    // passing integer value by creating an object
    info<int> inte(22);

    // passing float value by creating an object
    info<float> fl(2.25);

    return 0;
}