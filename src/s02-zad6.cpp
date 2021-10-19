/*
 * The very first program you should write in any new programming language.
 */
#include <iostream>
#include <string>
auto ask_user_for_integer(std::string) -> int;
float sprawdzenie (float a,float b);
auto main() -> int
{
int i;
for (i=1;i<=5; i++){
float a = ask_user_for_integer ("\n a = ");
float b = ask_user_for_integer ("\n b = ");
sprawdzenie(a,b);
}
return 0;
}
float sprawdzenie (float a,float b)
{
    if (a>b) std::cout <<a<< ">" <<b;
      else if (b>a) std::cout <<a<< "<" <<b;
        else if (b==a) std::cout <<a<< "=" <<b;

    return 0;
}
auto ask_user_for_integer(std::string prompt) -> int {
     std::cout << prompt << " int:";
     auto n = std::string{};
     std::getline(std::cin, n);
     return std::stoi(n);
}
