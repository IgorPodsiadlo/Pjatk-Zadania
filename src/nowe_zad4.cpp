#include <iostream>
#include <string>

auto main() -> int
{
    std::string imiona[5];

    for (int i = 0; i < 5; i++) {
        std::cout << "Podaj imie numer " << i + 1 << " == ";
        std::cin >> imiona[i];
    }

    int zenskie = 0, meskie = 0;

    for (int z = 0; z < 5; z++) {
        std::string temp = imiona[z];

        if (temp[temp.size() - 1] == 'a') {
            zenskie++;
        } else {
            meskie++;
        }
    }

    std::cout << "Imion zenskich jest  " << zenskie << std::endl;
    std::cout << "Imion meskich jest  " << meskie << std::endl;

    return 0;
}
