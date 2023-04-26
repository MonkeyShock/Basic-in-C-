#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float r, v, v1;
    cout << "Coloque o valor do raio em cm: ";
    cin >> r;
    v1 = pow(r, 2);
    v = 3.14 * v1;
    cout << "A area circulo e de: " << v;
}