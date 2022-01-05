#include <iostream>
#include <string>
#include <vector>

void box_print(std::string a, std::string b, std::string c, std::string d,
std::string e)
{
    std::string tab[5] = { a, b, c, d, e };
    size_t max_size = 0;
    size_t current_size = 0;
    for(auto s : tab)
    {
        if (s.size() > max_size)
            max_size = s.size();
    }
    for(size_t j = 0; j < max_size + 4; j++)
    {
        std::cout<<"*";
    }
    std::cout << std::endl;
    for(auto i = 0; i < 5; i++)
    {
    std::cout<<"* "<<tab[i];
    current_size = tab[i].size();
    for(size_t l = 0; l < max_size - current_size; l++)
    {
        std::cout<<" ";
    }
    std::cout<<" *"<<std::endl;
    }
    for(size_t k = 0; k < max_size + 4; k++)
    {
        std::cout<<"*";
    }
    std::cout << std::endl;
}
auto main() -> int
{
    box_print("Hello", "World", "in", "a", "frame");
    return 0;
}
