#include <iostream>
using namespace std;

main()
{
    int bs = 0, ts = 0, rs = 0;
    string b, s;
    do
    {
        cout << "Escolha um tipo de vinho branco, tinto e rose: ";
        cin >> b;
        if (b == "branco")
        {
            bs = bs + 1;
        }
        else if (b == "tinto")
        {
            ts = ts + 1;
        }
        else if (b == "rose")
        {
            rs = rs + 1;
        }
        cout << "Deseja sair? (Sim / Nao): ";
        cin >> s;
    } while (s != "Sim");
    cout << "Valores do vinho branco: " << bs << endl
         << "Valores do vinho tinto: " << ts << endl
         << "Valores do vinho rose: " << rs << endl;
}