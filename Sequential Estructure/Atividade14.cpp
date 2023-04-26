#include <iostream>
using namespace std;

main()
{
    int a, an, v;
    cout << "Contador de idade" << endl;
    cout << "Coloque o ano de nascimento: ";
    cin >> a;
    cout << "Coloque o ano: ";
    cin >> an;
    v = an - a;
    cout << "Voce tem: " << v << " anos.";
}