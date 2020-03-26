#include "PoziomTuszu.h"
#include <iostream>
#include <string>

using namespace std;

PoziomTuszu::PoziomTuszu() //kostruktor
{
#ifdef DEBUG  
	cout << "Wywolano konstruktor PoziomTuszu" << endl;
#endif
	ilosc_tuszu = 85; //w %
	rodzaj_tuszu = "czarno-bialy";
}

void PoziomTuszu::wyswietlStanTuszu() //obiekt automatyczny
{
	cout << "Ilosc tuszu: " << ilosc_tuszu << endl;
	cout << "Rodzaj tuszu: " << rodzaj_tuszu << endl;
}

void PoziomTuszu::wymianaTuszu(int nowa_ilosc_tuszu) //obiekt dynamiczny
{
	ilosc_tuszu = nowa_ilosc_tuszu;
}

PoziomTuszu::~PoziomTuszu() //destruktor
{
#ifdef _DEBUG
	cout << "Wywolano destruktor ~PoziomTuszu" << endl;
	cout << "Wylaczono drukarke" << endl;
#endif	
}