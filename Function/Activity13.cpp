// CP / SR
#include <iostream>
using namespace std;

int mai(int p, int s)
{
    cout << "O maior: " << p << endl
         << "O menor: " << s;
}
int main()
{
    int np, nm, nn;
    for (int i = 0; i < 4; i++)
    {
        cout << "Coloque um numero: ";
        cin >> np;
        if (i == 0)
        {
            nm = np;
            nn = np;
        }
        else if (np > nm)
        {
            nm = np;
        }
        else if (np < nn)
        {
            nn = np;
        }

        mai(nm, nn);
    }
}