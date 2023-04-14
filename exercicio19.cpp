#include<iostream>

using namespace std;

int main()
{
    int count=0, resultado, liberar;

    for (int i = 100; i <= 999; i++)
    {
        resultado = (i/100) * ((i%100)/10) * (i%10);
        cout << "---------------" << endl;
        cout << i << " = " << resultado << endl;

        count++;
        if(count==20){
            cout << "digite um numero qualquer para prosseguir: " << endl;
            cin >> liberar;
            count=0;
        }
        resultado = 0;
    }

}
