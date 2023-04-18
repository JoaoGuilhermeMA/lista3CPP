#include <iostream>

using namespace std;
/*
Elabore um algoritmo que calcule o número de dias decorridos entre duas datas lidas. Cada data é
formada por três valores: dia, mês e ano.
Considerar meses de 28, 29, 30 e 31 dias e
a ocorrência de anos bissextos (sabe-se que um ano é bissexto quando é divisível por 4 e não é divisível por 100, ou quando é divisível por 400).
Se for digitada uma data inválida, o algoritmo deverá mostrar a mensagem “Erro, data
inválida” e solicitar que o usuário digite novamente até que a data seja válida.
*/
int main()
{
    int dia1, mes1 = 31, ano1, dia2, mes2 = 31, ano2, diasMes, dias = 0;
    bool ehBissexto1, ehBissexto2;

    do
    {
        cout << "Digite a primeira data (DD MM AAAA): ";
        cin >> dia1 >> mes1 >> ano1;
    } while (dia1 < 1 || dia1 > 31 || mes1 < 1 || mes1 > 12 || ano1 < 1);

    do
    {
        cout << "Digite a segunda data (DD MM AAAA): ";
        cin >> dia2 >> mes2 >> ano2;
    } while (dia2 < 1 || dia2 > 31 || mes2 < 1 || mes2 > 12 || ano2 < 1);

    while (dia1 != dia2 || mes1 != mes2 || ano1 != ano2)
    {
        dias++;

        if ((ano1 % 4 == 0) && (ano1 % 100 != 0) || (ano1 % 400 == 0))
        {
            ehBissexto1 = true;
        }

        if (((ano2 % 4 == 0) && (ano2 % 100 != 0)) || (ano2 % 400 == 0))
        {
            ehBissexto2 = true;
        }

        switch (mes1)
        {
        case 2:
            if (ehBissexto1)
            {
                diasMes = 29;
            }
            else
            {
                diasMes = 28;
            }
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            diasMes = 30;
            break;
        default:
            break;
        }

        switch (mes2)
        {
        case 2:
            if (ehBissexto2)
            {
                diasMes = 29;
            }
            else
            {
                diasMes = 28;
            }
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            diasMes = 30;
            break;
        default:
            break;
        }

        if (dia1 < diasMes)
        {
            dia1++;
        }
        else
        {
            dia1 = 1;

            if (mes1 < 12)
            {
                mes1++;
            }
            else
            {
                mes1 = 1;
                ano1++;
            }
        }
    }

    cout << "Dias decorridos: " << dias << endl;
}