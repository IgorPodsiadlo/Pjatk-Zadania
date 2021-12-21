#include <iostream>
#include <string>
#include <vector>


struct student {
    std::string imie;
    std::string nazwisko;
    std::vector<int> oceny;
    double average_of();
};

double student::average_of()
{
    int suma;
    double wynik;
    int z = oceny.size();

    for (int i = 0; i < z; i++) {
        suma += oceny[i];
    }
    wynik = suma / z;
    return wynik;
}
int main()
{
    std::vector<int> uwu = {3, 5, 4};
    student Igor{"Igor", "Podsiadło", uwu};
    std::cout << Igor.average_of();
}
