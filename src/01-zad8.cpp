#include <iostream>
#include <string>
auto ask_user_for_integer(std::string) -> int;
auto main() -> int
{
   auto const a = ask_user_for_integer ("a = ");
   auto const b = ask_user_for_integer ("b = ");
   auto const x = ask_user_for_integer ("x = ");
if (a > b && a > x) std::cout << "a";
else if ( b > a && b > x) std::cout<< "b";
else if ( x > a && x > b) std::cout << "x";
    return 0;
}
auto ask_user_for_integer(std::string prompt) -> int {
     std::cout << prompt << " int:";
     auto n = std::string{};
     std::getline(std::cin, n);
     return std::stoi(n);
}

