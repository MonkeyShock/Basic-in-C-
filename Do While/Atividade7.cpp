#include <iostream>
using namespace std;

int main()
{
    int id = 0, idm, i = 0, p = 0, rf = 0, v = 0;
    string sx, co, cc;
    char s;
    do
    {
        cout << "Masculino ou Feminino: ";
        cin >> sx;
        cout << "Qual cor dos olhos | (olhos azuis, verdes, castanhos): ";
        cin >> co;
        cout << "Qual a cor do cabelo | (louros, castanhos, pretos): ";
        cin >> cc;
        cout << "Idade do usiario: ";
        cin >> id;
        p = p + 1;
        if (i == 0)
        {
            idm = id;
        }

        if (id > idm)
        {
            idm = id;
        }
        else if (sx == "Feminino" && id >= 18 && id <= 35 && co == "verdes" && cc == "louros")
        {
            rf = rf + 1;
        }
        cout << "Deseja sair (s|n): ";
        cin >> s;
        i++;
    } while (s != 's');
    v = (rf / p) * 100;
    cout << "Maior idade: " << idm << endl
         << "Porcentagem de mulheres com cabelo louro, com olhos verdes entre 18 e 35 anos de idade: " << v;
    return 0;
}
