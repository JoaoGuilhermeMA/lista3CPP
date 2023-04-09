#include <iostream>

using namespace std;

int main()
{
    int numero, qntdNumero, resultado;

    cout << "Digite a quantidade de numero a ser digitado: " << endl;
    cin >> qntdNumero;

    for (int i = 0; i < qntdNumero; i++)
    {
        cout << "Digite um numero de 4 algarismos: " << endl;
        cin >> numero;

        resultado = (numero /100) + (numero%100);

        if (resultado * resultado == numero)
        {
            cout << "Positivo" << endl;
        }else{
            cout << "negativo" << endl;
        }

    }
}
