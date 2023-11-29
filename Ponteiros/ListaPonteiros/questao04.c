/*
4. Faça um programa que leia 2 valores inteiros e chame uma função que receba estas 2 variáveis e troque o seu conteúdo, ou seja, esta função é chamada passando duas variáveis A e B, por exemplo, e, após a execução da função, A conterá o valor de B e B terá o valor de A.
*/

#include<stdio.h>
#include<string.h>

void trocarValores(int *pA, int *pB) {
    int temp = *pA;
    *pA = *pB;
    *pB = temp;
}

main(){
    int valor1, valor2;
    
    printf("Digite o valor 1: ");
    scanf("%d", &valor1);
    printf("Digite o valor 2: ");
    scanf("%d", &valor2);

    trocarValores(&valor1, &valor2);

    printf("Valores trocados: %d e %d\n", valor1, valor2);
}