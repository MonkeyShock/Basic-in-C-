#include <iostream>
using namespace std;

int main()
{
    int v = 0, n = 0, sn = 0;
    while (n >= 0)
    {
        cout << "Coloque o numero: ";
        cin >> n;
        sn = sn + 1;
        v = v + n;
    }
    cout << "A media e de: " << v / sn;
}
