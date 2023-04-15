# Para decompor um numero
2222 % 10 = 2

222

enquanto numero > 0 faça

    resto = numero % 10 ->  extrai o ultimo digito

    numero /= 10; ->  remove o ultimo digito do numero

fim

2222 / 10 = 2

2222 / 100 = 22

2222 / 1000 = 222

-----------------------------------
# para achar o inverso de um numero

enquanto "numero" != "0" faça

    reverso = reverso * 10 + numero % 10;

    copia /= 10;

fim
