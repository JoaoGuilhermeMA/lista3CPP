#include <iostream>

using namespace std;

/*
Faça um algoritmo que leia um conjunto de 4 valores, um de cada vez, e,
após lidos os valores, escreva uma tabela de resultados (formatada com linhas verticais e horizontais).
A tabela deverá conter cada valor lido em uma coluna, seu quadrado (na segunda linha) e seu cubo (na terceira linha).
Finalizar a entrada de dados quando os 4 valores digitados forem iguais a zero.
Se for digitado algum número negativo, solicitar que o usuário digite novamente até que o número seja positivo.
*/


int main()
{
    int v1, v2, v3, v4;

    while (true)
    {
        do{
            cout << "Digite o valor 1: ";
            cin >> v1;
        } while (v1 < 0);
        do{
            cout << "Digite o valor 2: ";
            cin >> v2;
        } while (v2 < 0);
        do{
            cout << "Digite o valor 3: ";
            cin >> v3;
        } while (v3 < 0);
        do{
            cout << "Digite o valor 4: ";
            cin >> v4;
        } while (v4 < 0);

        if (v1 == 0 && v2 == 0 && v3 == 0 && v4 == 0)
        {
            break;
        }

        cout << "------------------------------------------------------------" << endl;
        cout << " Valor1\t\t|" << "valor2\t\t|"<< "valor3\t\t|"<< "valor4\t\t" << endl;
        cout <<" "<<v1 << "\t\t|" << v2 << "\t\t|" << v3 << "\t\t|" << v4 << endl;
        cout <<" "<<v1*v1 << "\t\t|" << v2*v2 << "\t\t|" << v3*v3 << "\t\t|" << v4*v4 << endl;
        cout <<" "<<v1*v1*v1 << "\t\t|" << v2*v2*v2 << "\t\t|" << v3*v3*v3 << "\t\t|"
        << v4*v4*v4 << endl;
        cout << "------------------------------------------------------------" << endl;
    }
}
