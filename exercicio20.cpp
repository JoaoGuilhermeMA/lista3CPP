#include<iostream>

using namespace std;
/*
Elabore um algoritmo leia várias vezes dois números inteiros quaisquer, multiplique-os sem utilizar a
operação de multiplicação e escreva o resultado. O algoritmo deve parar quando os dois números
digitados forem um positivo e o outro negativo (não necessariamente nesta ordem). Por exemplo: 4 * 2
= 4 + 4.
*/
int main()
{
    int num1, num2, soma;

    do
    {
        cout << "Digite um numero: " << endl;
        cin >> num1;
        cout << "Digite outro numero: " << endl;
        cin >> num2;
        for (int i = 0; i < num2; i++)
        {
            soma += num1;
        }
        cout << "O resultado e " << soma << endl;
        soma =0;
    } while (num1 >= 0 && num2 >= 0);

}
