#include <iostream>
using namespace std;

int main()
{
    for (int i = 1000; i <= 1999; i++)
    {
        if (i % 11 == 5)
        {
            cout << "Numero com sobra por 5: " << i << endl;
        }
    }
}
