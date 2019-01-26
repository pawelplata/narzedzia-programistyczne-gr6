#include <iostream>
#include "dodawanie.h"
#include "Odejmowanie.h"
#include "pierwiastkowanie.h"
#include "dzielenie.h"

using namespace std;

int main()
{
    int n=0;
    cout << "Wybierz opcje" << endl;
    cout << "1: dodawanie"<<endl;
    cout << "2: odejmowanie"<<endl;
    cout << "4: dzielenie" << endl;
    cout << "5: pierwiastkowanie" << endl;
    cout << "q: zakoncz program" << endl;
    for (;cin >> n;)
    {
        switch (n)
        {
         case 1:
	    Dodawanie b1; 
	   b1.dodaj();
	    break;
         case 2:
            Odejmowanie b5;
	    b5.odejmij(); 
	    break;
	 case 4:
            Dzielenie a1;
            a1.dziel();
            break;
        case 5:
            Pierwiastkowanie a2;
            a2.pierwiastkuj();
            break;
        default:
            cout << "Nieznane polecenie." << endl;
        }
    }
    return 0;
}
