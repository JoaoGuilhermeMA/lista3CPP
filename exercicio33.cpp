#include <iostream>

using namespace std;
/*
Seja a seguinte série:
1, 4, 4, 2, 5, 5, 3, 6, 6, 4, 7, 7, ...
Elabore um algoritmo que seja capaz de escrever os N termos dessa série.
Esse número N deve ser lido do teclado.
*/
int main()
{
    int n, cont = 8;

    cout << "Digite o quantos termos dessa serie deve aparecer: " << endl;
    cout << "1, 4, 4, 2, 5, 5, 3, 6, 6, 4, 7, 7, ..." << endl;
    cin >> n;

    cout << "1, 4, 4, 2, 5, 5, 3, 6, 6, 4, 7, 7";
    for (int i = 5; i < n + 5; i++)
    {
        cout << ", " << i << ", " << cont << ", " << cont;
        cont++;
    }
    cout << endl;
}
