
#include <stdio.h>
#include <stdlib.h>

#include <ctime>
#include <iostream>
using namespace std;
const int rows     = 10;
const int elements = 10;
int maszt          = 4;
char tab[rows][elements];
char gracz[rows][elements];
char statki[rows][elements];

void Clear()  // funkcja wypełnia tablice 0
{
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < elements; j++) {
            tab[i][j]    = '0';
            gracz[i][j]  = '0';
            statki[i][j] = '0';
        }
    }
}
void Show()  // 3 funkcje show , poka , pacz wyświetlają tablice z zapisanymi
             // strałami i statkami
{
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < elements; j++) {
            cout << tab[i][j] << " ";
        }
        cout << endl;
    }
}
void poka()
{
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < elements; j++) {
            cout << gracz[i][j] << " ";
        }
        cout << endl;
    }
}
void pacz()
{
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < elements; j++) {
            cout << statki[i][j] << " ";
        }
        cout << endl;
    }
}
void Vmaszt()
{
        int x = rand() % 10;
        int y = rand() % 10;
        int prompt = rand() % 2 + 1; 
    if (prompt == 1) {
        if (tab[x][y] != 'S' && tab[x][y - 1] != 'S'
            && tab[x][y - 2] != 'S' && tab[x][y - 3] != 'S'
            && tab[x][y - 4] != 'S' && tab[x + 1][y] != 'S'
            && tab[x - 1][y - 1] != 'S' && tab[x + 1][y - 1] != 'S'
            && tab[x - 1][y - 2] != 'S' && tab[x + 1][y - 2] != 'S'
            && tab[x + 1][y - 3] != 'S' && tab[x - 1][y - 3] != 'S'
            && tab[x][y + 1] != 'S' && tab[x - 1][y] != 'S' && y - 3 >= 0 ) {
            tab[x][y]     = 'S';
            tab[x][y - 1] = 'S';
            tab[x][y - 2] = 'S';
            tab[x][y - 3] = 'S';
        } else if (tab[x][y] != 'S' && tab[x][y + 1] != 'S'
                   && tab[x][y + 2] != 'S' && tab[x][y + 3] != 'S'
                   && tab[x][y + 4] != 'S' && tab[x + 1][y] != 'S'
                   && tab[x - 1][y + 1] != 'S' && tab[x + 1][y + 1] != 'S'
                   && tab[x - 1][y + 2] != 'S' && tab[x + 1][y + 2] != 'S'
                   && tab[x + 1][y + 3] != 'S' && tab[x - 1][y + 3] != 'S'
                   && tab[x][y + 1] != 'S' && tab[x - 1][y] != 'S' && y + 3 <= 9) {
            tab[x][y]     = 'S';
            tab[x][y + 1] = 'S';
            tab[x][y + 2] = 'S';
            tab[x][y + 3] = 'S';
        } else {
            Vmaszt();
        }
        }
        else if (prompt == 2) {
            if (tab[x][y] != 'S' && tab[x + 1][y] != 'S'
                && tab[x + 2][y] != 'S' && tab[x + 3][y] != 'S'
                && tab[x + 4][y] != 'S' && tab[x - 1][y] != 'S'
                && tab[x + 1][y + 1] != 'S' && tab[x + 1][y - 1] != 'S'
                && tab[x + 2][y - 1] != 'S' && tab[x + 2][y + 1] != 'S'
                && tab[x + 3][y - 1] != 'S' && tab[x + 3][y + 1] != 'S'
                && tab[x][y + 1] != 'S' && tab[x][y - 1] != 'S' && x + 3 <= 9 ) {
                tab[x][y]     = 'S';
                tab[x + 1][y] = 'S';
                tab[x + 2][y] = 'S';
                tab[x + 3][y] = 'S';
            } else if (tab[x][y] != 'S' && tab[x - 1][y] != 'S'
                       && tab[x - 2][y] != 'S' && tab[x - 3][y] != 'S'
                       && tab[x - 4][y] != 'S' && tab[x + 1][y] != 'S'
                       && tab[x - 1][y + 1] != 'S'
                       && tab[x - 1][y - 1] != 'S'
                       && tab[x - 2][y - 1] != 'S'
                       && tab[x - 2][y + 1] != 'S'
                       && tab[x - 3][y - 1] != 'S'
                       && tab[x - 3][y + 1] != 'S' && tab[x][y + 1] != 'S'
                       && tab[x][y - 1] != 'S' && x - 3 >= 0)

            {
                tab[x][y]     = 'S';
                tab[x - 1][y] = 'S';
                tab[x - 2][y] = 'S';
                tab[x - 3][y] = 'S';
            } else {
                Vmaszt();
            }
        }
    }
