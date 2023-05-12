#include <iostream>
using namespace std;

main()
{
    int i = 1, mai = 0, men = 0, p = 0;
    while (i <= 50)
    {
        cout << "Altura: ";
        cin >> p;
        if (i == 1)
        {
            mai = p;
            men = p;
        }

        if (p > mai)
        {
            mai = p;
        }
        else if (p < men)
        {
            men = p;
        }
        i++;
    }
    cout << "Altura maior: " << mai << endl
         << "Altura menor: " << men;
}