#include <iostream>
#include <math.h>
#include "potegowanie.h"

using namespace std;

double potegowanie::poteguj()
{
    cout << "Podaj liczbe, ktora bedziesz potegowac do 2: "<< endl;
    cin >> a;
	b=a*a;
    cout << "Potega liczby " << a << " do 2 wynosi: " << b <<;
    return 0;
}
