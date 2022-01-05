#include <iostream>
#include <string>
#include <vector>

struct Student
{
    std::string imie;
    std::string nazwisko;
    std::vector<int> oceny;
    Student(std::string im, std::string naz, std::vector<int> o)
        {
        imie = im;
        nazwisko = naz;
        oceny = o;
        }
};
auto average_of(Student a) -> float
{
        int x = 0;
        for(size_t i = 0; i < a.oceny.size(); i++)
        {
             x = x + a.oceny[i];
        }
        return float(x)/float(a.oceny.size());
}
auto get_best_student(std::vector<Student> st) -> Student
{
    auto brak = Student("brak", "studentow", {});
        if(st.empty()) return brak;
    auto tmp = average_of(st[0]);
    auto best = st[0];
    for(size_t i = 0; i < st.size(); i++)
    {
        if(average_of(st[i]) > tmp)
        {
             tmp = average_of(st[i]);
             best = st[i];
        }
    }
    return best;
}
auto main() -> int
{
    auto Maciek = Student("Maciek", "Nowak", {2,1,3,4});
    auto Jan = Student("Jan", "Kowalski", {2,1,5,5});
    auto Jarek = Student("Jarek", "Szyszka", {2,5,5,3,2});
    auto Bolek = Student("Bolek", "Lolek", {6,6,6,2});
    auto vec = std::vector<Student>{Maciek, Jarek, Bolek, Jan};
    auto naj = get_best_student(vec);
        std::cout<<naj.imie<<" "<<naj.nazwisko<<" "<<average_of(naj)<<std::endl;
return 0;
}
