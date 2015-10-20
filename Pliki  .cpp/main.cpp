#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>
#include <windows.h>

#include "ustaw_plansze.h"
#include "rysuj_plansze.h"
#include "ruch_gracza.h"
#include "wygrana.h"
#include "remis.h"
#include "ruch_komputera.h"
#include "cofnij.h"

char plansza[9];
char znakComputer = 'O';
char znakPlayer = 'X';
int liczba_wykonanych_ruchow = 0;
int wykonane_ruchy[9];

using namespace std;

int main()
{

    int wybor;
    char wybor2;
    do{
        int licznik=0;
        liczba_wykonanych_ruchow = 0;
        bool wynik = true;
        system("cls");
        ustaw_plansze();
        cout << endl;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
        cout << "#### GRA W KOLKO I KRZYZYK Z KOMPUTEREM ####" << endl;
        cout << "--------------------------------------------" << endl;
        cout << endl;
        cout << "Kto rozpoczyna gre: 0-komputer, 1-gracz?" << " ";
        cin >> wybor;
        while(wynik)
        {

            if(wybor==0)
            {
                komputer();
            }
            else if(wybor==1)
            {

                rysuj_plansze();
                ruch_gracza();
                licznik++;
            }
            rysuj_plansze();
            wybor=1-wybor;
            cout << liczba_wykonanych_ruchow;

            if(wygrana(znakComputer))
            {
                rysuj_plansze();
                cout << endl;
                cout << "PRZEGRALES!!!!" << endl;
                wynik = false;

            }else if(remis())
            {
                rysuj_plansze();
                cout << endl;
                cout << "REMIS!!!!" << endl;
                wynik = false;
            }
            else if(licznik > 0 && wybor==1){
                cout << "Chcesz cofnac?" << endl;
                char wybor3;
                cin >> wybor3;

                if(wybor3 == 'T' || wybor3== 't'){
                    int ile_cofnac;
                    cin >> ile_cofnac;
                    cofnij(ile_cofnac);
                    licznik = 0;

                }

            }
        }
        cout << endl;
        cout << "Chcesz jeszcze raz zagrac?(T/N)" << endl;
        cin >> wybor2;
    }while(wybor2 == 'T' || wybor2== 't');
    return 0;
}

