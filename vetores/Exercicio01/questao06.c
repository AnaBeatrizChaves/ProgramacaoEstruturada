#include<stdio.h>

main(){
    int vetor[10], maior = 0, menor;

    for (int i = 0; i < 10; i++) {
        printf("\nDigite um numero: ");
        scanf("%d", &vetor[i]);
    }
    printf("\n---------------------\n");
    for (int i = 0; i < 10; i++) {
        if (vetor[i] > maior){
            maior = vetor[i];
        }
        if (vetor[i] < menor){
            menor = vetor[i];
        }
    } 
    printf("\nO MAIOR VALOR = %d", maior);
    printf("\nO MENOR VALOR = %d", menor);
    printf("\n---------------------\n");
}