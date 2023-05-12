#include <iostream>
using namespace std;

int main()
{
    char s, co, cc, l;
    int n, idm = 0, id, i = 1, h = 0, oz, ov, oc, cl, cs, cp, rf = 0;
    float p = 0;
    while (l != 's')
    {
        cout << "Sexo (masculino, feminino): ";
        cin >> s;
        if (s == 'm')
        {
            h = h + 1;
        }
        else if (s == 'f')
        {
            h = h + 1;
        }
        else
        {
            cout << "Sexo invalido" << endl;
        }

        cout << "Cor dos olhos (azuis, verdes, castanhos): ";
        cin >> co;

        if (co == 'a')
        {
            oz = oz + 1;
        }
        else if (co == 'v')
        {
            ov = ov + 1;
        }
        else if (co == 'c')
        {
            oc = oc + 1;
        }
        else
        {
            cout << "Cor invalido" << endl;
        }

        cout << "Cor dos cabelos (louros, castanhos, pretos): ";
        cin >> cc;

        if (cc == 'l')
        {
            cl = cl + 1;
        }
        else if (cc == 'c')
        {
            cl = cl + 1;
        }
        else if (cc == 'p')
        {
            cl = cl + 1;
        }
        else
        {
            cout << "Cor invalido" << endl;
        }

        cout << "Idade: ";
        cin >> id;

        if (idm < id)
        {
            idm = id;
        }

        if (s == 'f' && id == 18 && id < 35 && co == 'v' && cc == 'c')
        {
            rf = (rf + 1);
        }
        cout << "Deseja sair S ou N: ";
        cin >> l;
    }
    p = (rf * 100) / h;
    cout << "A maior idade: " << idm << endl
         << "A porcentagem de mulheres com cabelo louros e olhos verdes são: " << p;
}