#include <iostream>

using namespace std;
/*
Elabore um algoritmo que leia um número inteiro,
calcule e imprima a tabuada
(o número X 1 até o número X 10) desse número até o próximo número que seja múltiplo desse.
Exemplo: se o número digitado for 5,
escreva as tabuadas do 5, 6, 7, 8, 9 e 10 (próximo múltiplo de 5).
*/
int main()
{
    int n, aux;
    bool ehMultiplo = false;

    do
    {
        cout << "Digite um numero inteiro: " << endl;
        cin >> n;
    } while (n < 0);
    aux = n;

    for (int j = 1; j <= 10; j++)
    {
        cout << j << " x " << n << " = " << j * n << endl;
    }

    do
    {
        n++;
        for (int i = 1; i <= 10; i++)
        {
            cout << i << " x " << n << " = " << i * n << endl;
        }

        if (n % aux == 0)
        {
            ehMultiplo = true;
        }

    } while (ehMultiplo == false);
}