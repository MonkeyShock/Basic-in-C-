#include <iostream>
#include <cmath>
using namespace std;

main()
{
    float r, v;
    cout << "Calculo de Esfera !" << endl;
    cout << "Coloque o valor do raio: ";
    cin >> r;
    v = (4 / 3) * (3, 14 * (pow(r, 3)));
    cout << "O volume da sua esfera e de: " << v;
}