void Qmaszt()
{
        int x = rand() % 10;
        int y = rand() % 10;
        int prompt = rand() % 2 + 1; 
    if (prompt == 1) {
        if (tab[x][y] != 'S' && tab[x][y - 1] != 'S'
            && tab[x][y - 2] != 'S' && tab[x][y - 3] != 'S'
            && tab[x + 1][y] != 'S'
            && tab[x - 1][y - 1] != 'S' && tab[x + 1][y - 1] != 'S'
            && tab[x - 1][y - 2] != 'S' && tab[x + 1][y - 2] != 'S'
            && tab[x][y + 1] != 'S' && tab[x - 1][y] != 'S' && y - 2 >= 0  ) {
            tab[x][y]     = 'S';
            tab[x][y - 1] = 'S';
            tab[x][y - 2] = 'S';
        } else if (tab[x][y] != 'S' && tab[x][y + 1] != 'S'
                   && tab[x][y + 2] != 'S' && tab[x][y + 3] != 'S'
                   && tab[x + 1][y] != 'S'
                   && tab[x - 1][y + 1] != 'S' && tab[x + 1][y + 1] != 'S'
                   && tab[x - 1][y + 2] != 'S' && tab[x + 1][y + 2] != 'S'
                   && tab[x][y + 1] != 'S' && tab[x - 1][y] != 'S' && y + 2 <= 9) {
            tab[x][y]     = 'S';
            tab[x][y + 1] = 'S';
            tab[x][y + 2] = 'S';
        } else {
            Qmaszt();
        }
        }
        else if (prompt == 2) {
            if (tab[x][y] != 'S' && tab[x + 1][y] != 'S'
                && tab[x + 2][y] != 'S' && tab[x + 3][y] != 'S'
                && tab[x - 1][y] != 'S'
                && tab[x + 1][y + 1] != 'S' && tab[x + 1][y - 1] != 'S'
                && tab[x + 2][y - 1] != 'S' && tab[x + 2][y + 1] != 'S'
                && tab[x][y + 1] != 'S' && tab[x][y - 1] != 'S' && x + 2 <= 9 ) {
                tab[x][y]     = 'S';
                tab[x + 1][y] = 'S';
                tab[x + 2][y] = 'S';
            } else if (tab[x][y] != 'S' && tab[x - 1][y] != 'S'
                       && tab[x - 2][y] != 'S' && tab[x - 3][y] != 'S'
                       && tab[x + 1][y] != 'S'
                       && tab[x - 1][y + 1] != 'S'
                       && tab[x - 1][y - 1] != 'S'
                       && tab[x - 2][y - 1] != 'S'
                       && tab[x - 2][y + 1] != 'S'
                       && tab[x][y + 1] != 'S'
                       && tab[x][y - 1] != 'S' && x  - 2 >= 0)

            {
                tab[x][y]     = 'S';
                tab[x - 1][y] = 'S';
                tab[x - 2][y] = 'S';
            } else {
                Qmaszt();
            }
        }
    }
