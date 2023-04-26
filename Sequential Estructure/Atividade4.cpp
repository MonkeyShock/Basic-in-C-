#include <iostream>
using namespace std;

main()
{
    int p1, p2;
    float vp1, vp2, f, v;
    cout << "Coloque o valor da peca 1: ";
    cin >> p1;
    cout << "Coloque o valor da peca 2: ";
    cin >> p2;
    cout << "Quantidades pecas 1 que comprou: ";
    cin >> vp1;
    cout << "Quantidade de pecas 2 que comprou: ";
    cin >> vp2;
    cout << "Valor do frete: ";
    cin >> f;
    v = (p1 * vp1) + (p2 * vp2) + f;
    cout << "O valor total a pagar e de: " << v;
}