#include <iostream>
using namespace std;

int main()
{
    // b = Base, h = aultura v = Valor
    float b, h, v;
    cout << "Coloque da base do trianngulo: ";
    cin >> b;
    cout << "Coloque o valor da altura: ";
    cin >> h;
    v = (b * h) / 2;
    cout << "O valor da area e: " << v;
    return 0;
}
