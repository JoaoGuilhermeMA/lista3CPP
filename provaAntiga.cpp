#include <iostream>

using namespace std;

int main()
{

    int opcao, dia, diaMa, mes, mesMa, ano, anoMa;
    int horas1, horas2, minutos1, minutos2, segundos1, segundos2, tempoTotal1, tempoTotal2;
    int numero;
    int n, codigo, senha;
    int qntdFilhos;
    float dinheiroAuxilio = 0, totalRecebido = 0;
    char genero;
    bool direitoAuxilio = false;
    char resposta2;
    bool inicio1 = true;

    do
    {
        cout << "------------------------------------------------" << endl;
        cout << "\t\t\t\t\tMenu Principal" << endl;
        cout << "1 - MAIOR" << endl;
        cout << "2 - SIM ou NAO" << endl;
        cout << "3 - TEMPO" << endl;
        cout << "4 - validar" << endl;
        cout << "5 - calcular" << endl;
        cout << "6 - SAIR" << endl;
        cout << "------------------------------------------------" << endl;
        cin >> opcao;

        switch (opcao)
        {
        case 1:
            do
            {
                do
                {
                    cout << "Digite o dia" << endl;
                    cin >> dia;
                } while (dia > 31);
                do
                {
                    cout << "Digite o mes" << endl;
                    cin >> mes;
                } while (mes > 12);
                cout << "Digite o ano" << endl;
                cin >> ano;

                if (inicio1)
                {
                    diaMa = dia;
                    mesMa = mes;
                    anoMa = ano;
                    inicio1 = false;
                }
                else
                {
                    if (ano > anoMa)
                    { // verifica se o ano é maior
                        cout << "A data " << dia << "/" << mes << "/" << ano
                             << " e maior que " << diaMa << "/" << mesMa << "/" << anoMa
                             << endl;
                        anoMa = ano;
                    }
                    else if (ano == anoMa)
                    { // verifica se o ano é igual
                        if (mes > mesMa)
                        { // verifica se o mes é maior
                            cout << "A data " << dia << "/" << mes << "/" << ano
                                 << " e maior que " << diaMa << "/" << mesMa << "/" << anoMa
                                 << endl;
                            mesMa = mes;
                        }
                        else if (mes == mesMa)
                        {
                            if (dia > diaMa)
                            {
                                cout << "A data " << dia << "/" << mes << "/" << ano
                                     << " e maior que " << diaMa << "/" << mesMa << "/" << anoMa
                                     << endl;
                                diaMa = dia;
                            }
                            else if (dia == diaMa)
                            {
                                cout << "As datas sao iguais!" << endl;
                            }
                        }
                    }
                }
            } while (dia >= 0 && mes >= 0 && ano >= 0);
            break;
        case 2:
            do
            {
                cout << "Digite o numero" << endl;
                cin >> numero;

                if ((numero % 2 == 0 && numero > 10) || (numero % 3 == 0 && numero > 50))
                {
                    cout << "SIM!" << endl;
                }
                else
                {
                    cout << "NAO!" << endl;
                }
                cout << "Deseja continuar? " << endl;
                cin >> resposta2;
            } while (resposta2 != 's' && resposta2 != 'S');
            break;
        case 3:
            cout << "Digite o tempo que o atleta 1 levou para correr o percurso: HORAS/MINUTOS/SEGUNDOS" << endl;
            cin >> horas1 >> minutos1 >> segundos1;
            cout << "Digite o tempo que o atleta 2 levou para correr o percurso: HORAS/MINUTOS/SEGUNDOS" << endl;
            cin >> horas2 >> minutos2 >> segundos2;
            tempoTotal1 = (horas1 * 3600) + (minutos1 * 60) + (segundos1);
            tempoTotal2 = (horas2 * 3600) + (minutos2 * 60) + (segundos2);

            if (tempoTotal1 != tempoTotal2)
            {
                cout << "O atleta mais lento foi o ";
                if (tempoTotal1 > tempoTotal2)
                {
                    cout << "Atleta 1" << endl;
                }
                else if (tempoTotal1 < tempoTotal2)
                {
                    cout << "Atleta 2" << endl;
                }
            }
            else
            {
                cout << "Foi empate" << endl;
            }
            break;
        case 4:
            cout << "Digite o valor de n" << endl;
            cin >> n;

            for (int i = 0; i < n; i++)
            {
                cout << "Digite o codigo do usuario" << endl;
                cin >> codigo;
                if (codigo != 1234)
                {
                    cout << "Usuario invalido" << endl;
                }
                else
                {
                    cout << "Digite a senha" << endl;
                    cin >> senha;
                    if (senha == 9999)
                    {
                        cout << "Acesso permitido" << endl;
                    }
                    else
                    {
                        cout << "Senha incorreta" << endl;
                    }
                }
            }
            break;
        case 5:
            do
            {
                cout << "Digite a quantidade de filhos: " << endl;
                cin >> qntdFilhos;
            } while (qntdFilhos < 0);
            do
            {
                cout << "Digite seu genero (m - masculino, f - feminino): " << endl;
                cin >> genero;
            } while (genero != 'm' && genero != 'f');
            if (qntdFilhos > 0 && genero == 'f')
            {
                cout << "Tem direito ao auxlio creche" << endl;
                dinheiroAuxilio = 25.50;
                switch (qntdFilhos)
                {
                case 3:
                    totalRecebido += dinheiroAuxilio;
                case 2:
                    totalRecebido += dinheiroAuxilio;
                case 1:
                    totalRecebido += dinheiroAuxilio;
                    break;
                default:
                    dinheiroAuxilio = 40.50;
                    totalRecebido += (dinheiroAuxilio) * (qntdFilhos);
                    break;
                }
            }
            cout << "Vai receber " << totalRecebido << " reais de auxilio creche" << endl;
            totalRecebido = 0;
            break;
        case 6:
            cout << "Fim de programa" << endl;
            break;
        default:
            cout << "Numero invalido " << endl;
            break;
        }
    } while (opcao != 6);
}