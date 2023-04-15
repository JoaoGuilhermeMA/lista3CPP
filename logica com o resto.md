# Para decompor um numero
2222 % 10 = 2 \n
222 \n

enquanto numero > 0 faça \n
    resto = numero % 10 ->  extrai o ultimo digito \n
    numero /= 10; ->  remove o ultimo digito do numero \n
fim \n

2222 / 10 = 2 \n
2222 / 100 = 22 \n
2222 / 1000 = 222 \n
-----------------------------------
# para achar o inverso de um numero
enquanto "numero" != "0" faça \n
    reverso = reverso * 10 + numero % 10; \n
    copia /= 10; \n
fim \n
