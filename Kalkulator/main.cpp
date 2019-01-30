#include <iostream>
#include "dodawanie.h"
#include "Odejmowanie.h"
#include "pierwiastkowanie.h"
#include "dzielenie.h"
#include "logarytm.h"

using namespace std;

int main()
{
    int n=0;
    cout << "Wybierz opcje" << endl;
    cout << "1: dodawanie"<<endl;
    cout << "2: odejmowanie"<<endl;
    cout << "3: mnozenie"<<endl;
    cout << "4: dzielenie" << endl;
    cout << "5: pierwiastkowanie" << endl;
    cout << "6: logarytmowanie" << endl;
    cout << "q: zakoncz program" << endl;
    for (;cin >> n;)
    {
        switch (n)
    {
	 case 4:
            Dzielenie a1;
            a1.dziel();
            break;
        case 5:
            Pierwiastkowanie a2;
            a2.pierwiastkuj();
            break;
        case 6:
            Logarytm z;
            z.log();
            break;

        default:
            cout << "Nieznane polecenie." << endl;
        }
    }
    return 0;
}
