#include "wygrana.h"

extern char plansza[9];
extern char znakPlayer;
extern char znakComputer;


bool wygrana(char c)
{
  bool test;
  int i;

  test = false; // Zmienna przyjmuje true, jeżeli zawodnik ma trzy znaki
                // w wierszu, kolumnie lub na przekatnych

// Sprawdzamy wiersze

  for(i = 1; i <= 7; i += 3)
      test |= ((plansza[i] == c) && (plansza[i+1] == c) && (plansza[i+2] == c));

// Sprawdzamy kolumny

  for(i = 1; i <= 3; i++)
      test |= ((plansza[i] == c) && (plansza[i+3] == c) && (plansza[i+6] == c));

// Sprawdzamy przekątną… 1-5-9

  test |= ((plansza[1] == c) && (plansza[5] == c) && (plansza[9] == c));

// Sprawdzamy przekątną… 3-5-7

  test |= ((plansza[3] == c) && (plansza[5] == c) && (plansza[7] == c));

  if(test)
  {
      return true;
  }
  return false;
}
