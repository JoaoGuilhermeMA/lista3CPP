#include <iostream>

using namespace std;

int main()
{
    int a, b, resto;

    cout << "Digite o valor de a e b: " << endl;
    cin >> a >> b;

    resto = a - ((a/b) * b);

    cout << "opcao 1: " << resto << endl;
    cout << "opcao 2: " << a%b << endl;


}
