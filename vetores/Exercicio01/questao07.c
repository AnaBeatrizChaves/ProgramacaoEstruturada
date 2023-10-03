#include<stdio.h>

main(){
    int vetor[10], maior = 0, posicao;

    for (int i = 0; i < 10; i++) {
        printf("\nDigite um numero: ");
        scanf("%d", &vetor[i]);
    }
    printf("\n---------------------\n");
    for (int i = 0; i < 10; i++) {
        if (vetor[i] > maior){
            maior = vetor[i];
            posicao = i;
        }
    } 
    printf("\nO MAIOR VALOR = %d", maior);
    printf("\nPOSICAO = %d", posicao);
    printf("\n---------------------\n");
}