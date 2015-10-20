#include "Atak.h"
#include "gdzie_znak.h"

#include <iostream>
using namespace std;

extern char znakComputer;
extern int liczba_wykonanych_ruchow;
extern int wykonane_ruchy[9];


bool Atak()
{
    if(gdzie_znak(znakComputer))
    {
        return true;
    }
    return false;
}
