#include <iostream>

using namespace std;
/*
Dado um número n inteiro e positivo, dizemos que n é perfeito se n for igual à soma de seus divisores
positivos diferentes de n. Construa um programa em C que verifica se um dado número é perfeito. Ex: 6
é perfeito, pois 1+2+3 = 6.
*/
int main()
{
    int n, numeroPerfeito = 0;
    cout << "Digite um numero inteiro e positivo: " << endl;
    cin >> n;
    if (n <= 0)
    {
        while (n <= 0)
        {
            cout << "Numero invalido!!" << endl << endl;
            cout << "Digite um numero inteiro e positivo: " << endl;
            cin >> n;
        }

    }

    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            numeroPerfeito += i;
        }
    }

    if(numeroPerfeito == n) cout << "E um numero perfeito!" << endl;
    else cout << "nao e um numero perfeito!" << endl;

}
