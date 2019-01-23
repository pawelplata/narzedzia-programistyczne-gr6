#include <iostream>

using namespace std;

int main()
{
    int n=0;
    double a, b;
    cout << "Wybierz opcje" << endl;
    cout << "g: zakoncz program" << endl;
    for (;cin << n;)
    {
        switch (n)
        {
        case 1:
            break;
        default:
            cout << "Nieznane polecenie." << endl;
        }
    }
    return 0;
}
