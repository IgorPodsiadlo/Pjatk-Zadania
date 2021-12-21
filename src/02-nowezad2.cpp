#include <iostream>
#include <string>
#include <vector>

auto is_palindrome(std::string palindrome) -> bool
{
    int a = palindrome.size();
    for (int i = 1; i <= a; i++) {
        if (palindrome[i - 1] != palindrome[a - i]) {
            return false;
        }
    }
    return true;
}
auto filtr(std::vector<std::string> vec) -> std::vector<std::string>
{
    std::vector<std::string> exit;
    int c = vec.size();
    for (int i = 0; i < c; i++) {
        if (is_palindrome(vec[i])) {
            exit.push_back(vec[i]);
        }
    }
    return exit;
}
int main()
{
    std::vector<std::string> vec = {"oko", "kajak", "bober"}, przefiltrowane;
    przefiltrowane               = filtr(vec);
    int z                        = przefiltrowane.size();
    for (int i = 0; i < z; i++) {
        std::cout << przefiltrowane[i] << " ";
    }
    return 0;
}
