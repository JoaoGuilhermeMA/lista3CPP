#include <iostream>

using namespace std;

int main()
{
    int alunos, erros = 0, acertos = 0, totalAcertos = 0;
    float mediaTurma;
    char q1, q2, q3, q4, q5, q6, q7, q8, q9, q10, resposta;

    cout << "Digite o gabarito da prova na ordem crescente (questao 1 ate questao 10): " << endl;
    cin >> q1 >> q2 >> q3 >> q4 >> q5 >> q6 >> q7 >> q8 >> q9 >> q10;

    cout << "Digite a quantidade de alunos: " << endl;
    cin >> alunos;

    for (int i = 1; i <= alunos; i++){
        for (int j = 1; j <= 10; j++)
        {
            cout << "Digite o gabarito da questao " << j << " aluno " << i << endl;
            cin >> resposta;

            switch (j){
            case 1:
                if (resposta == q1){acertos++;}
                else{erros++;}
                break;
            case 2:
                if (resposta == q2){acertos++;}
                else{erros++;}
                break;
            case 3:
                if (resposta == q3){acertos++;}
                else{erros++;}
                break;
            case 4:
                if (resposta == q4){acertos++;}
                else{erros++;}
                break;
            case 5:
                if (resposta == q5){acertos++;}
                else{erros++;}
                break;
            case 6:
                if (resposta == q6){acertos++;}
                else{erros++;}
                break;
            case 7:
                if (resposta == q7){acertos++;}
                else{erros++;}
                break;
            case 8:
                if (resposta == q8){acertos++;}
                else{erros++;}
                break;
            case 9:
                if (resposta == q9){acertos++;}
                else{erros++;}
                break;
            case 10:
                if (resposta == q10){acertos++;}
                else{erros++;}
                break;
            default:
                break;
            }
        }

        cout << "O aluno " << i << " acertou " << acertos << " questoes" << endl;
        cout << "O aluno" << i << " errou " << erros << " questoes" << endl;
        totalAcertos += acertos;
        acertos = 0;
        erros = 0;
    }

    mediaTurma = (totalAcertos + 0.0)/alunos;
    cout << "A media de acertos da turma e " << mediaTurma << " questoes" << endl;
}
