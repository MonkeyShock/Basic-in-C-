// CP / SR

#include <iostream>
using namespace std;

void med(int vmp, int vms, int vmt, char xm)
{
    float res = 0;

    if (xm = 'A')
    {
        res = ((vmp + vms + vmt) / 3);
        cout << "O valor da media aritimetica e de: " << res;
    }

    else if (xm = 'P')
    {
        res = ((vmp + vms + vmt) / (5 + 3 + 2));
        cout << "O valor da media ponderada e de: " << res;
    }
}

int main()
{
    int vp, vs, vt;
    char x;
    cout << "Coloque as nota 1: ";
    cin >> vp;
    cout << "Coloque as nota 2: ";
    cin >> vs;
    cout << "Coloque as nota 3: ";
    cin >> vt;
    cout << "Escolha um funcao: (A = aritimetica | P = ponderada): ";
    cin >> x;

    med(vp, vs, vt, x);
}
