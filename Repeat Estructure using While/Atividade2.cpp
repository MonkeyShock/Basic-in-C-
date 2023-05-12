#include <iostream>
using namespace std;

int main()
{
    int som = 0, i = 0;
    while (i <= 500)
    {
        if (i % 2 == 0)
        {
            som = som + i;
        }
        i++;
    }
    cout << "A soma: " << som;
}
