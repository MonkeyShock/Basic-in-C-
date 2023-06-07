#include <iostream>
using namespace std;

int main()
{
    int a[4], b[4], m[4], i;
    for (i = 0; i < 4; i++)
    {
        cout << "Coloque o valor 1: ";
        cin >> a[i];
        cout << "coloque o valor 2: ";
        cin >> b[i];
        m[i] = (a[i] * 4) + (b[i] * 6) / 10;
    }
    for (i = 4; i <= 0; i--)
    {
        cout << "A media e de: " << m[i] << endl;
    }
}