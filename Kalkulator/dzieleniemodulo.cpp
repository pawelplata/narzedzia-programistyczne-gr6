#include <iostream>
#include <math.h> // funkcja round
#include "dzieleniemodulo.h" // zmienne public: a, b

using namespace std;

double DzielenieModulo::dzielmodulo()
{
	setlocale(LC_ALL,"PL-pl"); //polskie znaki
	cout << "Podaj 1-szą liczbę: ";
	cin >> a;
	do{
	cout << "Podaj 2-gą liczbę: ";
	cin >> b;
	if(b<=0) cout << "\nNie dziel liczby przez 0!\n"<<endl; //mianownik różny od zera
	}while(b<=0);
	cout << "Reszta z dzielenia wynosi: "<<floor(a/b)*b<<"."<<endl;//podanie wyniku
	return 0;
}
