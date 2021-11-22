#include <iostream>
#include <math.h>
#include <string>
auto zapytaj(std::string tekst) -> int
{
int n;
std::cout << tekst << "\n";
std::cin >> n;
return n;
}
auto init(int a[], int n) -> void
{
for (int i = 0; i < n; i++)
{
a[i] = 0;
}
}
auto main() -> int
{
int n = zapytaj("kiedy start ?");
int a [100];
int i =0;
init(a, n);
while (i < n){
std::cout << a[i] << "\n";
i++;
}
return 0;
}
