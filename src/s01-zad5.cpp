/*
 * The very first program you should write in any new programming language.
 */


#include <iostream>
#include <string>
auto ask_user_for_integer(std::string) -> int;
auto main() -> int
{
   float a = ask_user_for_integer ("a = ");
    if (a>0) std::cout<<a<<"\n";
      else if (a<0) std::cout<<-a<<"\n";
        else std::cout<<"0";
    return 0;
}
auto ask_user_for_integer(std::string prompt) -> int {
     std::cout << prompt << " int:";
     auto n = std::string{};
     std::getline(std::cin, n);
     return std::stoi(n);
}

