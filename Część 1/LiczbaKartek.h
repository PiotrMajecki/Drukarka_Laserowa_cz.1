#pragma once
#include "DrukarkaLaserowa.h"
#include <string>
#include <iostream>

using namespace std;

class LiczbaKartek
{
private:
	int ilosc_kartek;
	string rodzaj_kartek;

public:
	LiczbaKartek(); //konstruktor
	~LiczbaKartek(); //destruktor
	void wyswietlKartki();
	void wymianaKartek(int nowa_ilosc_kartek);
};