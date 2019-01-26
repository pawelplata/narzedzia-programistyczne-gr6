#include <iostream>
#include <math.h>
#include "dzieleniemodulo.h"

using namespace std;

double DzielenieModulo::dzielmodulo()
{
	cout << "Podaj 1-szą liczbę";
	cin >> a;
	cout << "Podaj 2-gą liczbę";
	cin >> b;
	cout << "Reszta z dzielenia wynosi: "<<floor(a/b)*b;
	return 0;
}