void Lmaszt()
{
        int x = rand() % 10;
        int y = rand() % 10;
        int prompt = rand() % 2 + 1; 
    if (prompt == 1) {
        if (tab[x][y] != 'S' && tab[x][y - 1] != 'S'
            && tab[x][y - 2] != 'S' 
            && tab[x + 1][y] != 'S'
            && tab[x - 1][y - 1] != 'S' && tab[x + 1][y - 1] != 'S'
            && tab[x][y + 1] != 'S' && tab[x - 1][y] != 'S' && y - 1 >= 0 ) {
            tab[x][y]     = 'S';
            tab[x][y - 1] = 'S';
        } else if (tab[x][y] != 'S' && tab[x][y + 1] != 'S'
                   && tab[x][y + 2] != 'S'
                   && tab[x + 1][y] != 'S'
                   && tab[x - 1][y + 1] != 'S' && tab[x + 1][y + 1] != 'S'
                   && tab[x][y + 1] != 'S' && tab[x - 1][y] != 'S' && y + 1 <= 9) {
            tab[x][y]     = 'S';
            tab[x][y + 1] = 'S';
        } else {
            Lmaszt();
        }
        }
        else if (prompt == 2) {
            if (tab[x][y] != 'S' && tab[x + 1][y] != 'S'
                && tab[x + 2][y] != 'S'
                && tab[x - 1][y] != 'S'
                && tab[x + 1][y + 1] != 'S' && tab[x + 1][y - 1] != 'S'
                && tab[x][y + 1] != 'S' && tab[x][y - 1] != 'S' && x + 1 <= 9 ) {
                tab[x][y]     = 'S';
                tab[x + 1][y] = 'S';
            } else if (tab[x][y] != 'S' && tab[x - 1][y] != 'S'
                       && tab[x - 2][y] != 'S'
                       && tab[x + 1][y] != 'S'
                       && tab[x - 1][y + 1] != 'S'
                       && tab[x - 1][y - 1] != 'S'
                       && tab[x][y + 1] != 'S'
                       && tab[x][y - 1] != 'S' && x  - 1 >= 0)

            {
                tab[x][y]     = 'S';
                tab[x - 1][y] = 'S';
            } else {
                Lmaszt();
            }
        }
    }
