#include <iostream>
using namespace std;

main()
{
    float desc, val, tol;
    cout << "Calcular Desconto" << endl;
    cout << "Coloque o valor do produto: ";
    cin >> val;
    cout << "Coloque o valor do desconto: ";
    cin >> desc;
    tol = val - (val * (desc / 100));
    cout << "O valor e de: R$" << tol;
}