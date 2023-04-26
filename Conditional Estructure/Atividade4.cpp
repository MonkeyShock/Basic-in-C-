#include <iostream>
using namespace std;

main()
{
    int v;
    cout << "Tabela de idade" << endl;
    cout << "Coloque o numero: ";
    cin >> v;
    if (v == 5 || v <= 7)
    {
        cout << "Infantil A";
    }
    else if (v == 8 || v <= 10)
    {
        cout << "Infantil B";
    }
    else if (v == 11 || v <= 13)
    {
        cout << "Juvenil A";
    }
    else if (v == 14 || v <= 17)
    {
        cout << "Juvenil B";
    }
    else if (v >= 18)
    {
        cout << "Maiores de 18";
    }
}