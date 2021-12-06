#include <array>
#include <iostream>
#include <string>
auto zapytaj(std::string tekst) -> int
{
    int n;
    std::cout << tekst << "\n";
    std::cin >> n;
    return n;
}
auto amax(int a[10], int b) -> void
{
    for (int i = 0; i < b; i++)
        for (int j = b - 1; j > i; j--)
            if (a[j - 1] > a[j]) {
                int k    = a[j - 1];
                a[j - 1] = a[j];
                a[j]     = k;
            }
}

auto main() -> int
{
    int b     = zapytaj("ile liczb sprawdzic =");
    int a[10] = {42, 9, -1, 18, 59, 3, 101, 31, 72, 12};
    amax(a, b);
    std::cout << " Tablica posortowana: ";
    for (int i = 0; i < b; i++) {
        std::cout << a[i] << " ";
    }
    return 0;
}
