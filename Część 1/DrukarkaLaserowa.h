#pragma once
#include "ParametryUrzadzenia.h"
#include "PoziomTuszu.h"
#include "LiczbaKartek.h"
#include <iostream>
#include <string>

using namespace std;

class DrukarkaLaserowa
{
private:
	int wymiana_kartek;
	int wymiana_tuszu;
	string wyswietl_rodzaj_drukarki;
	string nazwa;
	string marka;
	int pamiec_wewnetrzna;

public:
	static int liczba_obiektow; //statyczne pole klasy
	DrukarkaLaserowa(); 
	DrukarkaLaserowa(int pamiec); 
	~DrukarkaLaserowa();
	DrukarkaLaserowa(const DrukarkaLaserowa &drukarka_laserowa); //konstruktor kopiujacy
	void wymianaKartek(int nowa_ilosc_kartek);
	void wyswietlUrzadzenie();
	void wymianaTuszu(int nowy_ilosc_tusz);
	void wyswietlRodzajDrukarki();
	void zmienNazwe(string nowa_nazwa);
	void zmienMarke(string nowa_marka);
	void wyswietlIlosc();
	
	//operatory
	bool operator == (const DrukarkaLaserowa &drukarka_laserowa);
	bool operator > (const DrukarkaLaserowa &drukarka_laserowa);
	bool operator < (const DrukarkaLaserowa &drukarka_laserowa);
	DrukarkaLaserowa& operator = (const DrukarkaLaserowa &drukarka_laserowa);
	DrukarkaLaserowa operator + (const DrukarkaLaserowa &drukarka_laserowa);
	DrukarkaLaserowa operator * (const DrukarkaLaserowa &drukarka_laserowa);
	DrukarkaLaserowa& operator += (const DrukarkaLaserowa &drukarka_laserowa);
	DrukarkaLaserowa& operator -= (const DrukarkaLaserowa &drukarka_laserowa);
	DrukarkaLaserowa& operator ++ (int);
	DrukarkaLaserowa& operator -- (int);
};