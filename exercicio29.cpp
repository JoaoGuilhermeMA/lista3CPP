#include <iostream>

using namespace std;

int main()
{
    int numero1, numero2, numero3, ordem;

    do
    {
        cout << "Digite um conjunto de 3 numeros: " << endl;
        cin >> numero1 >> numero2 >> numero3;

        if (numero1 != 0 && numero2 != 0 && numero3 != 0)
        {
            cout << "Digite a ordem desejada " << endl;
            cout << "(1-crescente, 2-decrescente ou 3-aleatorio)." << endl;
            cin >> ordem;
            switch (ordem)
            {
            case 1:
                if (numero1 < numero2 && numero1 < numero3)
                { // numero 1 é o menor
                    if (numero2 < numero3)
                    { // numero 2 é o segundo menor
                        cout << "A ordem e: " << endl;
                        cout << "Numero 1: " << numero1 << " Numero 2: " << numero2 << " Numero 3: " << numero3 << endl;
                    }
                    else
                    { // numero 3 é o segundo menor
                        cout << "A ordem e: " << endl;
                        cout << "Numero 1: " << numero1 << " Numero 3: " << numero3 << " Numero 2: " << numero2 << endl;
                    }
                }
                else if (numero2 < numero1 && numero2 < numero3)
                { // numero 2 é o menor
                    if (numero1 < numero3)
                    { // numero 1 é o segundo menor
                        cout << "A ordem e: " << endl;
                        cout << "Numero 2: " << numero2 << " Numero 1: " << numero1 << " Numero 3: " << numero3 << endl;
                    }
                    else
                    { // numero 3 é o segundo menor
                        cout << "A ordem e: " << endl;
                        cout << "Numero 2: " << numero2 << " Numero 3: " << numero3 << " Numero 1: " << numero1 << endl;
                    }
                }
                else
                { // 3 é menor
                    if (numero1 < numero3)
                    { // numero 1 é o segundo menor
                        cout << "A ordem e: " << endl;
                        cout << "Numero 3: " << numero3 << " Numero 1: " << numero1 << " Numero 2: " << numero2 << endl;
                    }
                    else
                    { // numero 2 é o segundo menor
                        cout << "A ordem e: " << endl;
                        cout << "Numero 3: " << numero3 << " Numero 2: " << numero2 << " Numero 1: " << numero1 << endl;
                    }
                }
                break;
            case 2:
                if (numero1 > numero2 && numero1 > numero3)
                { // numero 1 é o maior
                    if (numero2 > numero3)
                    { // numero 2 é o segundo maior
                        cout << "A ordem e: " << endl;
                        cout << "Numero 1: " << numero1 << " Numero 2: " << numero2 << " Numero 3: " << numero3 << endl;
                    }
                    else
                    { // numero 3 é o segundo maior
                        cout << "A ordem e: " << endl;
                        cout << "Numero 1: " << numero1 << " Numero 3: " << numero3 << " Numero 2: " << numero2 << endl;
                    }
                }
                else if (numero2 > numero1 && numero2 > numero3)
                { // numero 2 é o maior
                    if (numero1 > numero3)
                    { // numero 1 é o segundo maior
                        cout << "A ordem e: " << endl;
                        cout << "Numero 2: " << numero2 << " Numero 1: " << numero1 << " Numero 3: " << numero3 << endl;
                    }
                    else
                    { // numero 3 é o segundo maior
                        cout << "A ordem e: " << endl;
                        cout << "Numero 2: " << numero2 << " Numero 3: " << numero3 << " Numero 1: " << numero1 << endl;
                    }
                }
                else
                { // 3 é maior
                    if (numero1 > numero3)
                    { // numero 1 é o segundo maior
                        cout << "A ordem e: " << endl;
                        cout << "Numero 3: " << numero3 << " Numero 1: " << numero1 << " Numero 2: " << numero2 << endl;
                    }
                    else
                    { // numero 2 é o segundo maior
                        cout << "A ordem e: " << endl;
                        cout << "Numero 3: " << numero3 << " Numero 2: " << numero2 << " Numero 1: " << numero1 << endl;
                    }
                }
                break;
            case 3:
                cout << "Numero 2: " << numero2 << " Numero 1: " << numero1 << "numero3: " << numero3 << endl;

                break;
            default:
                break;
            }
        }

    } while (!(numero1 == numero2 && numero3 == numero1));
}