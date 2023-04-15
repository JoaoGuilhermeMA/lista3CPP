#include <iostream>

using namespace std;

int main()
{
    int numero, copia, reverso=0;

    do
    {
        cout << "Digite um numero: " << endl;
        cin >> numero;
    } while (numero < 0);

    copia = numero;
     while (copia != 0) {//101
      reverso = reverso * 10 + copia % 10;
      copia /= 10;
   }

    if (numero == reverso)
      cout << " eh capicua" << endl;
   else
      cout << " nao e capicua" << endl;
}
