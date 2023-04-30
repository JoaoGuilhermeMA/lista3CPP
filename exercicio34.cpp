#include <iostream>

using namespace std;
/*
Elabore um algoritmo que leia N números inteiros,
calcule e escreva a soma dos números primos no conjunto digitado.
O valor de N deve ser digitado pelo usuário.
*/
int main()
{
    int qntdN, n, soma = 0, cont = 1;
    bool ehPrimo;

    cout << "Quantos numero voce deseja digitar? " << endl;
    cin >> qntdN;

    for (int i = 0; i < qntdN; i++)
    {
        cout << "Digite um numero: " << endl;
        cin >> n;

        ehPrimo = true;
        if (n < 2)
        {
            ehPrimo = false;
        }
        else
        {
            for (int j = 2; j < n; j++)
            {
                if (n % j == 0)
                    ehPrimo = false;
            }
        }

        if (ehPrimo)
        {
            soma += n;
        }
    }

    cout << "A soma de todos o numeros primos e: " << soma << endl;
}