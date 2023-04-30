#include <iostream>

using namespace std;

int main()
{
    int codigo, satisfacao, idade, tempoServico, maisTempo = 0, totalPessoas = 0, alunosSatisfeitos = 0, totalAlunos = 0, respostaMaisTempo;
    float mediaAlunos = 0, percentualAlunos = 0;

    do
    {
        cout << "Digite o seu codigo | alunos -> 1 |funcionarios -> 2" << endl;
        cin >> codigo;

        cout << "Digite a sua satisfacao com a escola |satisfeito -> 1| nao satisfeito ->  2| encerrar pesquisa -> 0" << endl;
        cin >> satisfacao;

        if (satisfacao != 0)
        {
            if (codigo == 1)
            {
                cout << "Digite sua idade: " << endl;
                cin >> idade;

                if (satisfacao == 1)
                {
                    alunosSatisfeitos++;
                }
                totalAlunos++;
                mediaAlunos += idade;
            }
            else if (codigo == 2)
            {
                cout << "Digite seu tempo de servico(em anos)" << endl;
                cin >> tempoServico;

                if (tempoServico > maisTempo)
                {
                    respostaMaisTempo = satisfacao;
                    maisTempo = tempoServico;
                }
            }
            else
            {
                cout << "Codigo invalido" << endl;
            }
            totalPessoas++;
        }
    } while (satisfacao != 0);

    if (totalAlunos != 0)
    {
        percentualAlunos = ((alunosSatisfeitos + 0.0) / totalAlunos) * 100;
        cout << "O percentuagem de alunos satisfeitos com a escola e de " << percentualAlunos << "%." << endl;
        cout << "A media de idades dos alunos e de " << mediaAlunos / totalAlunos << " alunos" << endl;
    }
    cout << "A resposta do funcionario com mais tempo de servico e ";
    if (respostaMaisTempo == 1)
    {
        cout << "que esta satisfeito" << endl;
    }
    else
    {
        cout << "que nao esta satisfeito" << endl;
    }
    cout << "O total de pessoas participantes dessa pesquisa foi de " << totalPessoas << endl;
}