#include "random.h"
#include "przypisz_znak_k.h"

#include <iostream>
using namespace std;

extern char plansza[9];
extern char znakComputer;
extern char znakPlayer;

bool random(){
    if(plansza[1]==znakPlayer && plansza[5]==znakComputer && plansza[9]==znakPlayer && plansza[2]== ' '){
        przypisz(2);
        return true;
    }
    if(plansza[3]==znakPlayer && plansza[5]==znakComputer && plansza[7]==znakPlayer && plansza[8]== ' '){
        przypisz(8);
        return true;
    }
    if(plansza[8]==znakPlayer && plansza[5]==znakComputer && plansza[6]==znakPlayer && plansza[9]== ' '){
        przypisz(9);
        return true;
    }
    if(plansza[8]==znakPlayer && plansza[5]==znakComputer && plansza[4]==znakPlayer && plansza[7]== ' '){
        przypisz(7);
        return true;
    }
    if(plansza[1]==' '){
        przypisz(1);
        return true;
    }
    if(plansza[3]==' '){
        przypisz(3);
        return true;
    }
    if(plansza[7]==' '){
        przypisz(7);
        return true;
    }
    if(plansza[9]==' '){
        przypisz(9);
        return true;
    }
    if(plansza[2]==' '){
        przypisz(2);
        return true;
    }
    if(plansza[4]==' '){
        przypisz(4);
        return true;
    }
    if(plansza[6]==' '){
        przypisz(6);
        return true;
    }
    if(plansza[8]==' '){
        przypisz(8);
        return true;
    }
    return false;
}
