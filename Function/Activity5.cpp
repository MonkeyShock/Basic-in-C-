// SP / SR

#include <iostream>
using namespace std;

void comp()
{
    float va, vn, res = 0;
    cout << "Coloque o valor antigo: ";
    cin >> va;
    cout << "Coloque o valor novo: ";
    cin >> vn;
    res = (vn / va) * 100;
    cout << "A porcentagem e: " << res << "%";
}

int main()
{
    comp();
}