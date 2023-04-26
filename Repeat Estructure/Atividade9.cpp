#include <iostream>
using namespace std;

main()
{
    int val, n = 0, valr = 1;
    cout << "Coloque o valor de n: ";
    cin >> n;
    if (n == 0)
    {
        cout << "O seu valor: "
             << "1";
    }
    else
    {

        for (int i = 1; i <= n; i++)
        {
            valr = i * valr;
        }
        cout << "Valor e de: " << valr;
    }
}