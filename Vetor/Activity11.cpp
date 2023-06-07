#include <iostream>
using namespace std;

int main()
{
    int num[6], i[6], p[6];
    int c = 0, vp = 0, vi = 0;
    while (c < 6)
    {
        i[c] = 0;
        p[c] = 0;
        cout << "Coloque o numero inteiro: ";
        cin >> num[c];
        if (num[c] % 2 == 0)
        {
            vp++;
            p[c] = num[c];
        }
        else if (num[c] % 2 != 0)
        {
            vi++;
            i[c] = num[c];
        }
        else
        {
            cout << "Valor indesejado.";
        }

        c++;
    }
    for (int t = 0; t < 6; t++)
    {
        if (p[t] != 0)
        {
            cout << "Os numeros pares sao: " << p[t] << endl;
        }
    }

    for (int t = 0; t < 6; t++)
    {

        if (i[t] != 0)
        {
            cout << "Os numeros impares sao: " << i[t] << endl;
        }
    }
    cout << "Quantidade de valor par: " << vp << endl;
    cout << "Quantidade de valor impar: " << vi << endl;
}