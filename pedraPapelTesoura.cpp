#include <iostream>

using namespace std;

int main()
{
    int vitoriasPlayerA = 0, vitoriasPlayerB = 0, jogadaPlayerA, jogadaPlayerB, partidas = 0;
    bool ganhadorPartidas = false;

    do
    {
        do
        {
            do
            {
                cout << "Digite sua jogada player A: " << endl;
                cout << "pedra -1, papel - 2, tesoura - 3" << endl;
                cin >> jogadaPlayerA;

                cout << "Digite sua jogada player B: " << endl;
                cout << "pedra -1, papel - 2, tesoura - 3" << endl;
                cin >> jogadaPlayerB;
            } while ((jogadaPlayerA > 3 || jogadaPlayerA < 1) || (jogadaPlayerB > 3 || jogadaPlayerB < 1));
        } while (jogadaPlayerA == jogadaPlayerB);

        if ((jogadaPlayerA == 1 && jogadaPlayerB == 3) || (jogadaPlayerA == 2 && jogadaPlayerB == 1) || (jogadaPlayerA == 3 && jogadaPlayerB == 2))
        {
            vitoriasPlayerA++;
        }
        else if ((jogadaPlayerB == 1 && jogadaPlayerA == 3) || (jogadaPlayerB == 2 && jogadaPlayerA == 1) || (jogadaPlayerB == 3 && jogadaPlayerA == 2))
        {
            vitoriasPlayerB++;
        }
        partidas++;

        if (vitoriasPlayerA == 3 || vitoriasPlayerB == 3)
        {
            ganhadorPartidas = true;
        }
        cout << "Vitorias player A " << vitoriasPlayerA << endl;
        cout << "Vitorias player B " << vitoriasPlayerB << endl;
    } while (partidas < 5 && ganhadorPartidas == false);

    cout << "O ganhador foi o ";
    if (vitoriasPlayerA == 3)
    {
        cout << "Jogador A" << endl;
    }
    else
    {
        cout << "Jogador B" << endl;
    }
}