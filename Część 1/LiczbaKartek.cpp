#include "LiczbaKartek.h"
#include <iostream>
#include <string>

using namespace std;

LiczbaKartek::LiczbaKartek() //konstruktor
{
#ifdef DEBUG  
	cout << "Wywolano konstruktor LiczbaKartek" << endl;
#endif
	ilosc_kartek = 100;
	rodzaj_kartek = "A4";
}

void LiczbaKartek::wyswietlKartki() //obiekt automatyczny
{
	cout << "Ilosc kartek: " << ilosc_kartek << endl;
	cout << "Rodzaj kartek: " << rodzaj_kartek << endl;
}
void LiczbaKartek::wymianaKartek(int nowa_ilosc_kartek) //obiekt dynamiczny
{
	ilosc_kartek = nowa_ilosc_kartek;
}

LiczbaKartek::~LiczbaKartek() //destruktor
{
#ifdef _DEBUG
	cout << "Wywolano destruktor ~LiczbaKartek" << endl;
	cout << "Wylaczono drukarke" << endl;
#endif
}