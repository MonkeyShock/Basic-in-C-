#include <iostream>
using namespace std;

int main()
{
    int n, som = 0;
    cout << "Coloque o numero: ";
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        if (i % 2 == 1)
        {
            som = n + i;
        }
    }
    cout << "A soma impares: " << som;
}