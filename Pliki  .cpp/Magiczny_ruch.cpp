#include "Magiczny_ruch.h"
#include "przypisz_znak_k.h"

#include <iostream>
using namespace std;

extern char plansza[9];
extern char znakPlayer;
extern char znakComputer;

bool Magiczny_ruch(){

    //sprawdzanie pierwszego kwadratu
    if(plansza[1]==znakComputer && plansza[4]==znakComputer && plansza[5]==' '){
        przypisz(5);
        return true;
    }
    if(plansza[4]==znakComputer && plansza[5]==znakComputer && plansza[1]==' '){
        przypisz(1);
        return true;
    }
    if(plansza[1]==znakComputer && plansza[5]==znakComputer && plansza[4]==' '){
        przypisz(4);
        return true;
    }

    if(plansza[1]==znakComputer && plansza[2]==znakComputer && plansza[5]==' '){
        przypisz(5);
        return true;
    }
    if(plansza[2]==znakComputer && plansza[5]==znakComputer && plansza[1]==' '){
        przypisz(1);
        return true;
    }
    if(plansza[1]==znakComputer && plansza[5]==znakComputer && plansza[2]==' '){
        przypisz(2);
        return true;
    }

    //sprawdzanie drugiego kwadratu

    if(plansza[3]==znakComputer && plansza[2]==znakComputer && plansza[5]==' '){
        przypisz(5);
        return true;
    }
    if(plansza[2]==znakComputer && plansza[5]==znakComputer && plansza[3]==' '){
        przypisz(3);
        return true;
    }
    if(plansza[3]==znakComputer && plansza[5]==znakComputer && plansza[2]==' '){
        przypisz(2);
        return true;
    }

    if(plansza[3]==znakComputer && plansza[6]==znakComputer && plansza[5]==' '){
        przypisz(5);
        return true;
    }
    if(plansza[6]==znakComputer && plansza[5]==znakComputer && plansza[3]==' '){
        przypisz(3);
        return true;
    }
    if(plansza[3]==znakComputer && plansza[5]==znakComputer && plansza[6]==' '){
        przypisz(6);
        return true;
    }

    //sprawdzenie trzeciego kwadratu

    if(plansza[4]==znakComputer && plansza[7]==znakComputer && plansza[5]==' '){
        przypisz(5);
        return true;
    }
    if(plansza[4]==znakComputer && plansza[5]==znakComputer && plansza[7]==' '){
        przypisz(7);
        return true;
    }
    if(plansza[7]==znakComputer && plansza[5]==znakComputer && plansza[4]==' '){
        przypisz(4);
        return true;
    }

    if(plansza[7]==znakComputer && plansza[8]==znakComputer && plansza[5]==' '){
        przypisz(5);
        return true;
    }
    if(plansza[8]==znakComputer && plansza[5]==znakComputer && plansza[7]==' '){
        przypisz(7);
        return true;
    }
    if(plansza[7]==znakComputer && plansza[5]==znakComputer && plansza[8]==' '){
        przypisz(8);
        return true;
    }

    //sprawdzenie ostatniego kwadratu

    if(plansza[9] == znakComputer && plansza[8] == znakComputer && plansza[5] == ' '){
        przypisz(5);
        return true;
    }
    if(plansza[8] == znakComputer && plansza[5] == znakComputer && plansza[9] == ' '){
        przypisz(9);
        return true;
    }
    if(plansza[5] == znakComputer && plansza[9] == znakComputer && plansza[8]==' '){
        przypisz(8);
        return true;
    }

    if(plansza[9] == znakComputer && plansza[6] == znakComputer && plansza[5] == ' '){
        przypisz(5);
        return true;
    }
    if(plansza[6] == znakComputer && plansza[5] == znakComputer && plansza[9] == ' '){
        przypisz(9);
        return true;
    }
    if(plansza[9] == znakComputer && plansza[5] == znakComputer && plansza[6] == ' '){
        przypisz(6);
        return true;
    }

    return false;
}
