#include <iostream>

using namespace std;
/*
Elabore um algoritmo que leia um conjunto de 5 números e
escreva a mediana (número do meio) e a
moda (número que mais se repete) do conjunto lido.
*/
int main()
{
    int n, maior1 = 0, maior2 = 0, maior3 = 0, maior4 = 0, maior5 = 0, auxilar;
    int qntdRepete1 = 0, qntdRepete2 = 0, qntdRepete3 = 0, qntdRepete4 = 0, qntdRepete5 = 0, moda = 0;

    for (int i = 0; i < 5; i++)
    {
        cout << "Digite um conjunto de 5 numeros" << endl;
        cin >> n;

        if (n > maior1)
        {
            auxilar = maior1;
            maior1 = n;
            maior5 = maior4;
            maior4 = maior3;
            maior3 = maior2;
            maior2 = auxilar;
        }
        else
        {
            if (n > maior2)
            {
                auxilar = maior2;
                maior2 = n;
                maior5 = maior4;
                maior4 = maior3;
                maior3 = auxilar;
            }
            else
            {
                if (n > maior3)
                {
                    auxilar = maior3;
                    maior3 = n;
                    maior5 = maior4;
                    maior4 = auxilar;
                }
                else
                {
                    if (n > maior4)
                    {
                        auxilar = maior4;
                        maior4 = n;
                        maior5 = auxilar;
                    }
                    else
                    {
                        if (n > maior5)
                        {
                            maior5 = n;
                        }
                    }
                }
            }
        }
    }

    if (maior1 == maior2 || maior1 == maior3 || maior1 == maior4 || maior1 == maior5)
    {
        if (maior1 == maior2)
        {
            qntdRepete1++;
            qntdRepete2++;
        }
        if (maior1 == maior3)
        {
            qntdRepete1++;
            qntdRepete3++;
        }
        if (maior1 == maior4)
        {
            qntdRepete1++;
            qntdRepete4++;
        }
        if (maior1 == maior5)
        {
            qntdRepete1++;
            qntdRepete5++;
        }
    }
    if (maior2 == maior3 || maior2 == maior4 || maior2 == maior5)
    {
        if (maior2 == maior3)
        {
            qntdRepete2++;
            qntdRepete3++;
        }
        if (maior2 == maior4)
        {
            qntdRepete2++;
            qntdRepete4++;
        }
        if (maior1 == maior5)
        {
            qntdRepete2++;
            qntdRepete5++;
        }
    }
    if (maior3 == maior4 || maior3 == maior5)
    {
        if (maior3 == maior4)
        {
            qntdRepete3++;
            qntdRepete4++;
        }
        if (maior3 == maior5)
        {
            qntdRepete3++;
            qntdRepete5++;
        }
    }
    if (maior4 == maior5)
    {
        qntdRepete4++;
        qntdRepete5++;
    }

    if (qntdRepete1 > qntdRepete2 || qntdRepete1 > qntdRepete3 || qntdRepete1 > qntdRepete4 || qntdRepete1 > qntdRepete5)
    {
        moda = maior1;
    }
    else
    {
        if (qntdRepete2 > qntdRepete3 || qntdRepete2 > qntdRepete4 || qntdRepete2 > qntdRepete5)
        {
            moda = maior2;
        }
        else
        {
            if (qntdRepete3 > qntdRepete4 || qntdRepete3 > qntdRepete5)
            {
                moda = maior3;
            }
            else
            {
                if (qntdRepete4 > qntdRepete5)
                {
                    moda = maior4;
                }
                else
                {
                    if (qntdRepete5 > qntdRepete1)
                    {
                        moda = maior5;
                    }
                }
            }
        }
    }

    cout << "A mediana e " << maior3 << endl;
    cout << "A moda e " << moda << endl;
}
