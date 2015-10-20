#include "ruch_komputera.h"
#include "czystart.h"
#include "Atak.h"
#include "Obrona.h"
#include "Magiczny_ruch.h"
#include "random.h"

#include <iostream>
using namespace std;


void komputer(){
    if(Start()){
        return;
    }
    else if(Atak()){
        return;
    }
    else if(Obrona()){
        return;
    }
    else if(Magiczny_ruch()){
        return;
    }
    else if(random()){
        return;
    }
}
