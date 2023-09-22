#include<stdio.h>
#include<math.h>
/*
1. Criar um algoritmo que receba o valor de x, e calcule e imprima o valor de f(x). 
*/

main(){
    float x, funcao;

    printf("--------- FUNCAO ---------\n");
    printf("Digite o valor de x: ");
    scanf("%f", &x);

    funcao = ((5 * x) + 3) / sqrt((x * x) - 16);

    printf("O resuldado da Funcao(X) e = %.2f", funcao);
    printf("\n--------------------------\n");
}