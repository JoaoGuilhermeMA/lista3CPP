#include <iostream>

using namespace std;
int main()
{
    int num;

    cout << "Digite um numero qualquer: " << endl;
    cin >> num;

    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            cout << "O numero: " << i << " e um divisor!" << endl;
        }

    }

}
