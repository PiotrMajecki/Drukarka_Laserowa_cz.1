#include "ParametryUrzadzenia.h"
#include <iostream>
#include <string>

using namespace std;

ParametryUrzadzenia::ParametryUrzadzenia() //konstruktor
{
#ifdef DEBUG
	cout << "Wywolano konstruktor ParametryUrzadzenia" << endl;
#endif
	rodzaj_urzadzenia = "drukarka laserowa";
	ocena = 4;
	typ_wyswietlacz = "prostokat";
}

void ParametryUrzadzenia::wyswietlRodzajDrukarki() //obiekt automatyczny
{
	cout << "Rodzaj urzadzenia: " << rodzaj_urzadzenia << endl;
	cout << "Ocena: " << ocena << endl;
	cout << "Wyswietlacz: " << typ_wyswietlacz << endl;
}

ParametryUrzadzenia::~ParametryUrzadzenia() //destruktor
{
#ifdef _DEBUG
	cout << "Wywolano destruktor ~ParametryUrzadzenia" << endl;
	cout << "Wylaczono drukarke" << endl;
#endif
}