#include <iostream>
using namespace std;

main()
{
    int inv, u, c, d, r;
    cout << "Inversor de numero" << endl;
    cout << "Coloque 3 numeros: ";
    cin >> inv;
    c = inv % 10;
    d = (inv / 10) % 10;
    u = (inv / 100);
    cout << "O inverso e: " << c << d << u;
}