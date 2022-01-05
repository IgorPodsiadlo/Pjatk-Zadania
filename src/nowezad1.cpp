#include <iostream>
#include <string>
#include <vector>

auto main() -> int
{
    int p = 2, i;
    bool t;
    std::string str;

    while (p <= 20) {
        t = true;
        for (i = 2; i < p; i++)
            if (p % i == 0) {
                t = false;
                break;
            }

        if (t) {
            str += std::to_string(p) + " ";
        }
        p++;
    }

    std::cout << str << std::endl;
    std::cout << str << std::endl;

    return 0;
}
