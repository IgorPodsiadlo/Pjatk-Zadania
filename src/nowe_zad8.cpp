#include <iostream>
#include <string>
auto print(std::string, int) -> void;

auto main() -> int
{
    std::string slowo;
    int liczba;

    std::cout << "Podaj słowo ";
    std::cin >> slowo;
    std::cout << "Co ktora literka ma sie pokazać  ";
    std::cin >> liczba;

    print(slowo, liczba);

    return 0;
}


auto print(std::string wyraz, int liczba) -> void
{
    int a = wyraz.size();
    for (int i = 0; i <= a; i++) {
        if (i % liczba == 0) {
            if (i == 0)
                continue;
            std::cout << wyraz[i - 1] << " ";
        }
    }
}
