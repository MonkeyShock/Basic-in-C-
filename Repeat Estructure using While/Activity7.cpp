#include <iostream>
using namespace std;

int main()
{
    int v, c = 0, i = 1;
    while (i <= 25)
    {
        cout << "Coloque o peso da caixa: ";
        cin >> c;
        v = c + v;
        i++;
    }
    cout << "Pesos da caixa e: " << v;
}
