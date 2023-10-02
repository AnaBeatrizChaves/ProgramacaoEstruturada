#include<stdio.h>

main(){
    int vetor[8], X, Y, valorY, valorX, somaXY;
    
    for (int i = 0; i < 8; i++) {
        printf("Digite um numero: ");
        scanf("%d", &vetor[i]);  
    }
    printf("\n-----------------------\n");
    printf("Digite a posicao de X: ");
    scanf("%d", &X);
    printf("Digite a posicao de Y: ");
    scanf("%d", &Y);
    printf("\n-----------------------\n");

     for (int i = 0; i < 8; i++) {
       if (i == X){
         valorX= vetor[i];
         printf("O valor de X = %d", vetor[i]);
       }
       if (i == Y){
         valorY= vetor[i];
         printf("\nO valor de Y = %d", vetor[i]);
       }
    }
    somaXY = valorX + valorY;
    printf("\nA soma de X e Y = %d", somaXY);
}