#include <iostream>
#include <map>
#include <vector>

int main()
{
    // Iterating over whole vector
    std::vector<int> v = {0, 1, 2, 3, 4, 5};
    for(auto i: v)
    {
        std::cout << i << ' ';
    }
    std::cout << '\n';
    // the initializer may be a braced-init-list
    for(int n : {0, 1, 2, 3, 4, 5})
        std::cout << n << ' ';
    std::cout << '\n';
    // Iterating over array
    int a[] = {0, 1, 2, 3, 4, 5};
    for(auto n : a)
    {
        std::cout << n << ' ';
    }
    std::cout << '\n';
    // Printing string characters
    std::string str = "Geeks";
    for(char ch : str){
        std::cout << ch << ' ';
    }
    std::cout << '\n';
    // Printing keys and values of a map
    std::map<int, int> MAP({{1, 11},{2, 22},{3, 33}});
    for(auto i : MAP)
    {
        std::cout << "{" << i.first << "," << i.second << "}\n";
    }
    return 0;
}