void SetShips()
{
Lmaszt();
Qmaszt();
Vmaszt();
    int s = 0;
    while (s < maszt) {
        int x = rand() % 10;
        int y = rand() % 10;
        if (tab[x][y] == 'S' || tab[x][y + 1] == 'S' || tab[x][y - 1] == 'S'
            || tab[x + 1][y] == 'S' || tab[x - 1][y] == 'S') {
        } else if (tab[x][y] != 'S') {
            s++;
            tab[x][y] = 'S';
        }
    }
}
void Cmaszt()
{
    char prompt;
    int x;
    int y;
    cout << "Podaj lokacja 4 masztowca " << endl;
    cin >> x >> y;
    cout << "postaw statek pionowo 1 / postaw poziomo 2" << endl;
    cin >> prompt;
    if (prompt == '1') {
        if (statki[x][y] != 'S' && statki[x][y - 1] != 'S'
            && statki[x][y - 2] != 'S' && statki[x][y - 3] != 'S'
            && statki[x][y - 4] != 'S' && statki[x + 1][y] != 'S'
            && statki[x - 1][y - 1] != 'S' && statki[x + 1][y - 1] != 'S'
            && statki[x - 1][y - 2] != 'S' && statki[x + 1][y - 2] != 'S'
            && statki[x + 1][y - 3] != 'S' && statki[x - 1][y - 3] != 'S'
            && statki[x][y + 1] != 'S' && statki[x - 1][y] != 'S' && y - 3 >= 0 ) {
            statki[x][y]     = 'S';
            statki[x][y - 1] = 'S';
            statki[x][y - 2] = 'S';
            statki[x][y - 3] = 'S';
        } else if (statki[x][y] != 'S' && statki[x][y + 1] != 'S'
                   && statki[x][y + 2] != 'S' && statki[x][y + 3] != 'S'
                   && statki[x][y + 4] != 'S' && statki[x + 1][y] != 'S'
                   && statki[x - 1][y + 1] != 'S' && statki[x + 1][y + 1] != 'S'
                   && statki[x - 1][y + 2] != 'S' && statki[x + 1][y + 2] != 'S'
                   && statki[x + 1][y + 3] != 'S' && statki[x - 1][y + 3] != 'S'
                   && statki[x][y + 1] != 'S' && statki[x - 1][y] != 'S' && y + 3 <= 9) {
            statki[x][y]     = 'S';
            statki[x][y + 1] = 'S';
            statki[x][y + 2] = 'S';
            statki[x][y + 3] = 'S';
        } else {
            cout << "podaj inną lokacje" << endl;
            Cmaszt();
        }
        }
        else if (prompt == '2') {
            if (statki[x][y] != 'S' && statki[x + 1][y] != 'S'
                && statki[x + 2][y] != 'S' && statki[x + 3][y] != 'S'
                && statki[x + 4][y] != 'S' && statki[x - 1][y] != 'S'
                && statki[x + 1][y + 1] != 'S' && statki[x + 1][y - 1] != 'S'
                && statki[x + 2][y - 1] != 'S' && statki[x + 2][y + 1] != 'S'
                && statki[x + 3][y - 1] != 'S' && statki[x + 3][y + 1] != 'S'
                && statki[x][y + 1] != 'S' && statki[x][y - 1] != 'S' && x + 3 <= 9 ) {
                statki[x][y]     = 'S';
                statki[x + 1][y] = 'S';
                statki[x + 2][y] = 'S';
                statki[x + 3][y] = 'S';
            } else if (statki[x][y] != 'S' && statki[x - 1][y] != 'S'
                       && statki[x - 2][y] != 'S' && statki[x - 3][y] != 'S'
                       && statki[x - 4][y] != 'S' && statki[x + 1][y] != 'S'
                       && statki[x - 1][y + 1] != 'S'
                       && statki[x - 1][y - 1] != 'S'
                       && statki[x - 2][y - 1] != 'S'
                       && statki[x - 2][y + 1] != 'S'
                       && statki[x - 3][y - 1] != 'S'
                       && statki[x - 3][y + 1] != 'S' && statki[x][y + 1] != 'S'
                       && statki[x][y - 1] != 'S' &&  x  - 3 >= 0)

            {
                statki[x][y]     = 'S';
                statki[x - 1][y] = 'S';
                statki[x - 2][y] = 'S';
                statki[x - 3][y] = 'S';
            } else {
                cout << "podaj inną lokacje"<< endl;
                Cmaszt();
            }
        }
    }
