#include <iostream>
using namespace std;

main()
{
    float p1, p2, p3, p4, p5, r;
    cout << "Calculo de media" << endl;
    cout << "Coloque o resultado da prova 1: ";
    cin >> p1;
    cout << "Coloque o resultado da prova 2: ";
    cin >> p2;
    cout << "Coloque o resultado da prova 3: ";
    cin >> p3;
    cout << "Coloque o resultado da prova 4: ";
    cin >> p4;
    cout << "Coloque o resultado da prova 5: ";
    cin >> p5;
    /* A multiplicação é o peso (p1 * 1) por exemplo.
    e a divisão por 15 é feita pela nota total das provas.
    */
    r = ((p1 * 1) + (p2 * 2) + (p3 * 3) + (p4 * 4) + (p5 * 5)) / 15;
    cout << "O valor da media e de: " << r;
}