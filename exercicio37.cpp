#include <iostream>

using namespace std;
/*
Elabore um algoritmo que leia vários números reais e
escreva, para cada um, o valor arredondado a partir do arredondamento pertinente.
Considere que:
o arredondamento deve ser feito para mais (próximointeiro) se a parte decimal do número for maior que 0,5;
o arredondamento deve ser feito para menos (inteiro anterior) se a parte decimal do número for menor que 0,5;
caso a parte decimal seja = 0,5,
deve ser perguntado ao usuário se ele deseja arredondar para mais ou para menos e,
após a resposta, deve ser feito o arredondamento solicitado.
O algoritmo deve parar quando for digitado 0.
*/
int main()
{
    float n, decimal, inteiro;
    char escolha;

    do
    {
        cout << "Digite um numero real, -> 0 para sair!" << endl;
        cin >> n;

        decimal = n;
        while (decimal >= 1)
        {
            decimal -= 1;
        }

        if (decimal > 0.5)
        {
            inteiro = n - decimal + 1;
        }
        else if (decimal < 0.5)
        {
            inteiro = n - decimal - 1;
        }
        else
        {
            cout << "Deseja arredondar para cima(c) ou para baixo(b)? " << endl;
            cin >> escolha;

            if (escolha == 'C' || escolha == 'c')
            {
                inteiro = n - decimal + 1;
            }
            else if (escolha == 'B' || escolha == 'B')
            {
                inteiro = n - decimal - 1;
            }
        }

        cout << "O numero digitado foi " << n << endl;
        cout << "Ele arrendodado e " << inteiro << endl;
    } while (n != 0);

    cout << decimal << endl;
}