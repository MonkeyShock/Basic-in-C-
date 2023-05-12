#include <iostream>
using namespace std;

main()
{
    int imp = 0, par = 0, v = 0;
    char s;
    do
    {
        cout << "Coloque um numero: ";
        cin >> v;
        if (v % 2 == 0 && v >= 0)
        {
            par = par + 1;
        }
        else
        {
            imp = imp + 1;
        }
        cout << "Deseja sair (s|n):";
        cin >> s;
    } while (s != 's');
    cout << "Quantidade de impar: " << imp << endl
         << "Quantidade de par: " << par;
}