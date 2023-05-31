// SP/ CR
#include <iostream>
using namespace std;

int som()
{
    float va, vn, res = 0;
    cout << "Coloque o valor antigo: ";
    cin >> va;
    cout << "Coloque o valor novo: ";
    cin >> vn;
    res = (vn / va) * 100;
    return res;
}

int main()
{
    float resmain;
    resmain = som();
    cout << "A porcentagem e: " << resmain << "%";
}
