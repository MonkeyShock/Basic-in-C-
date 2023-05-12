#include <iostream>
using namespace std;

main()
{
    int i = 1, mai = 0, men = 0, v = 0;
    while (i <= 20)
    {
        cout << "Coloque um numero: ";
        cin >> v;
        if (i == 1)
        {
            mai = v;
            men = v;
        }
        if (v > mai)
        {
            mai = v;
        }
        else if (v < men)
        {
            men = v;
        }
        i++;
    }
    cout << "Valor maior: " << mai << ", valor menor: " << men;
}