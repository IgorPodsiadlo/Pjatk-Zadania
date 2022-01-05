#include <iostream>
#include <string>
#include <vector>
auto split(std::string str) -> std::vector<std::string>
{
        std::vector<std::string> a;
        std::string b;
        for( size_t i = 0; i < str.size(); i++ )
        {
                if(str[i] != ' ')
                {
                        b += str[i];
                }
                else if( str[i] == ' ' )
                {
                        a.push_back(b);
                        b.clear();
                }
        }
        a .push_back( b );
        return a;
}
int main()
{
    std::string s = "ala ma kota";
    std::vector<std::string> przefiltrowane = split(s);
    for(size_t i = 0; i < przefiltrowane.size(); i++)
    {
        std::cout<<przefiltrowane[ i ] <<" ";
    }
    std::cout<<std::endl;
    return 0;
}
