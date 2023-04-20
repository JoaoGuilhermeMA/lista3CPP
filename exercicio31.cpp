#include <iostream>

using namespace std;
/*
Escreva um algoritmo leia dois números, A e B, verifique e escreva se são primos entre si. Considere que
dois números inteiros são ditos primos entre si se não existir divisor comum aos dois números. Caso não
sejam digitados valores positivos, o algoritmo deve solicitar que o usuário digite novamente até que esta
condição seja satisfeita.
*/
int main()
{
    int A, B, num, i = 2;
    bool ehPrimo = false;

    while (ehPrimo == false)
    {
        do
        {
            cout << "Digite 2 numeros: " << endl;
            cin >> A >> B;
        } while (A < 0 || B < 0);

        if (A < B)
        {
            num = A;
        }
        else
        {
            num = B;
        }

        i = 2;
        ehPrimo = true;
        while (ehPrimo && i <= num)
        {
            if (A % i == 0 && B % i == 0)
            {
                ehPrimo = false;
            }
            i++;
        }

        if (ehPrimo)
        {
            cout << "O numero " << A << " e o numero " << B << " sao primos entre si" << endl;
        }
        else
        {
            cout << "O numero " << A << " e o numero " << B << " nao sao primos entre si" << endl;
        }
    }
}