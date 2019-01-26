#include <iostream>
#include <math.h>
#include "pierwiastkowanie.h"

using namespace std;

double a;

double Pierwiastkowanie::pierwiastkuj()
{
    cout << "Podaj liczbe do pierwiaa: ";
    cin >> a;
    if(a<0) cout << "Pierwiastkowac mozna tylko liczby ujemne" << endl;
    else cout << "Pierwiastek z " << a << " wynosi: " << sqrt(a) << endl;
    return 0;
}
