#include <iostream>

using namespace std;

int main()
{
    int numero, qntd, numeroDecimal=0, potencia=1;
    cout << "Quantos numeros voce desejar digitar? " << endl;
    cin >> qntd;

    for (int i = 0; i < qntd; i++)
    {
        cout << "Digite um numero: " << endl;
        cin >> numero;
        numeroDecimal += numero * potencia;
        potencia *= 10;
    }
    cout << "O numero e: " << numeroDecimal << endl;

}
