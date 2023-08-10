#include <iostream>
#include <vector>

class Base
{
private:
    int x, y;
    float r;
    float* f;
protected:
    Base(){}
    Base(int x, int y) : x(x), y(y)
    {
        r = 0.0;
        f = &r;
    }
    ~Base(){
        delete f;
    }
    
    int pNum;
public:
    double k;
    std::vector<double> vDoub;
    void set_x(int x)
    {
        this->x = x;
    }
    int get_x()
    {
        return this->x;
    }
    void set_y(int y)
    {
        this->y = y;
    }
    int get_y()
    {
        return this->y;
    }

    void print_val_pointer()
    {
        std::cout << "pointer: "<< f << " ,value: " << *f << std::endl;
    }
};

class Derives1 : public Base
{

};

class Derives2 : public Derives1
{

};

int main()
{
    Derives1 der1;
    Derives2 der2;
    der2.get_x();
    return 0;
}