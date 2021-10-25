/*
 * The very first program you should write in any new programming language.
 */


#include <iostream>
#include <string>
auto ask_user_for_integer(std::string) -> int;
auto main() -> int
{
    auto const a = ask_user_for_integer("a = ");
    int i;
    int c = 1;
    for (i = 1; i <= a; ++i) {
        c *= i;
    }
    std::cout << " silnia to :  " << c;
    return 0;
}
auto ask_user_for_integer(std::string prompt) -> int
{
    std::cout << prompt << " int:";
    auto n = std::string{};
    std::getline(std::cin, n);
    return std::stoi(n);
}
