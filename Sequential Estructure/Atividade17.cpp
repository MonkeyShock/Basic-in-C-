#include <iostream>
using namespace std;

main()
{
    float c, l, cm, lm;
    int t;
    cout << "Calcular quantidade de tijolos" << endl
         << "Coloque o comprimento do tijolo: ";
    cin >> c;
    cout << "Coloque a largura do tijolo: ";
    cin >> l;
    cout << "Coloque o comprimento da parede: ";
    cin >> cm;
    cout << "Coloque a largura da parede: ";
    cin >> lm;
    t = (lm * cm) / (c * l);
    cout << "A quantidade de tijolo e de: " << t;
}
