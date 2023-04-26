#include <iostream>
using namespace std;

int main()
{
    int n, mai, men;
    for (int i = 0; i < 6; i++)
    {
        cout << "Coloque um numero: ";
        cin >> n;
        if (i == 1)
        {
            mai = n;
            men = n;
        }

        if (n > mai)
        {
            mai = n;
        }
        else if (n < mai)
        {
            men = n;
        }
    }
    cout << "Valor menor: " << men << endl
         << "Valor maior: " << mai;
}