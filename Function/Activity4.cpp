// CP / CR

#include <iostream>
using namespace std;

int som(int val)
{
    int com;
    if (val % 2 == 0)
    {
        com = 1;
    }
    else
    {
        com = 0;
    }
    return com;
}

int main()
{
    int v, res;
    cout << "Coloque o numero: ";
    cin >> v;
    res = som(v);
    cout << "O numero: " << res;
}
