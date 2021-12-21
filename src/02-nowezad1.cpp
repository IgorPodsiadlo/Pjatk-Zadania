#include <iostream>
#include <string>
#include <vector>

auto avarage_of(std::vector<int> liczby) -> double
{
    double temp, wynik;
    int a = liczby.size();
    for (int i = 0; i < a; i++) {
        temp += liczby[i];
    }
    wynik = temp / a;
    return wynik;
}

auto main() -> int
{
    double srednia;
    std::vector<int> number = {1, 2, 3, 4};
    srednia                 = avarage_of(number);
    std::cout << srednia;
}
