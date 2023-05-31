// SP | CR
#include <iostream>
using namespace std;

int som()
{
    int n, v;
    cout << "Coloque o numero: ";
    cin >> n;
    if (n % 2 == 0)
    {
        v = 1;
    }
    else
    {
        v = 0;
    }
    return v;
}
main()
{
    int retv;
    retv = som();
    cout << "Numero: " << retv;
}