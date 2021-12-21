#include <iostream>
#include <string>
#include <vector>
auto dot_product(std::vector<int> a, std::vector<int> b) -> int
{
    int p = 0;
    int c = a.size();
    for (int i = 0; i < c; i++) {
        p += a[i] * b[i];
    }
    return p;
}

int main()
{
    std::vector<int> a = {1, 2, 3};
    std::vector<int> b = {1, 2, 3};
    std::cout << dot_product(a, b);
    return 0;
}
