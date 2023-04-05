#include <iostream>

using namespace std;

int main()
{
    float num = 0, resultado = 0;
    char operacao = ' ';
    bool inicio = 1;

    while (operacao != '=')
    {
        cout << "Digite o numero" << endl;
        cin >> num;

        if (inicio)
        {
            resultado = num;
        }
        else
        {
            if (operacao == '+')
            {
                resultado += num;
            }
            else if (operacao == '-')
            {
                resultado -= num;
            }
            else if (operacao == '*')
            {
                resultado *= num;
            }
            else if (operacao == '/')
            {
                resultado /= num;
            }
        }
        inicio = 0;

        cout << "Digite a operacao que voce quer fazer: " << endl;
        cin >> operacao;
    }

    cout << "Resultado e: " << resultado << endl;
}
