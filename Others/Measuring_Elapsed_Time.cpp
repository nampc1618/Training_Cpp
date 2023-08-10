#include <chrono>
#include <algorithm>
#include <iostream>

using namespace std::chrono;
void test();

void test()
{
    for (int i = 0; i < 10; i++)
    {
        continue;
    }
    
}

int main()
{
    // WAY 1
    std::cout << "---------WAY 1---------" << std::endl;
    // Recording the timestamp at the start of the code
    auto beg = high_resolution_clock::now();

    // For demonstration a loop is ran which goes from 0 to 50000
    for (int i = 0; i < 50000; i++)
    {
        continue;
    }
    // Taking a timestamp after the code is ran
    auto end = high_resolution_clock::now();

    // Substracting the and timestamp from the begining
    // And we choose to recieve the difference in microseconds
    auto duration = duration_cast<microseconds>(end - beg);

    // Displaying the elapsed time
    std::cout << "Elapsed time: " << duration.count();

    // WAY 2
    std::cout << "---------WAY 2---------" << std::endl;
    return 0;
}