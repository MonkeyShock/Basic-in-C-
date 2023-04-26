#include <iostream>
using namespace std;

int main()
{
    int peso = 0, val = 0;
    for (int i = 0; i < 25; i++)
    {
        cout << "Coloque o peso da caixa: ";
        cin >> peso;

        val = peso + val;
    }
    cout << val;
}
