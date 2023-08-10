#include <iostream>
#include <mutex>
#include <thread>

class Singleton
{
private:
    static Singleton* pinstance_;
    static std::mutex mutex_;
protected:
    Singleton(const std::string value) : value_(value)
    {

    }
    ~Singleton(){}
    std::string value_;
public:
    Singleton(Singleton &other) = delete; // Singleton should not be cloneable.
    void operator=(const Singleton &) = delete; // Singleton should not be assignable.
    /*
    This is static method that controls the access to the singleton instance.
    On the first run, it creates a singleton object and place it
    into the static field. On subsequent runs, it returns the client existing
    object strored in the static field.
    */
   static Singleton *GetInstance(const std::string &value);
   /*
   Finally, any singleton should define some business logic, which can be executed on its instance.
   */
  void SomeBusinessLogic()
  {
    //...
  }
  std::string value() const
  {
    return value_;
  }
};

Singleton* Singleton::pinstance_{nullptr};
std::mutex Singleton::mutex_;

/*
The first time we call GetInstance we will lock the storge location
and then we make sure again that the variable is null and then we set the value.
*/
Singleton *Singleton::GetInstance(const std::string& value)
{
    std::lock_guard<std::mutex> lock(mutex_);
    if(pinstance_ == nullptr)
    {
        pinstance_ = new Singleton(value);
    }
    return pinstance_;
}

void ThreadFoo()
{
    std::this_thread::sleep_for(std::chrono::microseconds(1000));
    Singleton* singleton = Singleton::GetInstance("FOO");
    std::cout << singleton->value() << "\n";
}

void ThreadBar()
{
    std::this_thread::sleep_for(std::chrono::microseconds(1000));
    Singleton* singleton = Singleton::GetInstance("BAR");
    std::cout << singleton->value() << "\n";
}

int main()
{
    std::cout << "If you see the same value, then singleton was reused\nIf you see different values," <<
                "then 2 singletons were created\n" <<
                "RESUL:\n";
    std::thread t1(ThreadFoo);
    std::thread t2(ThreadBar);
    t1.join();
    t2.join();
    return 0;
}