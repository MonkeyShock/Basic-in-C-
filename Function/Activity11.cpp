// SP / CR
#include <iostream>
using namespace std;

int med()
{
    float np, ns, nt, v;
    char e;
    cout << "Nota 1: ";
    cin >> np;
    cout << "Nota 2: ";
    cin >> ns;
    cout << "Nota 3: ";
    cin >> nt;
    cout << "Escolha o tipo de media (A = Aritmetica| P = Ponderada): ";
    cin >> e;
    if (e = 'A')
    {
        v = (np + ns + nt) / 3;
    }
    else if (e = 'P')
    {
        v = (np + ns + nt) / (5 + 3 + 2);
    }
    else
    {
        cout << "Letra invalida";
    }
    return v;
}

int main()
{
    float res;
    res = med();
    cout << "A media e de: " << res;
}