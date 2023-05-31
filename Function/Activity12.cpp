// SP/ SR
#include <iostream>
using namespace std;

void som()
{
    int np, nm, nn;

    for (int i = 0; i < 4; i++)
    {

        cout << "Coloque o numero:";
        cin >> np;

        if (i == 0)
        {
            nm = np;
            nn = nn;
        }
        else if (np > nm)
        {
            nm = np;
        }
        else if (np < nn)
        {
            nn = np;
        }
    }
    cout << "O valor maior: " << nm << endl
         << "Valor menor: " << nn;
}
int main()
{
    som();
}