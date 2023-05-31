// CP / SR
#include <iostream>
using namespace std;

void som(int a)
{
    if (a <= 0)
    {
        cout << "Numero negativo";
    }
    else
    {
        cout << "Numero Positivo";
    }
}

main()
{
    int n;
    cout << "Coloque o numero: ";
    cin >> n;
    som(n);
}