#include <iostream>

auto is_even(int) -> bool;

auto main() -> int
{
    int zm;
    std::cout << "Podaj liczbe: ";
    std::cin >> zm;

    std::cout << is_even(zm);

    return 0;
}


auto is_even(int a) -> bool
{
    if (a % 2 == 0)
        return true;

    else
        return false;
}
