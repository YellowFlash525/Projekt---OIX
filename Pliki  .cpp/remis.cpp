#include "remis.h"

#include <iostream>
using namespace std;

extern char plansza[9];

bool remis(){
    for(int i = 1; i<=9; i++){
        if(plansza[i] == ' '){
            return false;
        }
    }
    return true;
}
