#include <iostream>

using namespace std;
/*
Criar um algoritmo que leia o valor de N, imprima a sequência a seguir e o resultado. Caso o valor de N
não seja positivo e menor que 20, o algoritmo deve solicitar que o usuário digite novamente até que esta
condição seja satisfeita.
N! / 0! – (N-1)!/2! + (N-2)!/4! – (N-3)!/6! + ... 0!/(2N)!
*/
int main()
{
    int n, count = 0, fatorialN = 1, fatorialI = 1, j = 1;

    do
    {
        cout << "Digite o valor de n: " << endl;
        cin >> n;
    } while (n < 0 || n > 20);

    cout << "N! / 0! – (N-1)!/2! + (N-2)!/4! – (N-3)!/6! + ... 0!/(2N)!" << endl;
    for (int i = 0; i < n * 2; i += 2) // numero 10
    {
        fatorialN *= j;

        cout << n + count << "! / " << i << "! = " << fatorialN << " / " << fatorialI << endl;
        fatorialI *= i;
        count -= 1;
        j++;
    }
}