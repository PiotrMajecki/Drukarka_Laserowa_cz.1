#pragma once
#include "DrukarkaLaserowa.h"
#include <string>
#include <iostream>

using namespace std;

class PoziomTuszu
{
private:
	int ilosc_tuszu; //w %
	string rodzaj_tuszu;

public:
	PoziomTuszu(); //konstruktor
	~PoziomTuszu(); //destruktor
	void wyswietlStanTuszu();
	void wymianaTuszu(int nowa_ilosc_tuszu);
};