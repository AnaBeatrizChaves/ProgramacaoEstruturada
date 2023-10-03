#include<stdio.h>

main(){
    int vetor[6];

    for (int i = 0; i < 6; i++) {
        if(vetor[i] % 2 == 0) {
            printf("\nDigite um numero PAR: ");
            scanf("%d", &vetor[i]);
        }else {
            printf("Numero invalido...tente novamente!");
        }   
    }
    printf("\n---------------------\n");
    for (int i = 5; i >= 0; i--) {
        printf("\nVETOR PAR INVERTIDO:%d", vetor[i]);
    }
}