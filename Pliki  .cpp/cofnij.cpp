#include <iostream>
#include <cstdlib>
#include "cofnij.h"
#include "rysuj_plansze.h"
using namespace std;

extern int liczba_wykonanych_ruchow;
extern int wykonane_ruchy[9];
extern char plansza[9];


void cofnij(int ile){
    for(int i=2*ile+1; i>0; i--){
        cout << liczba_wykonanych_ruchow;
        cout << plansza[wykonane_ruchy[liczba_wykonanych_ruchow]];
        plansza[wykonane_ruchy[liczba_wykonanych_ruchow]]= ' ';
        liczba_wykonanych_ruchow--;

    }
    rysuj_plansze();
}
