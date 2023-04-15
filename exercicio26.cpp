#include <iostream>

using namespace std;

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
