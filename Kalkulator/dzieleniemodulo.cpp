#include <iostream>
#include <math.h>
#include "dzieleniemodulo.h"

using namespace std;

double DzielenieModulo::dzielmodulo()
{
	cout << "Podaj 1-szą liczbę";
	cin >> a;
	do{
	cout << "Podaj 2-gą liczbę";
	cin >> b;
	if(b<=0) cout << "Nie dziel liczby przez 0";
	}while(b<=0);
	cout << "Reszta z dzielenia wynosi: "<<floor(a/b)*b;
	return 0;
}
