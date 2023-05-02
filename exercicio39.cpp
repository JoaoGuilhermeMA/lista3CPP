#include <iostream>
using namespace std;

int main() {
  int n1, n2, cont2, cont = 1, somaPar = 0, somaImpar = 0;

  do {
    cout << "Digite 2 numeros" << endl;
    cin >> n1 >> n2;
  } while (n1 > n2);

  cont2 = n1;
  cont = n1 + 1;
  while (cont < n2) {
    if (cont % 2 == 0) {
      somaPar += cont;
    } else {
      somaImpar += 1;
    }
    cont++;
  }

  cout << "A soma dos numeros pares e " << somaPar << endl;
  cout << "A soma dos menores divisores dos numeos impar e " << somaImpar
       << endl;
}
