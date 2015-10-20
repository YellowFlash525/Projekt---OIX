#include <iostream>
#include "ruch_gracza.h"
using namespace std;

extern char plansza[9];
extern char znakPlayer;
extern int liczba_wykonanych_ruchow;
extern int wykonane_ruchy[9];

void zle_wspolrzedne(int wspol){
    if(plansza[wspol]!= ' '){
        cout << endl;
        cout << "Zle dane, wprowadz wspolrzedna jeszcze raz!!!" << endl;
        ruch_gracza();
    }
    else{
        plansza[wspol]=znakPlayer;
        wykonane_ruchy[liczba_wykonanych_ruchow]=wspol;
        liczba_wykonanych_ruchow++;
    }
}
