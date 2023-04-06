#include <iostream>

using namespace std;

int main()
{
    int A, B, resto, divisao;

    cout << "Digite o valor de A e B: " << endl;
    cin >> A >> B;

    divisao = A / B;
    resto = A - (divisao * B);

    cout << "O resto da divisao de A por B e: " << resto << endl;


}
