#include <iostream>
using namespace std;

main()
{
    int i, sm;
    do
    {
        if (i % 2 == 0)
        {
            sm = i + sm;
        }
        i++;
    } while (i <= 500);
    cout << "A soma dos numeros pares e de: " << sm;
}