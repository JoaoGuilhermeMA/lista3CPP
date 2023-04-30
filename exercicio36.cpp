#include <iostream>

using namespace std;
/*
Numa universidade, cada aluno possui os seguintes dados:
- Renda pessoal;
- Renda familiar;
- Total gasto com alimentação;- Total gasto com outras despesas.
Elabore um algoritmo que calcule e escreva:
- A porcentagem dos alunos que gasta acima de R$ 200,00 com outras despesas;
- A quantidade de alunos com renda pessoal maior que renda familiar;
- A porcentagem gasta com alimentação e outras despesas em relação ao somatório das rendas pessoal e familiar.
O algoritmo deve finalizar quando for digitado 0 para a renda pessoal.
*/
int main()
{
    float rendaPessoal, rendaFamiliar = 0, alimentacao, outrasDespesas, porcentagemDespesas, porcetagemRenda, qntdDespesas;
    float totalAlimentacao = 0, totalOutras = 0, totalRenda = 0;
    int qntdRendaPessoalMaior, totalAlunos = 0;

    do
    {
        cout << "Digite a renda pessoal: " << endl;
        cin >> rendaPessoal;
        if (rendaPessoal != 0)
        {
            cout << "Digite a renda familiar: " << endl;
            cin >> rendaFamiliar;

            cout << "Digite o total gasto com alimentacao: " << endl;
            cin >> alimentacao;

            cout << "Digite o total gasto com outras despesas " << endl;
            cin >> outrasDespesas;

            if (outrasDespesas > 200)
            {
                qntdDespesas++;
            }

            if (rendaPessoal > rendaFamiliar)
            {
                qntdRendaPessoalMaior++;
            }
            totalAlunos++;
            totalRenda += rendaFamiliar + rendaPessoal;
            totalAlimentacao += alimentacao;
            totalOutras += outrasDespesas;
        }
    } while (rendaPessoal != 0);

    porcentagemDespesas = (qntdDespesas / totalAlunos) * 100.0;
    porcetagemRenda = ((totalAlimentacao + totalOutras) / (totalRenda)*100);
    cout << "A porcentagem dos alunos que gasta acima de 200,00 reais com outras despesas e " << porcentagemDespesas << "%" << endl;
    cout << "A quantidade de pessoas com renda pessoal maior que a renda familiar e " << qntdRendaPessoalMaior << endl;
    cout << "A porcentagem da renda total gasta com alimentação e outras despesas  e " << porcetagemRenda << "% " << endl;
}