#include <iostream>
using namespace std;

int main()
{
    int som = 0;
    for (int i = 0; i <= 500; i++)
    {
        if (i % 2 == 0)
        {
            som = som + i;
        }
    }
    cout << som;
}
