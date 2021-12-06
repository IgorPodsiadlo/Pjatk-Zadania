#include <stdio.h>

#include <array>
#include <iostream>
#include <string>
auto zamiana(int* a, int* b) -> void
{
    int t = *a;
    *a    = *b;
    *b    = t;
}
auto srodek(int arr[], int low, int high) -> int
{
    int wiecej = arr[high];
    int i      = (low - 1);
    for (int j = low; j <= high - 1; j++) {
        if (arr[j] <= wiecej) {
            i++;
            zamiana(&arr[i], &arr[j]);
        }
    }
    zamiana(&arr[i + 1], &arr[high]);
    return (i + 1);

}
void quickSort(int arr[], int low, int high)
{
    if (low < high) {
        int p = srodek(arr, low, high);
        quickSort(arr, low, p - 1);
        quickSort(arr, p + 1, high);
    }
}
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d", arr[i]);
    printf("\n");
}
auto main() -> int
{
    int arr[] = {42, 9, -1, 18, 59, 3, 101, 31, 72, 12};
    int n     = sizeof(arr) / sizeof(arr[0]);
    quickSort(arr, 0, n - 1);
    std::cout << " Tablica posortowana: ";
    printArray(arr, n);
    return 0;
}
