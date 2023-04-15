#include <iostream>

using namespace std;
/*
Após o fatorial, verifique e escreva o próximo número divisível pelo número digitado.
*/
int main()
{
    int num, resultado, contador=1;
    bool divisivel= false;

    cout << "Digite um numero inteiro: " << endl;
    cin >> num;

    resultado = num;
    cout << num << " = " << num << "! = " << num;
    for (int i = 1; i < num; i++)
    {
        resultado *= i;
        cout << " x " << i;
    }

    cout << " = " << resultado  << endl;
    contador += num;
    do
    {
        if (contador % num == 0)
        {
            divisivel = true;
        }
        contador++;
    } while (divisivel != true);

    cout << "O proximo numero divisivel pelo numero digitado e " << contador-1 << endl;
}
