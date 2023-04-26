#include <iostream>
using namespace std;

main()
{
    int boim, boin, boi;
    for (int i = 0; i < 6; i++)
    {
        cout << "Peso do boi: ";
        cin >> boi;

        if (i == 1)
        {
            boim = boi;
            boin = boi;
        }

        if (boi >= boim)
        {
            boim = boi;
        }
        else
        {
            boin = boi;
        }
    }
    cout << "Boi maior: " << boim << endl
         << "Boi menor: " << boin;
}