#include <iostream>

extern char plansza[9];
extern char znakComputer;
extern int liczba_wykonanych_ruchow;
extern int wykonane_ruchy[9];

void przypisz(int ruch){
    plansza[ruch] = znakComputer;
    wykonane_ruchy[liczba_wykonanych_ruchow]=ruch;
    liczba_wykonanych_ruchow++;
}
