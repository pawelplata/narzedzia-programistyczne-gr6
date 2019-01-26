#include <iostream>
#include "mnozenie.h"

using namespace std;

double Mnozenie::mnozenie()
{
double a,b;
    cout << "Podaj  a: cos tam ";
    cin >> a ;
	cout <<"\nPodaj  b: ";
	cin >>b;
    cout  << "\nWynik: " << a*b << endl;
    return 0;
}
