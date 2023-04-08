#include <iostream>

using namespace std;

int main()
{
    int mes, diaSemana, qntdDia = 31, cont = 1;

    cout << "Digite o numero do mes: " << endl;
    cout << "Janeiro(1)| fevereiro(2)| marco(3)| abril(4)| maio(5)| junho(6)" << endl;
    cout << "julho(7)| agosto(8)| setembro(9)| outubro(10)| novembro(11)| dezembro(12)" << endl;
    cin >> mes;

    cout << "Digite qual dia da semana o mes comeca" << endl;
    cin >> diaSemana;
    switch (mes)
    {
    case 2:
        qntdDia = 28;
        break;
    case 4:
        qntdDia = 30;
        break;
    case 6:
        qntdDia = 30;
        break;
    case 9:
        qntdDia = 30;
        break;
    case 11:
        qntdDia = 30;
        break;
    default:
        break;
    }

    cout << "Dom " << "Seg " << "Ter " << "Qua " << "Qui " << "Sex " << "Sab " << endl;

    for (int j = 1; j != diaSemana; j++) // coloca os espaços em branco antes da semana começar
    {
        cout << "   ";
        cout << " ";
    }

    for (int i = 1; cont <= qntdDia; i++)
    {
        if (i >= diaSemana)
        {

            if (cont <= 9) // forma de desenhar se o numero tiver 1 digito
            {
                cout << "  " << cont++ << " ";
            }
            else // forma de desenhar se o numero tiver 2 digitos
            {
                cout << " " << cont++ << " ";
            }
        }

        if (i  % 7 == 0) // quebra a linha se chegar ao final da semana
        {
            cout << endl;
        }
    }
}
