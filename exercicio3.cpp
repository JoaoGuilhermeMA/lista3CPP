#include <iostream>

using namespace std;

int main()
{
    float alturaChico = 1.50, alturaJuca = 1.10;
    int ano = 0;

    while (alturaJuca <= alturaChico)
    {
        alturaChico += 0.02;
        alturaJuca += 0.03;
        ano++;
    }

    cout << "Juca vai levar " << ano << " anos para que sua altura fique maior que a de chico" << endl;
}
