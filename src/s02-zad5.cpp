
/*
 * The very first program you should write in any new programming language.
 */


#include <iostream>
#include <string>
auto ask_user_for_integer(std::string) -> int;
auto main() -> int
{int a = ask_user_for_integer << " a= ";
if (pierwsza)

}
 {  int i;
    bool pierwsza = true;
    if (a == 0 || a == 1) {
        pierwsza = false;
    } else {
        for (i = 2; i <= a / 2; ++i) {
          
            if (a % i == 0) {
                pierwsza = false;
                break;
            }
        }
    }
    if (pierwsza)
        std::cout << a << " jest 1 ";
    else
        std::cout << a << " nie jest 1 ";
    return 0;
}

auto ask_user_for_integer(std::string prompt) -> int
{
    std::cout << prompt << " int:";
    auto n = std::string{};
    std::getline(std::cin, n);
    return std::stoi(n);
}
