#include <iostream>
using namespace std;

int main()
{
    int n[15], nm = 0, nn = 0;

    for (int i = 0; i < 15; i++)
    {
        cout << "Coloque o numero: ";
        cin >> n[i];
        if (i == 0)
        {
            nm = n[i];
            nn = n[i];
        }
        else if (n[i] >= nm)
        {
            nm = n[i];
        }
        else if (n[i] <= nn)
        {
            nn = n[i];
        }
    }
    cout << "Valor menor: " << nn << endl
         << "Valor maior: " << nm;
}