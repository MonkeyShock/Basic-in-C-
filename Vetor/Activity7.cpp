#include <iostream>
using namespace std;

int main()
{
    int n[30], nm = 0;
    for (int i = 0; i < 30; i++)
    {
        if (i == 0)
        {
            nm = n[i];
        }
        else if (n[i] > nm)
        {
            nm = n[i];
        }
    }
    cout << "Maior valor: " << nm;
}