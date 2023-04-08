#include <iostream>
using namespace std;

int main()
{
    int numMotorista, numCartaMotorista, numMultas, numCartaMaior, numMaisMulta = 0; // Correção aqui
    float valorMulta, divida = 0, totalArrecadado = 0;

    cout << "Digite quantos motoristas tem: " << endl;
    cin >> numMotorista;

    for (int i = 0; i < numMotorista; i++)
    {
        cout << "Digite o numero da sua carteira" << endl;
        cin >> numCartaMotorista;

        cout << "Digite o numero de multas que voce tem: " << endl;
        cin >> numMultas;
        for (int j = 0; j < numMultas; j++)
        {
            cout << "Digite o valor da sua multa: " << endl;
            cin >> valorMulta;

            divida += valorMulta;
        }

        cout << "O valor total de dividas do motorista com a carteira " << numCartaMotorista << " e de " <<
        divida << " reais" << endl;

        totalArrecadado += divida;

        if (numMultas > numMaisMulta)
        {
            numMaisMulta = numMultas;
            numCartaMaior = numCartaMotorista;
        }

        divida = 0;
    }

    cout << "O total arrecadado com as multas foi de R$" << totalArrecadado << " reais" << endl;
    cout << "O numero da carteira do motorista com o maior numero de multas e: " << numCartaMaior;
}
