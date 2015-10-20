#include "ruch_gracza.h"
#include "zle_wpsolrzedne.h"
#include "rysuj_plansze.h"
#include <iostream>
using namespace std;

extern char plansza[9];
extern char znakPlayer;

//funkcja wykonujaca ruch gracza
void ruch_gracza()
{

    int wspol_ruch;
    cout << endl;
    cout << "Podaj, gdzie chcesz postawic X(1-9):" << " ";
    cin >> wspol_ruch;    // wczytywanie pozycji znaku
    zle_wspolrzedne(wspol_ruch);
    rysuj_plansze();
}
