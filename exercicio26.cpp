#include <iostream>

using namespace std;
/*
Foi feita uma pesquisa entre os habitantes de uma região e coletados os dados de sexo (m=masculino,
f=feminino) e altura de cada pessoa. Faça um programa que leia os dados de várias pessoas diferentes e
informe:
- A altura da mulher mais baixa; - A média de altura dos homens;
- A média de altura da população.
O algoritmo deve encerrar quando for digitado o valor “X” para altura.
*/
int main()
{
    char sexo, finaliza='S';
    float altura, mulherMaisBaixa=10, mediaHomem, mediaPopulacao, alturaHomem, qntdHomem=0, populacao=1, alturaTotal=0;


    while (finaliza == 's' || finaliza =='S')
    {
        cout << "Digite seu sexo (m - masculino, f - feminino)" << endl;
        cin >> sexo;

        cout << "Digite sua altura: " << endl;
        cin >> altura;

        populacao++;
        if (sexo =='F' || sexo =='f')
        {
            if (altura < mulherMaisBaixa){
                mulherMaisBaixa = altura;
            }
        }else{
            qntdHomem++;
            alturaHomem += altura;
            mediaHomem = alturaHomem/qntdHomem;
        }

        alturaTotal += altura;

        cout << "Deseja conintinuar? " << endl;
        cin >> finaliza;
    }

        mediaPopulacao = alturaTotal / populacao;
        cout << "A altura da mulher mais baixa e " << mulherMaisBaixa << endl;
        cout << "A media de altura dos homens e " << mediaHomem << endl;
        cout << "A media da populucao e " << mediaPopulacao << endl;


}
