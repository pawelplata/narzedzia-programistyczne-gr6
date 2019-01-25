#include <iostream>
#include "mnozenie.h"

using namespace std;

double Mnozenie::mnozenie()
{
double a,b;
    cout << "Podaj liczbe a: ";
    cin >> a ;
	cout <<"\nPodaj liczbe b: ";
	cin >>b;
    cout  << "\nWynik: " << a*b << endl;
    return 0;
}
