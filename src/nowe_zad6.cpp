#include <iostream>

auto is_divisible(int, int) -> bool;
auto is_even(int, int) -> bool;


auto main() -> int
{
    int liczba, dzielnik;
    std::cout << "Podaj liczbe ";
    std::cin >> liczba;
    std::cout << "Podaj dzielnik ";
    std::cin >> dzielnik;

    std::cout << is_even(liczba, dzielnik);


    return 0;
}
auto is_divisible(int x, int y) -> bool
{
    if (x % y == 0)
        return true;
    else
        return false;
}


auto is_even(int a, int y) -> bool
{
    if (is_divisible(a, y) == 1)
        return true;

    else
        return false;
}
