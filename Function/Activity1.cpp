// SP / SR
#include <iostream>
using namespace std;

void som()
{
    int n;
    cout << "Coloque um numero: ";
    cin >> n;
    if (n <= 0)
    {
        cout << "Negativo";
    }
    else
    {
        cout << "Positivo";
    }
}

int main()
{
    som();
}