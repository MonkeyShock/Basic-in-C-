#include <iostream>
using namespace std;

int main()
{
    float c;
    int v;
    while (c != 'n')
    {
        cout << "Coloque um valor: ";
        cin >> v;
        if (v >= 0)
        {
            cout << "Valores escritos positivos: " << v << endl;
        }
        cout << "Deseja sair s ou n: ";
        cin >> c;
    }
}