void Amaszt()
{
    char prompt;
    int x;
    int y;
    cout << "Podaj lokacja 3 masztowca " << endl;
    cin >> x >> y;
    cout << "postaw statek pionowo 1 / postaw poziomo 2" << endl;
    cin >> prompt;
    if (prompt == '1') {
        if (statki[x][y] != 'S' && statki[x][y - 1] != 'S'
            && statki[x][y - 2] != 'S' && statki[x][y - 3] != 'S'
            && statki[x + 1][y] != 'S'
            && statki[x - 1][y - 1] != 'S' && statki[x + 1][y - 1] != 'S'
            && statki[x - 1][y - 2] != 'S' && statki[x + 1][y - 2] != 'S'
            && statki[x][y + 1] != 'S' && statki[x - 1][y] != 'S' && y - 2 >= 0 ) {
            statki[x][y]     = 'S';
            statki[x][y - 1] = 'S';
            statki[x][y - 2] = 'S';
        } else if (statki[x][y] != 'S' && statki[x][y + 1] != 'S'
                   && statki[x][y + 2] != 'S' && statki[x][y + 3] != 'S'
                   && statki[x + 1][y] != 'S'
                   && statki[x - 1][y + 1] != 'S' && statki[x + 1][y + 1] != 'S'
                   && statki[x - 1][y + 2] != 'S' && statki[x + 1][y + 2] != 'S'
                   && statki[x][y + 1] != 'S' && statki[x - 1][y] != 'S' && y + 2 <= 9) {
            statki[x][y]     = 'S';
            statki[x][y + 1] = 'S';
            statki[x][y + 2] = 'S';
        } else {
            cout << "podaj inną lokacje" << endl;
            Amaszt();
        }
        }
        else if (prompt == '2') {
            if (statki[x][y] != 'S' && statki[x + 1][y] != 'S'
                && statki[x + 2][y] != 'S' && statki[x + 3][y] != 'S'
                && statki[x - 1][y] != 'S'
                && statki[x + 1][y + 1] != 'S' && statki[x + 1][y - 1] != 'S'
                && statki[x + 2][y - 1] != 'S' && statki[x + 2][y + 1] != 'S'
                && statki[x][y + 1] != 'S' && statki[x][y - 1] != 'S' && x + 2 <= 9) {
                statki[x][y]     = 'S';
                statki[x + 1][y] = 'S';
                statki[x + 2][y] = 'S';
            } else if (statki[x][y] != 'S' && statki[x - 1][y] != 'S'
                       && statki[x - 2][y] != 'S' && statki[x - 3][y] != 'S'
                       && statki[x + 1][y] != 'S'
                       && statki[x - 1][y + 1] != 'S'
                       && statki[x - 1][y - 1] != 'S'
                       && statki[x - 2][y - 1] != 'S'
                       && statki[x - 2][y + 1] != 'S'
                       && statki[x][y + 1] != 'S'
                       && statki[x][y - 1] != 'S' && x  - 2 >= 0)

            {
                statki[x][y]     = 'S';
                statki[x - 1][y] = 'S';
                statki[x - 2][y] = 'S';
            }
              else {
                cout << "podaj inną lokacje"<< endl;
                Amaszt();
            }
        }
    }
