#include <iostream>
using namespace std;

int main()
{
    int v[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "Coloque o numero: ";
        cin >> v[i];
    }
    cout << "Sequencia inversa: ";
    for (int i = 5; i >= 0; i--)
    {
        cout << v[i] << " , ";
    }
}