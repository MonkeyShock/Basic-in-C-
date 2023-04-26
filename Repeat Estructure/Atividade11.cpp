#include <iostream>
using namespace std;

main()
{
    int valp = 0, valm = 0;
    for (int i = 1; i <= 200; i++)
    {
        if (i % 2 == 0)
        {
            valp = 1 + valp;
        }
        else
        {
            valm = 1 + valm;
        }
    }
    cout << "Temos: " << valp << " , pares e " << valm << " impares.";
}