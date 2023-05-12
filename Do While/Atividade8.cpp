#include <iostream>
using namespace std;

main()
{
    int i = 1;
    float c = 0, v = 0;
    do
    {
        cout << "Coloque o peso da caixa: ";
        cin >> c;
        i++;
        v = v + c;
    } while (i <= 25);
    cout << "O peso total e de: " << v;
}