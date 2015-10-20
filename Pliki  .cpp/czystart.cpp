#include "czystart.h"
#include "przypisz_znak_k.h"
#include <iostream>
using namespace std;

extern char plansza[9];
extern char znakPlayer;
extern char znakComputer;
extern int liczba_wykonanych_ruchow;
extern int wykonane_ruchy[9];


bool Start(){
    if(plansza[5]== ' '){
        przypisz(5);
        return true;
    }
    else if(plansza[5]==znakPlayer && plansza[9]==' '){
        przypisz(9);
        return true;
    }
    return false;
}
