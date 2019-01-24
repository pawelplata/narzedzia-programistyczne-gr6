#include <iostream>
#include "dzielenie.h"

using namespace std;

double Dzielenie::dziel()
{
    cout << "Podaj dwie liczby: ";
    cin >> a >> b;
    if (b==0) cout << "Dzielenie przez zero." << endl;
    else cout << a << "/" << b << " wynosi: " << a/b << endl;
    return 0;
}
