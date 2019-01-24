#include <iostream>
#include "dzielenie.h"

using namespace std;

double Dzielenie::dziel()
{
    cout << "Podaj dwie liczby: ";
    cin >> a >> b;
    cout << a << "/" << b << " wynosi: " << a/b << endl;
    return 0;
}
