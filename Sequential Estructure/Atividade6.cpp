#include <iostream>
#include <cmath>
using namespace std;

main()
{
    float x1, y1, x2, y2, v;
    cout << "Coloque o valor do x1:";
    cin >> x1;
    cout << "Coloque o valor de y1: ";
    cin >> y1;
    cout << "Coloque o valor de x2: ";
    cin >> x2;
    cout << "Coloque o valor de y2: ";
    cin >> y2;
    v = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    cout << "O valor e da distancia e: " << v;
}