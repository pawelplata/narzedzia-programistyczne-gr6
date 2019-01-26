#include <iostream>
#include "odejmowanie.h"

using namespace std;
double Odejmowanie::odejmij()
{
            cout <<"Podaj dwie liczby: ";
            cin >> a >> b;
            cout<<a<<"-"<<b<<" wynosi: "<<a-b<<endl;
            return 0;
}
