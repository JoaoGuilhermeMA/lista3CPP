#include <iostream>
using namespace std;

int main()
{
    int idade;
    float precoEntrada, totalArrecadado=0, totalDesconto=0;

    do
    {
        cout << "Digite o preco da entrada sem desconto: " << endl;
        cin >> precoEntrada;

        cout << "Digite sua idade: " << endl;
        cin >> idade;

        if (idade < 6)
        {
            precoEntrada = 0;
        }
        else
        {
            if (idade >= 6 && idade <= 12)
            {
                precoEntrada *= 0.3;
                totalDesconto += 0.3;
            }
            else
            {
                if ((idade >= 13 && idade <= 18) || (idade > 60))
                {
                    precoEntrada *= 0.5;
                    totalDesconto += 0.5;
                }
            }
        }
        cout << "Voce tera que pagar " << precoEntrada << endl;
        totalArrecadado += precoEntrada;
        totalDesconto *= 100;

    } while (idade > 0);
}
