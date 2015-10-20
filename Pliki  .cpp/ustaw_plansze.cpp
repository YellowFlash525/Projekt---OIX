#include "ustaw_plansze.h"
#include <iostream>
using namespace std;

extern char plansza[9];

void ustaw_plansze(){

    for(int i = 1; i<=9; i++)
    {
        plansza[i] = ' ';
    }

}
