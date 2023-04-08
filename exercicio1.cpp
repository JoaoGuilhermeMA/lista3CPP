#include<iostream>
using namespace std;

int main()
{
    int codigo, codigoMaisVelho, idade, idadeMaisNova, idadeMaisVelha;

    cout << "Digite o codigo e a idade de 100 pessoas: " << endl;
    cin >> codigo >> idade;

    codigoMaisVelho = codigo;
    idadeMaisNova = idade;
    idadeMaisVelha = idade;

    for (int i = 1; i < 100; i++) {
        cout << "Digite o codigo e a idade da pessoa " << i << endl;
        cin >> codigo >> idade;
        if (idade < idadeMaisNova) {
            idadeMaisNova = idade;
        }

        if (idade > idadeMaisVelha){
            idadeMaisVelha = idade;
            codigoMaisVelho = codigo;
        }
    }

    cout << "O codigo da pessoa mais velha e " << codigoMaisVelho << endl;
    cout << "A idade da pessoa mais nova e " << idadeMaisNova << endl;
}
