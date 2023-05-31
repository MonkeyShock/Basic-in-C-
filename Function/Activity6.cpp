// CP / SR

#include <iostream>
using namespace std;

int comp(float p, float s)
{
    float res = 0;
    res = (s / p) * 100;
    cout << "O percentueal e de: " << res << "%";
}

int main()
{
    float va, vn;
    cout << "Coloque o valor antigo: ";
    cin >> va;
    cout << "Coloque o valor novo: ";
    cin >> vn;
    comp(va, vn);
}