#include "Obrona.h"
#include "gdzie_znak.h"

#include <iostream>
using namespace std;

extern char znakPlayer;
extern int liczba_wykonanych_ruchow;
extern int wykonane_ruchy[9];


bool Obrona()
{
    if(gdzie_znak(znakPlayer)){
        return true;
    }
    return false;
}
