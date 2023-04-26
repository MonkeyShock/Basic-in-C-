#include <iostream>
using namespace std;

main()
{
    int v;
    cout << "Ler codigo de Tabela" << endl;
    cout << "Coloque o numero: ";
    cin >> v;

    if (v == 1)
    {
        cout << "Alimento nao-perecivel";
    }
    else if (v == 2 || v == 3 || v == 4)
    {
        cout << "Alimento perecivel";
    }
    else if (v == 5 || v == 6)
    {
        cout << "Vestuario";
    }
    else if (v == 7)
    {
        cout << "Higiene pessoal";
    }
    else if (v == 8 || v == 9 || v == 10 || v == 11 || v == 12 || v == 13 || v == 14 || v == 15)
    {
        cout << "Limpeza e utensilios domesticos";
    }
    else
    {
        cout << "Invalido";
    }
}