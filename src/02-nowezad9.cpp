#include <algorithm>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
bool contains_all(std::vector<int> vec, std::vector<int> vec2)
{
        std::sort(vec.begin(), vec.end());
        std::sort(vec2.begin(), vec2.end());
        auto v_pos {vec.begin()};
        for (auto& elem : vec2)
        {
            while (v_pos < vec.end())
            {
                if (elem == *v_pos)
                {
                    ++v_pos;
                    break;
                }
                else if (*v_pos > elem)
                {
                
                    return false;
                }
                v_pos++;
            }
        }
        return ((v_pos < vec .end()));
}
auto main() -> int
{
    auto vec = std::vector<int>{9,3,5,2,1,3,4,5,6};
    auto vec2 = std::vector<int>{1,2,3,4};
    std::cout<<contains_all(vec, vec2)<<std::endl;
return 0;
}
