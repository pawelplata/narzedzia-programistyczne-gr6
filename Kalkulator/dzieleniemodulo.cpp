#include <iostream>
#include <math.h>
#include "dzieleniemodulo.h"

using namespace std;

double DzielenieModulo::dzielmodulo()
{
	cin >> a;
	cin >> b;
	cout << floor(a/b)*b;
	return 0;
}
