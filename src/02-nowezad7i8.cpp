#include <algorithm>
#include <iostream>
#include <sstream>
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
struct Group
{
        std::string nazwa;
        std::vector<Student> studenci;
        Group(std::string naz, std::vector<Student> s)
        {
                nazwa = naz;
                studenci = s;
        }
};
void add_to_group(Group& g, Student const& st)
{
    g.studenci.push_back(st);
}
auto average_of(Student a) -> float
{
        int x = 0;
        for(size_t i = 0; i < a.oceny.size(); i++)
        {
             x = x + a.oceny[i];
        }
        return float(x)/float(a.oceny.size());
}
auto best_groups_name(const std::vector<Group> &gr) -> Group
{
    auto brak = Group("brak grupy lub studentow", {});
    if(gr.empty() || gr[0].studenci.empty()) return brak;
        auto tmp = average_of(gr[0].studenci[0]);
        auto best = gr[0];
    std::vector<float> sr;
    for(size_t i = 0; i < gr.size(); i++)
    {
        std::vector<float> sr;
        for(auto &s : gr[i].studenci)
        {
            sr.push_back(average_of(s));
        }
        std::sort(sr.begin(), sr.end());
        if(gr[i].studenci.size() % 2 == 0)
        {
            if((sr[sr.size()/2 - 1] + sr[sr.size()/2]) / 2 > tmp)
            {
                tmp = (sr[sr.size()/2] + sr[sr.size()/2]) / 2;
                best = gr[i];
            }
        }
        else
        {
            if(sr[(sr.size() - 1) / 2] > tmp)
            {
                tmp = sr[(sr.size() - 1) / 2];
                best = gr[i];
            }
        }
    }
    return best;
}
auto main() -> int
{
    auto Jan = Student("Jan", "Kowalski", {3,4,2,5});
    auto Kuba = Student("Kuba", "Nowak", {2,6,1,1});
    auto a = Group("a", {});
    add_to_group(a, Jan);
    add_to_group(a, Kuba);
    auto Bolek = Student("Bolek", "Kowalski", {2,5,5,5});
        auto Adam = Student("Adam", "Nowak", {6,6,4,5,4,4});
    auto Piotr = Student("Piotr", "Nowak", {2,2,1,5,4,4});
    auto b = Group("b", {});
        add_to_group(b, Bolek);
        add_to_group(b, Adam);
    add_to_group(b, Piotr);
    auto Marek = Student("Marek", "Kowalski", {6});
        auto c = Group("c", {});
        add_to_group(c, Marek);
    std::cout<<c.nazwa<<": "<<std::endl;
    for(size_t i = 0; i < c.studenci.size(); i++)
    {
        std::cout<<c.studenci[i].imie<<std::endl;
    }
    auto vec = std::vector<Group>{a,b,c};
    auto najgrupa = best_groups_name(vec);
    std::cout<<najgrupa.nazwa<<std::endl;
return 0;
}
