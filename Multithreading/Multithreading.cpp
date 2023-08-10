#include <iostream>
#include <thread>

// A dummy function
void foo(int z)
{
    for (int i = 0; i < z; i++)
    {
        std::cout << "Thread 1 using function object as callable\n";
    }
    
}

// A callable object
class thread_obj
{
public:
    void operator() (int x)
    {
        for (int i = 0; i < x; i++)
        {
            std::cout << "Thread 2 using function object as callable\n";
        }
        
    }
};

int main()
{
    std::cout << "Thread 1 and 2 and 3 operating indepentently" << std::endl;

    //This is thread launched by using function pointer as callable
    std::thread th1(foo, 3);

    //This is thread is launched by using function object as callable
    std::thread th2(thread_obj(), 3);

    // Define a Lambda Expresstion
    auto f = [](int x) 
    {
        for (int i = 0; i < x; i++)
        {
            std::cout << "Thread 3 using lambda expression as callable\n";
        }
    };

    // This is thread launched by using lambda expression as callable
    std::thread th3(f, 3);

    // Wait for thread t1 to finish
    th1.join();

    // Wait for thread t2 to finish
    th2.join();

    // Wait for thread t3 to finish
    th3.join();

    return 0;
}