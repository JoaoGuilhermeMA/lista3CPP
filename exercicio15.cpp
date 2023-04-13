#include <iostream>
using namespace std;

int main()
{
    int identidade, qntdDependentes;
    float salarioBruto, salarioLiquido, horasTrabalhadas;

    for (int i = 0; i < 10; i++)
    {
        cout << "Escreva a identidade do funcionario: " << endl;
        cin >> identidade;

        cout << "Digite a quantidade de horas trabalhadas do funcionario " << endl;
        cin >> horasTrabalhadas;

        do
        {
            cout << "Digite a quantidade de dependentes que esse funcionario tem: " << endl;
            cin >> qntdDependentes;
        } while (qntdDependentes < 0);

        salarioBruto = (12 * horasTrabalhadas) + (40 * qntdDependentes);
        salarioLiquido = salarioBruto * 0.865;
        cout << "O salario bruto desse funcionario e " << salarioBruto << endl;
        cout << "O salario liquido desse funcionario e " << salarioLiquido;
        if (qntdDependentes > 3)
        {
            cout << "O funcionario tem mais de 3 dependentes, sua identidade e " << identidade;
        }

    }
}
