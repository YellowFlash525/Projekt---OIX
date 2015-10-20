#include "gdzie_znak.h"
#include "przypisz_znak_k.h"

#include <iostream>
using namespace std;

extern char plansza[9];

bool gdzie_znak(char c){

    //sprawdzenie czy można dostawić 3 znak w wierszu(w zależności od tego czy bedzie to obrona czy atak)
    if(plansza[1] == ' ' && plansza[2] == c && plansza[3] == c){
        przypisz(1);
        return true;
    }
    else if(plansza[1] == c && plansza[2] == ' ' && plansza[3] == c){
        przypisz(2);
        return true;
    }
    else if(plansza[1] == c && plansza[2] == c && plansza[3] == ' '){
        przypisz(3);
        return true;
    }

    else if(plansza[4] == ' ' && plansza[5] == c && plansza[6] == c){
        przypisz(4);
        return true;
    }
    else if(plansza[4] == c && plansza[5] == ' ' && plansza[6] == c){
        przypisz(5);
        return true;
    }
    else if(plansza[4] == c && plansza[5] == c && plansza[6] == ' '){
        przypisz(6);
        return true;
    }

    else if(plansza[7] == ' ' && plansza[8] == c && plansza[9] == c){
        przypisz(7);
        return true;
    }
    else if(plansza[7] == c && plansza[8] == ' ' && plansza[9] == c){
        przypisz(8);
        return true;
    }
    else if(plansza[7] == c && plansza[8] == c && plansza[9] == ' '){
        przypisz(9);
        return true;
    }

    //sprawdzenie czy można dostawić 3 znak w kolumnie(w zależności od tego czy bedzie to obrona czy atak)
    else if(plansza[1] == ' ' && plansza[4] == c && plansza[7] == c){
        przypisz(1);
        return true;
    }
    else if(plansza[1] == c && plansza[4] == ' ' && plansza[7] == c){
        przypisz(4);
        return true;
    }
    else if(plansza[1] == c && plansza[4] == c && plansza[7] == ' '){
        przypisz(7);
        return true;
    }

    else if(plansza[2] == ' ' && plansza[5] == c && plansza[8] == c){
        przypisz(2);
        return true;
    }
    else if(plansza[2] == c && plansza[5] == ' ' && plansza[8] == c){
        przypisz(5);
        return true;
    }
    else if(plansza[2] == c && plansza[5] == c && plansza[8] == ' '){
        przypisz(8);
        return true;
    }

    else if(plansza[3] == ' ' && plansza[6] == c && plansza[9] == c){
        przypisz(3);
        return true;
    }
    else if(plansza[3] == c && plansza[6] == ' ' && plansza[9] == c){
        przypisz(6);
        return true;
    }
    else if(plansza[3] == c && plansza[6] == c && plansza[9] == ' '){
        przypisz(3);
        return true;
    }

    // sprawdzenie skosów podobnie jak kolumny i wiersze
    else if(plansza[1] == ' ' && plansza[5] == c && plansza[9] == c){
        przypisz(1);
        return true;
    }
    else if(plansza[1] == c && plansza[5] == ' ' && plansza[9] == c){
        przypisz(5);
        return true;
    }

    else if(plansza[1] == c && plansza[5] == c && plansza[9] == ' '){
        przypisz(9);
        return true;
    }

    else if(plansza[3] == ' ' && plansza[5] == c && plansza[7] == c){
        przypisz(3);
        return true;
    }
    else if(plansza[3] == c && plansza[5] == ' ' && plansza[7] == c){
        przypisz(5);
        return true;
    }
    else if(plansza[3] == c && plansza[5] == c && plansza[7] == ' '){
        przypisz(7);
        return true;
    }

    return false;
}
