
/*
 * The very first program you should write in any new programming language.
 */


#include <iostream>
#include <string>
auto ask_user_for_integer(std::string) -> int;
auto main() -> int
{
    int a = ask_user_for_integer("a = ");
    int b = ask_user_for_integer("b = ");
    int c = ask_user_for_integer("c = ");
    if (c == 0) {
        std::cout << " nie dziel przez 0 ";
        return 0;
    }

    int i;
    for (i = a; i < b; ++i) {
        if (i % c == 0)
            std::cout << i << " ";
    }
    return 0;
}


auto ask_user_for_integer(std::string prompt) -> int
{
    std::cout << prompt << " int:";
    auto n = std::string{};
    std::getline(std::cin, n);
    return std::stoi(n);
}
