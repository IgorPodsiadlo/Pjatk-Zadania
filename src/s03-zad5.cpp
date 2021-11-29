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
auto amax(std::array<int, 10> a, int n) -> int
{
    int max;
    max = a[0];
    for (int i = 1; i < n; i++) {
        if (max < a[i])
            max = a[i];
    }
    return max;
}

auto main() -> int
{
    int n                  = zapytaj("ile liczb sprawdzic =");
    std ::array<int, 10> a = {42, 9, -1, 18, 59, 3, 101, 31, 72, 12};
    int max                = amax(a, n);
    std ::cout << max << "\n";
    return 0;
}
