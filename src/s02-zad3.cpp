
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
    int s = ask_user_for_integer("s = ");
    int i;
    for (i = a; i < b; i += s) {
        std::cout << "for-i = " << i << '\n';
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
