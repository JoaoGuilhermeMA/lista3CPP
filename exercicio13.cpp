#include <iostream>

using namespace std;

int main()
{

    int numero, contador, proximoQuadrangular;
    bool ehQuadrangular;
    cout << "Digite um numero inteiro qualquer: ";
    cin >> numero;

    for (int i = 0; i <= numero; i++)
    {
        if (numero == i * i)
        {
            ehQuadrangular = 1;
            contador = i;
            break;
        }else{
            ehQuadrangular = 0;
        }

    }


    if (ehQuadrangular)
    {
        cout << "E um numero quadrangular" << endl;
        cout << "O numero eh " << numero << endl;
        cout << "Os proximos 10 numeros sao: " << endl;
        for (int j = 0; j < 10; j++)
        {
            contador++;
            proximoQuadrangular = contador * contador;
            cout << proximoQuadrangular << " ";
        }
        cout << endl;
    }else{
        cout << "Nao e um numero quadrangular" << endl;
    }



}
