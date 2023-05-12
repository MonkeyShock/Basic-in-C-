#include <iostream>
using namespace std;

int main()
{
    int i = 0, ni, nim, nin, p, pm, pn;
    do
    {
        cout << "Coloque o valor da indentificacao: ";
        cin >> ni;
        cout << "Coloque o peso: ";
        cin >> p;
        if (i == 0)
        {
            pm = p;
            pn = p;
        }
        else if (p > pm)
        {
            pm = p;
            nim = ni;
        }
        else if (p < pn)
        {
            pn = p;
            nin = ni;
        }
        i++;
    } while (i < 5);
    cout << "Boi magro " << nin << " ,com o peso: " << pn << endl
         << "Boi gordo " << nim << " ,com o peso: " << pm;
    return 0;
}