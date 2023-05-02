#include <iostream>
using namespace std;

int main() {

  int escolha, qntdVoto1 = 0, qntdVoto2 = 0, qntdVoto3 = 0, branco = 0,
               nulo = 0, totalVotos = 0;

  do {
    cout << "-----------------------" << endl;
    cout << "Menu Eleicao" << endl;
    cout << "-----------------------" << endl;
    cout << "0 -finalizar votacao" << endl;
    cout << "1 - canditado" << endl;
    cout << "2 - canditado" << endl;
    cout << "3 - canditado" << endl;
    cout << "4 - voto em branco" << endl;
    cout << "5 - voto nulo" << endl;
    cout << "-----------------------" << endl;
    cout << "Digite seu voto: " << endl;
    cin >> escolha;

    switch (escolha) {
    case 1:
      qntdVoto1++;
      break;
    case 2:
      qntdVoto2++;
      break;
    case 3:
      qntdVoto3++;
      break;
    case 4:
      branco++;
      break;
    case 5:
      nulo++;
      break;
    default:
      break;
    }
  } while (escolha != 0);

  totalVotos = qntdVoto1 + qntdVoto2 + qntdVoto3 + nulo + branco;
  cout << "A quantidade total de votos foi de " << totalVotos << " votos"
       << endl;
  cout << "O canditado 1 teve " << qntdVoto1 << " votos!" << endl;
  cout << "O canditado 2 teve " << qntdVoto2 << " votos!" << endl;
  cout << "O canditado 3 teve " << qntdVoto3 << " votos!" << endl;
  cout << "Teve " << branco << " votos brancos!" << endl;
  cout << "Teve " << nulo << " votos nulos!" << endl;

  if ((qntdVoto1 * 0.5) > (qntdVoto2 + qntdVoto3 + nulo + branco)) {
    cout << "Canditado 1 ganhou!" << endl;
  } else {
    if ((qntdVoto2 * 0.5) > (qntdVoto1 + qntdVoto3 + nulo + branco)) {
      cout << "Canditado 2 ganhou!" << endl;
    } else {
      if ((qntdVoto3 * 0.5) > (qntdVoto2 + qntdVoto1 + nulo + branco)) {
        cout << "Canditado 3 ganhou!" << endl;
      } else {
        cout << "Nao houve ganhador" << endl;
      }
    }
  }
}