void Zmaszt()
{
    char prompt;
    int x;
    int y;
    cout << "Podaj lokacja 2 masztowca " << endl;
    cin >> x >> y;
    cout << "postaw statek pionowo 1 / postaw poziomo 2" << endl;
    cin >> prompt;
    if (prompt == '1') {
        if (statki[x][y] != 'S' && statki[x][y - 1] != 'S'
            && statki[x][y - 2] != 'S' 
            && statki[x + 1][y] != 'S'
            && statki[x - 1][y - 1] != 'S' && statki[x + 1][y - 1] != 'S'
            && statki[x][y + 1] != 'S' && statki[x - 1][y] != 'S' && y - 1 >= 0) {
            statki[x][y]     = 'S';
            statki[x][y - 1] = 'S';
        } else if (statki[x][y] != 'S' && statki[x][y + 1] != 'S'
                   && statki[x][y + 2] != 'S' 
                   && statki[x + 1][y] != 'S'
                   && statki[x - 1][y + 1] != 'S' && statki[x + 1][y + 1] != 'S'
                   && statki[x][y + 1] != 'S' && statki[x - 1][y] != 'S' && y  + 1 <= 9) {
            statki[x][y]     = 'S';
            statki[x][y + 1] = 'S';
        } else {
            cout << "podaj inną lokacje" << endl;
            Zmaszt();
        }
        }
        else if (prompt == '2') {
            if (statki[x][y] != 'S' && statki[x + 1][y] != 'S'
                && statki[x + 2][y] != 'S'
                && statki[x - 1][y] != 'S'
                && statki[x + 1][y + 1] != 'S' && statki[x + 1][y - 1] != 'S'
                && statki[x][y + 1] != 'S' && statki[x][y - 1] != 'S' && x+1 <= 9 ) {
                statki[x][y]     = 'S';
                statki[x + 1][y] = 'S';
            } else if (statki[x][y] != 'S' && statki[x - 1][y] != 'S'
                       && statki[x - 2][y] != 'S' 
                       && statki[x + 1][y] != 'S'
                       && statki[x - 1][y + 1] != 'S'
                       && statki[x - 1][y - 1] != 'S'
                       && statki[x][y + 1] != 'S'
                       && statki[x][y - 1] != 'S' && x  - 1 >= 0)

            {
                statki[x][y]     = 'S';
                statki[x - 1][y] = 'S';
            }
              else {
                cout << "podaj inną lokacje"<< endl;
                Zmaszt();
            }
        }
    }
    void SetStatki()
    {
        Zmaszt();
        Amaszt();
        Cmaszt();
        int s = 0;
        int x;
        int y;
        while (s < maszt) {
            cout << " Podaj lokacje 1 masztowca "<< endl;
            cin >> x >> y;
            if (statki[x][y] == 'S' || statki[x][y + 1] == 'S'
                || statki[x][y - 1] == 'S' || statki[x + 1][y] == 'S'
                || statki[x - 1][y] == 'S')

            {
                std::cout << "zasady gry nie pozwalają postawić tu statku"<< endl;
            } else if (statki[x][y] != 'S') {
                s++;
                statki[x][y] = 'S';
            }
        }
    }

    bool Attack(int x, int y)  // funkcja wywołująca atak gracza
    {
        if (tab[x][y] == 'S') {
            tab[x][y]   = 'X';
            gracz[x][y] = 'X';
            return true;
        } else if (tab[x][y] == 'X' || tab[x][y] == '*') {
            cout << " padł na to miejsce strzał " << endl;
            return false;
        } else {
            tab[x][y]   = '*';
            gracz[x][y] = '*';
            return false;
        }
    }
    bool komputer()  // funkcja strzału komputera losowy strzał na tablicy
    {
        int n = rand() % 10;
        int m = rand() % 10;
        if (statki[n][m] == 'S') {
            statki[n][m] = 'X';
            return true;
        } else if (statki[n][m] == 'X' || statki[n][m] == '*') {
            komputer();
            return false;
        } else {
            statki[n][m] = '*';
            return false;
        }
    }
    void win()  // przeszukuje tablice i stwierca czy wygrał gracz czy komputer
    {
        int w = 0;
        int l = 0;
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < elements; j++)
                if (tab[i][j] == 'X') {
                    w++;
                }
        }
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < elements; j++)
                if (statki[i][j] == 'X') {
                    l++;
                }
        }

        if (w == 13) {
            system("clear");
            cout << " wygrana " << endl;
            Show();
            exit(0);
        } else if (l == 13) {
            system("clear");
            cout << "przegrałeś " << endl;
            Show();
            exit(0);
        }
    }

    int NumberOfShips()  // ilośc segmentów statków pozostałych do zniszcenia
                         // aby wygrać
    {
        int c = 0;
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < elements; j++) {
                if (tab[i][j] == 'S') {
                    c++;
                }
            }
        }
        return c;
    }
    auto main()->int
    {
        system("clear");
        srand(time(NULL));
        Clear();
        SetShips();
        SetStatki();
        int pos1;
        int pos2;
        char prompt;
        while (1) {
            system("clear");
            win();
            poka();
            cout << "---------------------------------" << endl;
            pacz();
            cout << "---------------------------------" << endl;
           
            cout << "Podaj lokacje strzału";
            cin >> pos1 >> pos2;
            if (Attack(pos1, pos2)) {
                cout << " trafiony UwU " << endl;
                cout << " Ilość pozostałych statków to: " << NumberOfShips()
                     << endl;
                komputer();
            } else {
                cout << " Ilość pozostałych statków to: " << NumberOfShips()
                     << endl;
                cout << "poddajesz się (y/n)?";
                cin >> prompt;
                komputer();
                if (prompt == 'y')
                    break;
            }
        }
        system("clear");
        cout << "Koniec" << endl;
        Show();
        return 0;
    }
