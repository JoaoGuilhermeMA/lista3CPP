#include <iostream>

using namespace std;
/*
Elabore um algoritmo que simule o caixa de um supermercado.
Para cada produto da compra, o algoritmo deve ler o seu código, o valor unitário e a quantidade adquirida.
Após as informações doproduto, o algoritmo deve mostrar o subtotal da compra
e perguntar se o usuário deseja continuar (S- sim, N-não).
Caso o usuário escolha ‘S’, o algoritmo deverá pedir os dados do próximo produto.
Caso escolha ‘N’, o algoritmo deverá informar o total da compra e a quantidade total de produtos adquiridos.
Em seguida deve ler o valor pago e informar se está correto, existe troco ou está insuficiente.
*/
int main()
{
    int codigoProduto, qntdProduto, qntdProdutoTotal = 0;
    float valorUnitario, subtotal = 0, valorPago;
    char escolha;
    do
    {
        cout << "Digite o codigo do produto: " << endl;
        cin >> codigoProduto;

        cout << "Digite o valor unitario do produto: " << endl;
        cin >> valorUnitario;

        cout << "Digite a quantidade do produto: " << endl;
        cin >> qntdProduto;

        subtotal += (valorUnitario * qntdProduto);
        cout << "Seu subtotal e de: " << subtotal << endl;
        cout << "Deseja continuar? (s - sim, N - nao)" << endl;
        cin >> escolha;
        qntdProdutoTotal += qntdProduto;
    } while (escolha == 'S' || escolha == 's');

    cout << "Voce comprou " << qntdProdutoTotal << " produtos, o valor total foi de " << subtotal << endl;
    cout << "Digite o valor a ser pago: " << endl;
    cin >> valorPago;

    if (valorPago == subtotal)
    {
        cout << "O valor pago esta correto" << endl;
    }
    else
    {
        if (valorPago > subtotal)
        {
            cout << "O valor pago foi maior que a quantia necessaria seu troco vai ser " << valorPago - subtotal << " reais" << endl;
        }
        else
        {
            cout << "Valor insuficiente, faltou " << subtotal - valorPago << " reais" << endl;
        }
    }
}
