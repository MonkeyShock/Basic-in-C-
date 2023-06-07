#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    float x1[5], x2[5], x3[5], v[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "Coloque o valor 1: ";
        cin >> x1[i];
        cout << "Coloque o valor 2: ";
        cin >> x2[i];
        cout << "Coloque o valor 3: ";
        cin >> x3[i];
        v[i] = (x1[i] * x3[i]) / x2[i];
    }
    for (int i = 0; i < 5; i++)
    {
        cout << "Valor: " << v[i] << endl;
    }

    return 0;
}
