#include <iostream>
using namespace std;

int main() {
  int num1, num2, potencia=1;
  char resposta='s';

  do {
    cout << "Digite dois numeros: " << endl;
    cin >> num1 >> num2;

    for (int i = 0; i < num2; i++) {//2^3
      potencia *= num1;
    }
    if(num1 < 0){num1 *=-1;}
    if(num2 < 0){num2 *=-1;}
    cout << "A pontencia e " << potencia << endl;
    cout << "A soma dos modulos e " << num1+num2 << endl;
  } while (resposta == 's' || resposta == 's');
}
