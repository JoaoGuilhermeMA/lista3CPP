#include <iostream>

using namespace std;

int main()
{
    int n, tentativas = 0, numeroSecreto = 57;
    bool ganhou = 0;

    while (tentativas < 3 || ganhou)
    {
        cout << "Digite um numero: " << endl;
        cin >> n;

        if (n == numeroSecreto)
        {
            ganhou = 1;
            break;
        }

        if (n > numeroSecreto)
        {
            cout << "O numero secreto e menor" << endl;
        }
        else
        {
            cout << "O numero secreto e maior" << endl;
        }
        tentativas++;
    }

    if (ganhou)
    {
        cout << "Voce ganhou " << endl;
    }
    else
    {
        cout << "Voce perdeu " << endl;
    }
}
