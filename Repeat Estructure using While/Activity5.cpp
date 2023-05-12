#include <iostream>
using namespace std;

main()
{
    int i = 1, b = 0, bmai = 0, bmen = 0, ps = 0, bimai = 0, bimen = 0;
    while (i <= 5)
    {
        cout << "Coloque o a indentidade do boi: ";
        cin >> b;
        cout << "Coloque o peso do boi: ";
        cin >> ps;
        if (i == 1)
        {
            bmai = ps;
            bmen = ps;
        }
        if (bmai < ps)
        {
            bmai = ps;
            bimai = b;
        }
        else if (bmen > ps)
        {
            bmen = ps;
            bimen = b;
        }
        i++;
    }
    cout << "O boi mais pesado " << bimai << " com o peso: " << bmai << endl
         << "O boi leve " << bimen << " com o peso: " << bmen;
}