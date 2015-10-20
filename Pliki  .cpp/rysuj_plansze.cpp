#include "rysuj_plansze.h"
#include <iostream>
using namespace std;

extern char plansza[9];

void rysuj_plansze()
{
    system("cls");
    cout << endl;
    cout << "$$$$$$$$$$ GRA W KOLKO I KRZYZYK $$$$$$$$$$" << endl;
    cout << endl;
    for(int i = 1; i <= 9; i++)
    {
        cout << " " << plansza[i] << " ";
        if(i % 3)   // Po elemencie 1,2,4,5,7,8 wstawiami pionową kreske
        {
            cout << "|";
        }
        else if(i!=9) // po elemencie 3 i 6 wstawiamy poprzeczke
        {
            cout << "\n---|---|---\n";
        }
    }
    cout << "\n"; // po 9 elemencie koniec
}
