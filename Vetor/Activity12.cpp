#include <iostream>
using namespace std;

int main()
{
    char Gab[30], Res[30];
    int al, val = 0, n;
    for (int i = 0; i < 30; i++)
    {
        cout << "Coloque a altenativa certa: ";
        cin >> Gab[i];
    }
    cout << "Quantidade de alunos: ";
    cin >> al;
    for (int i = 0; i <= al; i++)
    {
        cout << "Coloque o numero do aluno: ";
        cin >> n;
        for (int c = 0; i < 30; c++)
        {
            cout << "Coloque o gabarito do aluno: ";
            cin >> Res[i];
            if (Gab[i] == Res[i])
            {
                val++;
            }
        }
        cout << "Valor da prova, " << val << " ,do aluno: " << n;
        val = 0;
    }
}