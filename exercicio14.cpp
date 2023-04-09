#include <iostream>

using namespace std;

int main()
{
    int opcao = 0;

    while (opcao != 6)
    {
        cout << "Digite uma das opcoes abaixo: " << endl;
        cout << "1-Triângulo, 2-Quadrado, 3- Retângulo, 4-Trapézio, 5-Círculo, 6-Sair." << endl;
        cin >> opcao;

        switch (opcao)
        {
        case 1:
            float baseT, alturaT;
            cout << "Digite o valor da base e da altura de um triangulo: " << endl;
            cin >> baseT >> alturaT;
            cout << endl << "A area do triangulo e: " << (baseT*alturaT)/2 << endl;
            break;
        case 2:
            float lado;
            cout << "Digite o valor do lado do quadrado: " << endl;
            cin >> lado;
            cout << endl << "A area de um quadrado e: " << lado*lado << endl;
            break;
        case 3:
            float baseR, alturaR;
            cout << "Digite o valor da base e da altura de um retangulo" << endl;
            cin >> baseR >> alturaR;
            cout << endl << "A area de um retangulo e: " << baseR*alturaR << endl;
            break;
        case 4:
            float baseMenorTRA, baseMaiorTRA, alturaTRA;
            cout << "Digite o valor da base menor, da base maior e da altura de um trapezio" << endl;
            cin >> baseMenorTRA >> baseMaiorTRA >> alturaTRA;
            cout << endl << "A area do trapezio e: " << ((baseMaiorTRA*baseMenorTRA)*alturaTRA)*2 << endl;
            break;
        case 5:
            float raio;
            cout << "Digite o valor do raio de um circulo: " << endl;
            cin >> raio;
            cout << endl << "O valor da area de um circulo e: " << 3.14*(raio*raio) << endl;
            break;
        case 6:
            break;
        default:
            cout << "Numero invalido!!";
            break;
        }
    }
}
