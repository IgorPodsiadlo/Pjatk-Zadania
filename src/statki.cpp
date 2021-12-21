
#include <stdio.h>
#include <stdlib.h>

#include <ctime>
#include <iostream>
using namespace std;
const int rows     = 10;
const int elements = 10;
int maszt          = 10;
char tab[rows][elements];
char gracz[rows][elements];
char statki[rows][elements];

void Clear()
{
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < elements; j++) {
            tab[i][j]    = '0';
            gracz[i][j]  = '0';
            statki[i][j] = '0';
        }
    }
}
void Show()
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
void SetShips()
{
    int s = 0;
    while (s < maszt) {
        int x = rand() % 10;
        int y = rand() % 10;
        if (tab[x][y] != 'S') {
            s++;
            tab[x][y] = 'S';
        }
    }
}
void SetStatki()
{
    int s = 0;
    int x;
    int y;
    while (s < maszt) {
        cout << "Podaj lokacje statki";
        cin >> x >> y;
        if (statki[x][y] != 'S') {
            s++;
            statki[x][y] = 'S';
        }
    }
}

bool Attack(int x, int y)
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
bool komputer()
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
void win()
{
    int w = 10;
    int l = 10;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < elements; j++)
            if (tab[i][j] == 'X') {
                w--;
            }
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < elements; j++)
            if (statki[i][j] == 'X') {
                l--;
            }
    }

    if (w == 0) {
        system("clear");
        cout << " wygrana " << endl;
        Show();
        exit(0);
    } else if (l == 0) {
        system("clear");
        cout << "przegrałeś " << endl;
        Show();
        exit(0);
    }
}

int NumberOfShips()
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
auto main() -> int
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
        Show();
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
