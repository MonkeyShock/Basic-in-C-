#include <iostream>
#include <cmath>
using namespace std;

main()
{
    float A, B, C, v, x, B1, x1;
    cout << "Calculadora de equacao 2 grau." << endl;
    cout << "Coloque o valor de A: ";
    cin >> A;
    cout << "Coloque o valor de B: ";
    cin >> B;
    cout << "Coloque o valor de C: ";
    cin >> C;
    B1 = pow(B, 2);
    v = B1 - (4 * A * C);
    x = (-B + sqrt(v)) / (2 * A);
    x1 = (-B - sqrt(v)) / (2 * A);
    cout << "O valor de  x1: " << x << endl;
    cout << "O valor de x2: " << x1;
}