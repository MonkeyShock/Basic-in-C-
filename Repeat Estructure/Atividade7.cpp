#include <iostream>
using namespace std;

int main()
{
    int som, n = 0;
    cout << "Coloque o numero: ";
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        if (i == 0)
        {
            som = n + i;
        }
        som = i + som;
    }
    cout << "A soma: " << som;
}