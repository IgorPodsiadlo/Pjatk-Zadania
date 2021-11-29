#include <math.h>
#include <time.h>

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
auto asum(std::array<int, 10> a, int n)
{
    int b = 0;
    for (int i = 0; i < n; i++) {
        b = b + a[i];
    }
    return b;
}
auto main() -> int
{
    int n                  = zapytaj("ilość liczb do dodania =");
    std ::array<int, 10> a = {42, 9, -1, 18, 59, 3, 101, 31, 72, 12};
    std ::cout << asum(a, n) << "\n";
    return 0;
}
