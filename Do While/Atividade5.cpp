#include <iostream>
using namespace std;

main()
{
    int i = 0, al, alm, altn;
    do
    {
        cout << "Coloque a altura: ";
        cin >> al;
        if (i == 0)
        {
            alm = al;
            altn = al;
        }
        else if (al > alm)
        {
            alm = al;
        }
        else if (al < altn)
        {
            altn = al;
        }
        i++;
    } while (i <= 5);
    cout << "Maior pessoa: " << alm << endl
         << "Menor pessoa: " << altn;
}
