#include <iostream>
using namespace std;

main()
{
    int lan, v;
    cout << "Calcular angulo de poligno" << endl;
    cout << "Coloque os lados do pligno: ";
    cin >> lan;
    if (lan == 0)
    {
        cout << "Nao existe um valor";
    }

    else
    {
        v = (lan - 2) * 180;
        cout << "Valor Interno: " << v << endl;
        v = (lan + 2) * 180;
        cout << "Valor Externo: " << v;
    }
}