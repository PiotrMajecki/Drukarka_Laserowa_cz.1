#include "DrukarkaLaserowa.h"
#include <iostream>
#include <string>

using namespace std;

int DrukarkaLaserowa::liczba_obiektow = 0;

DrukarkaLaserowa::DrukarkaLaserowa()
{
#ifdef _DEBUG  
	cout << "Wywolano domyslny konstruktor DrukarkaLaserowa" << endl;
#endif
	wymiana_kartek = NULL;
	wymiana_tuszu = NULL;
	nazwa = "Nazwa";
	marka = "Marka";
	pamiec_wewnetrzna = 0;
	liczba_obiektow++;
}

DrukarkaLaserowa::DrukarkaLaserowa(int pamiec)
{
#ifdef _DEBUG  
	cout << "Wywolano konstruktor DrukarkaLaserowa" << endl;
#endif
	liczba_obiektow++;
	pamiec_wewnetrzna = pamiec;
	nazwa = "Nazwa";
	marka = "Marka";
}

DrukarkaLaserowa::DrukarkaLaserowa(const DrukarkaLaserowa &drukarka_laserowa)
{
	nazwa = drukarka_laserowa.nazwa;
	wymiana_kartek = drukarka_laserowa.wymiana_kartek;
	wymiana_tuszu = drukarka_laserowa.wymiana_tuszu;
	nazwa = drukarka_laserowa.nazwa; 
	marka = drukarka_laserowa.marka;
	pamiec_wewnetrzna = drukarka_laserowa.pamiec_wewnetrzna;
}

void DrukarkaLaserowa::wyswietlIlosc()
{
	cout << liczba_obiektow;
}

void DrukarkaLaserowa::wyswietlUrzadzenie()
{
	string wyswietl_rodzaj_drukarki;
	wyswietl_rodzaj_drukarki = nazwa + string(" ") + marka;
	cout << "To urzadzenie: " << wyswietl_rodzaj_drukarki << endl;
}

void DrukarkaLaserowa::wyswietlRodzajDrukarki()
{
	cout << "Nazwa: " << nazwa << endl << "Marka: " << marka << endl << "Pamiec wewnetrzna: " << pamiec_wewnetrzna << endl;
}

void DrukarkaLaserowa::wymianaKartek(int nowa_ilosc_kartek)
{
	wymiana_kartek = nowa_ilosc_kartek;
}

void DrukarkaLaserowa::wymianaTuszu(int nowy_ilosc_tusz)
{
	wymiana_tuszu = nowy_ilosc_tusz;
}

void DrukarkaLaserowa::zmienNazwe(string nowa_nazwa)
{
	nazwa = nowa_nazwa;
}

void DrukarkaLaserowa::zmienMarke(string nowa_marka)
{
	marka = nowa_marka;
}

//operatory
bool DrukarkaLaserowa::operator == (const DrukarkaLaserowa &drukarka_laserowa)
{
	if (drukarka_laserowa.pamiec_wewnetrzna == pamiec_wewnetrzna)
		return true;
	else
		return false;
}

bool DrukarkaLaserowa::operator > (const DrukarkaLaserowa &drukarka_laserowa)
{
	if (drukarka_laserowa.pamiec_wewnetrzna > pamiec_wewnetrzna)
		return true;
	else
		return false;
}

bool DrukarkaLaserowa::operator < (const DrukarkaLaserowa &drukarka_laserowa)
{
	if (drukarka_laserowa.pamiec_wewnetrzna < pamiec_wewnetrzna)
		return true;
	else
		return false;
}

DrukarkaLaserowa DrukarkaLaserowa::operator + (const DrukarkaLaserowa &drukarka_laserowa)
{
	DrukarkaLaserowa suma(0);
	suma.pamiec_wewnetrzna = drukarka_laserowa.pamiec_wewnetrzna + pamiec_wewnetrzna;
	return suma;
}

DrukarkaLaserowa DrukarkaLaserowa::operator * (const DrukarkaLaserowa &drukarka_laserowa)
{
	DrukarkaLaserowa iloczyn(0);
	iloczyn.pamiec_wewnetrzna = drukarka_laserowa.pamiec_wewnetrzna * pamiec_wewnetrzna;
	return iloczyn;
}

DrukarkaLaserowa & DrukarkaLaserowa::operator = (const DrukarkaLaserowa &drukarka_laserowa)
{
	pamiec_wewnetrzna = drukarka_laserowa.pamiec_wewnetrzna;
	nazwa = drukarka_laserowa.nazwa;
	marka = drukarka_laserowa.marka;

	return *this;
}

DrukarkaLaserowa & DrukarkaLaserowa::operator += (const DrukarkaLaserowa &drukarka_laserowa)
{
	pamiec_wewnetrzna += drukarka_laserowa.pamiec_wewnetrzna;
	return *this;
}
DrukarkaLaserowa & DrukarkaLaserowa::operator -= (const DrukarkaLaserowa &drukarka_laserowa)
{
	pamiec_wewnetrzna -= drukarka_laserowa.pamiec_wewnetrzna;
	return *this;
}

DrukarkaLaserowa & DrukarkaLaserowa::operator ++ (int)
{
	pamiec_wewnetrzna++;
	return *this;
}
DrukarkaLaserowa & DrukarkaLaserowa::operator -- (int)
{
	if (pamiec_wewnetrzna != 0)
		pamiec_wewnetrzna--;
	return *this;
}

//destruktor
DrukarkaLaserowa::~DrukarkaLaserowa()
{
#ifdef _DEBUG
	cout << "Wywolano destruktor ~DrukarkaLaserowa" << endl;
	cout << "Drukarka zostala zniszczona" << endl;
#endif
	--liczba_obiektow;
}