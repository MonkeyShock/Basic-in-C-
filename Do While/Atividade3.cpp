#include <iostream>
using namespace std;

main()
{
    int i = 0, n = 0, nm, nn;
    do
    {
        cout << "Coloque o valor do numero: ";
        cin >> n;

        if (i == 0)
        {
            nm = n;
            nn = n;
        }
        else if (n > nm)
        {
            nm = n;
        }
        else if (n < nn)
        {
            nn = n;
        }

        i++;
    } while (i <= 20);
    cout << "O valor menor: " << nn << " Valor maior: " << nm;
}