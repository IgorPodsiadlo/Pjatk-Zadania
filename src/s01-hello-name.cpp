/*
 * The very first program you should write in any new programming language.
 */


#include <iostream>


auto main() -> int
{
    auto name = std::string{};
      std::getline (std::cin , name );     
        std::cout << "Hello, " << name << "!\n";

    return 0;
}
