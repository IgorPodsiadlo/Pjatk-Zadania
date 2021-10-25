/*
 * The very first program you should write in any new programming language.
 */


#include <iostream>
#include <string>
auto ask_user_for_integer(std::string) -> int;
auto main() -> int
{
    auto const a = ask_user_for_integer("limit = ");
    auto const b = ask_user_for_integer("dzielnik = ");
    int i;
    int c = 0;
    for (i = 0; i < a; ++i) {
        if (i % b == 0)
            c += i;
    }
    std::cout << " suma to :  " << c;
    return 0;
}
auto ask_user_for_integer(std::string prompt) -> int
{
    std::cout << prompt << " int:";
    auto n = std::string{};
    std::getline(std::cin, n);
    return std::stoi(n);
}
