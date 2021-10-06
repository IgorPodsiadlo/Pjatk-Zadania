/*
 * The very first program you should write in any new programming language.
 */


#include <iostream>
#include <string>

auto main (int , char* argv []) -> int
{
   auto const a = std::stoi(argv[1]);
   auto const b = std::stoi(argv[2]);
   std::cout << (a / b) << "\n";
    return 0;
}
