#include <iostream>
using namespace std;

main()
{
    int A = 0, B = 0, val = 0, valp = 0;
    cout << "Coloque o valor de A: ";
    cin >> A;
    cout << "Coloque o valor da potencia B: ";
    cin >> B;
    for (int i = 1; i <= B; i++)
    {
        valp = (A * B);
        val = (A * B) + valp;
    }
    cout << "Valor da potencia: " << val;
}
