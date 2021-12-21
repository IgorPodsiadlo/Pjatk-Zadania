#include <iostream>
#include <string>


auto main() -> int
{
    std::string imie_1, imie_2;
    std::cout << "Podaj 1 imie "
              << "\n";
    std::cin >> imie_1;
    std::cout << "Podaj następne imie "
              << "\n";
    std::cin >> imie_2;
    if (imie_1.size() == imie_2.size()) {
        std::cout << "imiona sa takiej samej długości"
                  << "\n";
    } else if (imie_1.size() < imie_2.size()) {
        std::cout << "imie drugie jest dluzsze"
                  << "\n";
    } else {
        std::cout << "imie pierwsze jest dluzsze"
                  << "\n";
    }
    return 0;
}
