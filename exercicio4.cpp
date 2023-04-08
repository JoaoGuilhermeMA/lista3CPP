#include <iostream>

using namespace std;

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
