#include <iostream>
#include "pytanie.h"
#include <fstream>
#include <cstdlib>

using namespace std;

void Pytanie::wczytaj()
{
    fstream plik;
    plik.open("quiz.txt",ios::in);

    if(plik.good()==false)
}
