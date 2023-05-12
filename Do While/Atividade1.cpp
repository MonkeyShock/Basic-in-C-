#include <iostream>
using namespace std;

main()
{
    int i = 0;
    do
    {
        if (i % 2 == 0)
        {
            cout << "Par: " << i << endl;
        }
        else
        {
            cout << "Impar: " << i << endl;
        }
        i++;
    } while (i <= 20);
}