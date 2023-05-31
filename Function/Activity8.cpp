// CR /CP

#include <iostream>
using namespace std;

int comp(float p, float s)
{
    float res = 0;
    res = (s / p) * 100;
    return res;
}

int main()
{
    float va, vn, rece;
    cout << "Coloque o valor antigo: ";
    cin >> va;
    cout << "Coloque o valor novo: ";
    cin >> vn;
    rece = comp(va, vn);
    cout << "O pecentual e de: " << rece << "%";
}
