#include <iostream>
using namespace std;

int main()
{
    float v = 0, c, l, ct = 0, lt = 0;
    char s;
    do
    {

        cout << "Coloque o valor do comprimento: ";
        cin >> c;
        cout << "Coloque o valor da largura:";
        cin >> l;
        ct = c + ct;
        lt = l + lt;
        cout << "Deseja continuar (S|N): ";
        cin >> s;
    } while (s != 'n');
    v = ct * lt;
    cout << "O valor e da area da sua casa e de: " << v;
    return 0;
}
