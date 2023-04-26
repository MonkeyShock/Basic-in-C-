#include <iostream>
using namespace std;

main()
{
    float rend, hor, vlh, s;
    string n;
    int fil;
    cout << "Calculo de Renda" << endl;
    cout << "Qual e o seu nome: ";
    cin >> n;
    cout << "Quntas horas que voce trabalha: ";
    cin >> hor;
    cout << "Valor que recebe por hora: ";
    cin >> vlh;
    cout << "Quantos filhos: ";
    cin >> fil;
    s = (hor * vlh) + ((hor * vlh) * (fil * 0.03));
    cout << "O valor do salario e de: " << s;
}