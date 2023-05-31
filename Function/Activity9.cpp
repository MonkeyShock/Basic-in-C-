// SP / SR

#include <iostream>
using namespace std;

void med()
{
    int vp, vs, vt, res;
    char x;
    cout << "Coloque as nota 1: ";
    cin >> vp;
    cout << "Coloque as nota 2: ";
    cin >> vs;
    cout << "Coloque as nota 3: ";
    cin >> vt;
    cout << "Escolha um funcao: (A = aritimetica | P = ponderada): ";
    cin >> x;

    if (x = 'A')
    {
        res = ((vp + vs + vt) / 3);
        cout << "A media aritimetica e: " << res;
    }
    else if (x = 'P')
    {
        res = ((vp + vs + vt) / (5 + 3 + 2));
        cout << "A media poderada e: " << res;
    }
}

int main()
{
    med();
}