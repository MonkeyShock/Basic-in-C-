#include <iostream>
using namespace std;

main()
{
    int n = 0, v = 0, nc = 0, nv = 0;
    do
    {
        cout << "Coloque um valor: ";
        cin >> n;
        nc = nc + 1;
        nv = nv + n;
    } while (n >= 0);
    v = nv / nc;
    cout << "Valor da media e de: " << v;
}