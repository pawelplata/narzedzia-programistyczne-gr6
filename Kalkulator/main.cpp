#include <iostream>
#include "pierwiastkowanie.h"

using namespace std;

int main()
{
    int n=0;
    cout << "Wybierz opcje" << endl;
    cout << "5: pierwiastkowanie" << endl;
    cout << "g: zakoncz program" << endl;
    for (;cin >> n;)
    {
        switch (n)
        {
        case 5:
            Pierwiastkowanie a1;
            a1.pierwiastkuj();
            break;
        default:
            cout << "Nieznane polecenie." << endl;
        }
    }
    return 0;
}
