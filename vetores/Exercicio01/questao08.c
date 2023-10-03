#include<stdio.h>

main(){
    int vetor[6];

    for (int i = 0; i < 6; i++) {
        printf("\nDigite um numero: ");
        scanf("%d", &vetor[i]);
    }
    printf("\n---------------------\n");
    for (int i = 5; i >= 0; i--) {
        printf("\nVETOR INVERTIDO:%d", vetor[i]);
    } 
}