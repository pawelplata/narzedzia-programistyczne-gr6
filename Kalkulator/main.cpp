#include <iostream>
<<<<<<< HEAD
#include "dodawanie.h"
#include "Odejmowanie.h"
#include "pierwiastkowanie.h"
#include "dzielenie.h"
#include "mnozenie.h"
=======

>>>>>>> mnozenie
using namespace std;

int main()
{
    int n=0;
<<<<<<< HEAD
    cout << "Wybierz opcje" << endl;
    cout << "1: dodawanie"<<endl;
    cout << "2: odejmowanie"<<endl;
cout <<"3: mnozenie"<<endl;
    cout << "4: dzielenie" << endl;
    cout << "5: pierwiastkowanie" << endl;
    cout << "q: zakoncz program" << endl;
    for (;cin >> n;)
=======
   cout << "Wybierz opcje" << endl;
  cout <<"3:mnozenie " <<endl;
  cout << "g: zakoncz program" << endl;
    for (;cin << n;)
>>>>>>> mnozenie
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
case 3;
Mnozenie c;
c.mnozenie();
break;
	 case 4:
            Dzielenie a1;
            a1.dziel();
            break;
        case 5:
            Pierwiastkowanie a2;
            a2.pierwiastkuj();
            break;
	case 3:
	Mnozenie c;
	c.mnozenie();
	break;

        default:
            cout << "Nieznane polecenie." << endl;
        }
    }
    return 0;
}
