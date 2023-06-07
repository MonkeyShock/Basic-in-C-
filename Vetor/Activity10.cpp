#include <iostream>
using namespace std;

int main()
{
    int n[10], p = 0, men = 0, i = 0;
    do
    {
        cout << "Coloque o valor: ";
        cin >> n[i];
        if (n[i] < 0)
        {
            men = men + 1;
        }
        else
        {
            p = p + 1;
        }

        i++;
    } while (i < 10);
    cout << "Quantidades de valores negativos: " << men << endl
         << "Quantidade de numeros positivos: " << p;
}