#include<stdio.h>

main(){
    int vetor[10], numPares, contPar = 0;

    for (int i = 0; i < 10; i++) {
        printf("\nDigite um numero: ");
        scanf("%d", &vetor[i]);
    }
    printf("\n---------------------\n");
    for (int i = 0; i < 10; i++) {
        if (vetor[i] % 2 == 0){
            contPar++;
            printf("\nValores pares: %d", vetor[i]); 
        }
    }
    printf("\n---------------------\n");
    printf("Quantidade: %d", contPar);
    printf("\n---------------------\n");
}