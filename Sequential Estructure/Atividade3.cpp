#include <iostream>
#include <cmath>
#include <locale.h>
using namespace std;

main()
{
    setlocale(LC_ALL, "portuguese");
    float bas1, bas2, h, v;
    cout << "Coloque o valor da base1: ";
    cin >> bas1;
    cout << "Coloque o valor da base2: ";
    cin >> bas2;
    cout << "Coloque o valor da altura: ";
    cin >> h;
    v = ((bas1 + bas2) * h) / 2;
    cout << "O valor é de: " << v;
}
