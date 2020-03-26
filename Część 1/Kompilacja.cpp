#include "DrukarkaLaserowa.h"
#include <iostream>
#include <string>

using namespace std;

string nowa_nazwa;
string nowa_marka;
int opcja;

int main() 
{
#ifdef _DEBUG
	//Testowanie klas
	cout << "Wywolanie konstruktora obiektu." << endl;
	DrukarkaLaserowa test1(4), test2(6), test3(8);
	cout << "Obiekt: ";
	test1.wyswietlUrzadzenie();
	cout << endl;

	cout << "Zmieniono nazwe drukarki na Advantage" << endl;
	test1.zmienNazwe("Advantage");
	cout << "Zmieniono model drukarki na Samsung" << endl;
	test1.zmienMarke("Samsung");
	test1.wyswietlUrzadzenie();
	cout << endl;

	cout  << "Ilosc elementow obiektu test1: ";
	test1.wyswietlIlosc();
	cout << endl;

	//Kopiowanie obiektu
	DrukarkaLaserowa kopiaObiektu(test1);
	test1.wyswietlUrzadzenie();
	cout << endl << "Skopiowano obiekt test1" << endl;
	cout << "Obiekt: " << endl;
	kopiaObiektu.wyswietlRodzajDrukarki();
	cout << endl;

	cout << "------------------------------" << endl;

	//Operatory
	cout << endl << "Testowanie operatorow:" << endl << endl;

	cout << "Testowanie operatora ==" << endl;
	if (test1 == test2)
		cout << "Prawdziwe" << endl << endl;
	else
		cout << "Falszywe" << endl << endl;
	
	cout << "Testowanie operatora >" << endl;
	if (test1 > test2)
		cout << "Falszywe" << endl << endl;
	else
		cout << "Prawdziwe" << endl << endl;
	
	cout << "Testowanie operatora <" << endl;
	if (test1 < test2)
		cout << "Falszywe" << endl << endl;
	else
		cout << "Prawdziwe" << endl << endl;

	cout << endl;

	DrukarkaLaserowa test4;
	test1.wyswietlRodzajDrukarki();
	test2.wyswietlRodzajDrukarki();
	test3.wyswietlRodzajDrukarki();

	cout << endl << "Testowanie operatora +" << endl;
	test3 = test1 + test2;

	test1.wyswietlRodzajDrukarki();
	test2.wyswietlRodzajDrukarki();
	test3.wyswietlRodzajDrukarki();

	cout << endl << "Testowanie operatora *" << endl;
	test3 = test1 * test2;

	test1.wyswietlRodzajDrukarki();
	test2.wyswietlRodzajDrukarki();
	test3.wyswietlRodzajDrukarki();

	cout << endl;

	cout << "Testowanie operatora =" << endl;
	test1 = test2;
	test2 = test3;

	test1.wyswietlRodzajDrukarki();
	test2.wyswietlRodzajDrukarki();
	test3.wyswietlRodzajDrukarki();


	cout << endl << "Testowanie operatora +=" << endl;
	test3 += test2;

	test2.wyswietlRodzajDrukarki();
	test3.wyswietlRodzajDrukarki();

	cout << endl << "Testowanie operatora -=" << endl;
	test2 -= test1;

	test1.wyswietlRodzajDrukarki();
	test2.wyswietlRodzajDrukarki();

	cout << endl << "Testowanie operatora ++" << endl;
	test1++;

	test1.wyswietlRodzajDrukarki();

	cout << endl << "Testowanie operatora --" << endl;
	test1--;

	test1.wyswietlRodzajDrukarki();

	cout << endl << "------------------------------" << endl;

	//Tworzenie i testowanie obiektu dynamicznego
	cout << endl << "Tworzenie obiektu dynamicznego test3" << endl;

	DrukarkaLaserowa *test6 = new DrukarkaLaserowa;

	cout << "Obiekt: " << endl;
	test6->wyswietlUrzadzenie();
	cout << endl;

	cout << "Zmieniono marke drukarki na Samsung" << endl;
	test6->zmienMarke("Samsung");
	cout << "Zmieniono marke drukarki na drukarke_dynamiczna" << endl;
	test6->zmienNazwe("drukarka_dynamiczna");
	test6->wyswietlUrzadzenie();
	cout << endl;

	cout << "Ilosc elementow obiektu test3: ";
	test6->wyswietlIlosc();
	cout << endl;

	cout << "Wywolanie destruktora obiektu test3" << endl;
	if (test6 != NULL)
	{
		delete test6;
		test6 = NULL;
	}

	cout << "Ilosc elementow obiektu: ";
	test6->wyswietlIlosc();

	cout << endl;
	cout << endl << "Nacisnij klawisz [ENTER] aby kontynuowac.";
	cin.get();
	system("cls");
#endif

	DrukarkaLaserowa drukarka_laserowa(6);

	//Menu programu
	cout << "Poczatek programu testujacego" << endl;
	do {
		switch (opcja)
		{
		case 0:
			cout << "-------------------------------" << endl;
			cout << "Wybierz opcje:" << endl;
			cout << "1: Wyswietl rodzaj drukarki" << endl;
			cout << "2: Wyswietl urzadzenie" << endl;
			cout << "3: Zmien nazwe drukarki" << endl;
			cout << "4: Zmien model drukarki" << endl;
			cout << "9: Zamknij program" << endl;
			cout << "-------------------------------" << endl;
			cout << "Opcja: ";
			cin >> opcja;
			break;
		case 1:
			system("cls");
			drukarka_laserowa.wyswietlRodzajDrukarki();
			opcja = 0;
			break;
		case 2:
			system("cls");
			drukarka_laserowa.wyswietlUrzadzenie();
			opcja = 0;
			break;
		case 3:
			system("cls");
			cout << "Wpisz nowa nazwe drukarki: ";
			cin >> nowa_nazwa;
			drukarka_laserowa.zmienNazwe(nowa_nazwa);
			cout << "Nazwa drukarki zostala zmieniona." << endl;
			opcja = 0;
			break;
		case 4:
			system("cls");
			cout << "Wpisz nowy model drukarki: ";
			cin >> nowa_marka;
			drukarka_laserowa.zmienMarke(nowa_marka);
			cout << "Model drukarki zostal zmieniony." << endl;
			opcja = 0;
			break;
		default:
			cout << "Wybrano niepoprawna opcje.";
			opcja = 0;
		}
	} while (opcja != 9);
	return 0;
}