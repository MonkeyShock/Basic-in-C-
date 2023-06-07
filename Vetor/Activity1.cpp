#include <iostream>
using namespace std;

int main()
{
    int x1[3], x2[3], v[3];
    for (int i = 0; i < 3; i++)
    {
        cout << "Coloque o numero 1: ";
        cin >> x1[i];
        cout << "Coloque o numero 2: ";
        cin >> x2[i];
        v[i] = x1[i] - x2[i];
    }
    for (int i = 0; i < 3; i++)
    {
        if (v[i] % 2 != 0)
        {
            cout << "Numero impares: " << v[i] << endl;
        }
    }
}