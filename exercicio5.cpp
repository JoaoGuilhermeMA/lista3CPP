#include  <iostream>

using namespace std;

int main()
{
    int matricula = 0, qntdAprovado = 0, qntdReprovado = 0, qntdRecuperacao = 0, qntdSuperior = 0;
    float media = 0;

    while (media >= 0)
    {
        cout << "Digite 0 ou um numero menor para finalizar o programa: ";
        cin >> matricula;
        if(matricula <= 0) break;

        cout << "Digite sua matricula: " << endl;
        cin >> matricula;

        cout << "Digite sua media: " << endl;
        cin >> media;

        if (media >= 7)
        {
            qntdAprovado +=1;

        }else if(media >= 3)
        {
            qntdRecuperacao +=1;
        }else{
            qntdReprovado +=1;
        }

        if(media > 9) {
            qntdSuperior++;
            cout << "Alunos com nota superior a: " << matricula << endl;
        }
    }

    cout << "A escola teve " << qntdAprovado << " alunos aprovados" << endl;
    cout << "A escola teve " << qntdRecuperacao << " alunos em recuperacao" << endl;
    cout << "A escola teve " << qntdReprovado << " alunos reprovados" << endl;
}
