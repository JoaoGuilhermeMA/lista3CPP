#include <iostream>

using namespace std;

int main()
{
    int numCasa, valorCasa=1; //64 casas || a cada casa dobra o valor

    cout << "Digite o numero da casa desejada: " << endl;
    cin >> numCasa;

    for (int i = 1; i <= numCasa; i++)
    {
        valorCasa *= 2;
    }

    cout << "A rainha devera pagar ao monge " << valorCasa << " graos de trigo" << endl;
}
