#include <iostream>
using namespace std;

int main() {
    int n, cont = 0, num = 12;
     bool primo;
    cout << "Digite a quantidade de numero depois do 11 ";
    cin >> n;

    while (cont < n) {
        primo = true;
        for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0) { // verifica se nao e primo
                primo = false;
                break;
            }
        }
        if (primo) cont++;
        num++;
    }

    cout << "O numero " << num-1 << " e o " << n << " numero primo maior que onze!" << endl;
}
