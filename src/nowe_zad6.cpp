#include <iostream>

auto is_divisible(int, int) -> bool;
auto is_even(int) -> bool;


auto main() -> int
{
    int liczba;
    std::cout << "Podaj liczbe ";
    std::cin >> liczba;

    std::cout << is_even(liczba);


    return 0;
}
auto is_divisible(int x, int y) -> bool
{
    if (x % y == 0)
        return true;
    else
        return false;
}


auto is_even(int a) -> bool
{
    if (is_divisible(a, 2) == 1)
        return true;

    else
        return false;
}
