#include <iostream>
#include <string>
#include <vector>

auto is_palindrome(std::string palindrome) -> bool
{
    int a = palindrome.size();
    int b = 1;
    for (int i = 1; i <= a; i++) {
        if (palindrome[i - 1] != palindrome[a - i]) {
            b=0;
          break;
        }
    }
    return b;
}

auto main() -> int
{
std::cout << is_palindrome("oko");
    return 0;
}
