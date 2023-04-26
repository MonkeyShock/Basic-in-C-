#include <iostream>
#include <locale>
using namespace std;

main()
{
    // Para selecionar o idioma portugues.
    setlocale(LC_ALL, "portuguese");
    // num numero, prec preço, val valor
    float num;
    float prec, val;
    cout << "Escolha sua opção de pagamento" << endl;
    cout << "Coloque o preco do produto: ";
    cin >> prec;
    cout << "Coloque a opção de 1 a 4: ";
    cin >> num;
    if (num == 1)
    {
        val = prec - (prec * 0.1);
        cout << "A vista ou em cheque, "
             << "o valor deu: " << val;
    }
    else if (num == 2)
    {
        val = prec - (prec * 0.05);
        cout << "Com a segunda opção, a vista e no cartão de credito, o valor e de: " << val;
    }
    else if (num == 3)
    {
        val = prec / 2;
        cout << "Com a terceira opção, de 2 vezes, o valor e de: " << val;
    }
    else if (num == 4)
    {
        val = (prec / 3) + (prec * 0.1);
        cout << "Com ultima opção, de 3 vezes com 10% de juros deu: " << val;
    }
    else
    {
        cout << "Numero invalido, por favor tente novamente !";
    }
}