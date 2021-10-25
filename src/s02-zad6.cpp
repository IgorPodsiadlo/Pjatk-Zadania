
/*
 * The very first program you should write in any new programming language.
 */


#include <iostream>
#include <string>
auto ask_user_for_integer(std::string) -> int;
int sprawdzenie(int a, int b);
auto main(int argc, char* argv[]) -> int
{
    auto const a = std::stoi(argv[1]);
    int i;
    for (i = 2; i < argc; i++) {
        sprawdzenie(a, std::stoi(argv[i]));
    }
}
int sprawdzenie(int a, int b)
{
    if (a > b)
        std::cout << a << ">" << b << "\n";
    else if (b > a)
        std::cout << a << "<" << b << "\n";
    else if (b == a)
        std::cout << a << "=" << b << "\n";

    return 0;
}
auto ask_user_for_integer(std::string prompt) -> int
{
    std::cout << prompt << " int:";
    auto n = std::string{};
    std::getline(std::cin, n);
    return std::stoi(n);
}
