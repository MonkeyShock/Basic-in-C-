#include <iostream>
using namespace std;

main()
{
    int imp, cp;
    float val, prec, tot;
    cout << "Calculo do Produto Especificado" << endl;
    cout << "Coloque o peso do produto: ";
    cin >> prec;
    cout << "Coloque a origem do pais: ";
    cin >> imp;
    cout << "Codigo do produto: ";
    cin >> cp;
    if (imp == 0)
    {
        val = prec;
    }
    else if (imp == 2)
    {
        val = prec + (prec * 0.15);
    }
    else
    {
        val = prec + (prec * 0.25);
    }

    // Preso do porduto

    if (cp == 1 && cp <= 4)
    {
        prec = prec * 1000;
        tot = prec * 10;
        cout << "O valor é de: " << tot;
    }
    else if (cp == 5 && cp <= 7)
    {
        prec = prec * 1000;
        tot = prec * 25;
        cout << "O valor é de: " << tot;
    }
    else if (cp == 8 && cp <= 10)
    {
        prec = prec * 1000;
        tot = prec * 35;
        cout << "O valor é de: " << tot;
    }
    else
    {
        cout << "Numero Invalído";
    }
}