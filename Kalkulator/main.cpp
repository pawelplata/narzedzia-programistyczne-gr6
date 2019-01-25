#include <iostream>
#include "mnozenie.h"
using namespace std;

int main()
{
    int n=0;
    double a, b;
    cout << "Wybierz opcje" << endl;
  cout <<"3:mnozenie " <<endl;
  cout << "g: zakoncz program" << endl;
    for (;cin << n;)
    {
        switch (n)
        {
        case 1:
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
