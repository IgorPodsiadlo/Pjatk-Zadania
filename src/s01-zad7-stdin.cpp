/*
 * The very first program you should write in any new programming language.
 */


#include <iostream>
#include <string>
auto ask_user_for_integer(std::string) -> int;
auto main() -> int
{
   float x  = ask_user_for_integer ("x = "); 
    if (x>0) std::cout<<"dodatnia";
      else if (x<0)std::cout<<"ujemna";
           else std::cout<<"0";
    return 0;
}
auto ask_user_for_integer ( std :: string const prompt ) -> int
{
if ( not prompt . empty ()) {
std :: cout << prompt ;
}
auto value = std :: string {};
std :: getline ( std :: cin , value );
return std :: stoi ( value );
}
