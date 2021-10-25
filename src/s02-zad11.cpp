/*
 * The very first program you should write in any new programming language.
 */


#include <iostream>
#include <string>
auto ask_user_for_integer(std::string) -> int;
auto main() -> int
{
    auto const x = ask_user_for_integer("x = ");
auto const y = ask_user_for_integer("y = ");
int i;
for (i= 0; i < y; i++)
{
int i;
for (i=0;i<x; i++)
{
std::cout << "*";
}
std::cout << "\n";
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
