#include <iostream>
using namespace std;

int main()
{
    int h, mai, men;
    for (int i = 0; i < 3; i++)
    {
        cout << "Altura do jogador: ";
        cin >> h;

        if (i == 0)
        {
            mai = h;
            men = mai;
        }

        if (h > mai)
        {
            mai = h;
        }
        else if (h < men)
        {
            men = h;
        }
    }
    cout << "Altura menor: " << men << endl;
    cout << "Altura maior: " << mai;
}
