#include <iostream>
using namespace std;

int main()
{
    int i = 0;
    while (i <= 20)
    {
        if (i % 2 != 0)
        {
            cout << "Valor impares: " << i << endl;
        }
        i++;
    }
}
