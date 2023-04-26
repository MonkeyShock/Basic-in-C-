#include <iostream>
#include <locale.h>
using namespace std;

main()
{
    setlocale(LC_ALL, "portuguese");
    float ct, bc, v;
    cout << "Cotação em dolar" << endl
         << "Coloque o valor do dolar: ";
    cin >> ct;
    cout << "Coloque a quantidade de reais: ";
    cin >> bc;
    v = bc / ct;
    cout << "O valor do dolar: " << ct << " O seu patrimonio equivale a: " << v;
}