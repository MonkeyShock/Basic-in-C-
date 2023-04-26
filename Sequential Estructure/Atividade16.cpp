#include <iostream>
using namespace std;

main()
{
    int A, B, A1;
    cout << "Coloque o valor de A: ";
    cin >> A;
    cout << "Verifique o valor A: ";
    cin >> A1;
    cout << "Coloque o valor de B: ";
    cin >> B;
    A = B;
    B = A1;
    cout << "O valor de A invertido: " << A << endl;
    cout << "O valor de B inverdido: " << B;
}