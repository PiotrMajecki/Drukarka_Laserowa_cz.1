#pragma once
#include "DrukarkaLaserowa.h"
#include <string>
#include <iostream>

using namespace std;

class ParametryUrzadzenia
{
private:
	string rodzaj_urzadzenia;
	int ocena;
	string typ_wyswietlacz;

public:
	ParametryUrzadzenia(); //konstruktor
	~ParametryUrzadzenia(); //destruktor
	void wyswietlRodzajDrukarki();
};