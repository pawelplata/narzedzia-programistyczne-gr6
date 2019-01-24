#include <iostream>
#include <math.h>
#include "pierwiastkowanie.h"

using namespace std;

double a;

double Pierwiastkowanie::pierwiastkuj()
{
    cout << "Podaj liczbe do pierwiastkowania: ";
    cin >> a;
    cout << "Pierwiastek z " << a << " wynosi: " << sqrt(a) << endl;
    return 0;
}
