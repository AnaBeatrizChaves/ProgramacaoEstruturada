#include<stdio.h>

main(){
    int vetor[8], X, Y, soma = 0;
    
    for (int i = 0; i < 8; i++) {
        printf("Digite um numero: ");
        scanf("%d", &vetor[i]);  
    }
    
    do{
      printf("\n-----------------------\n");
      printf("Digite o valor de x (0 - 7): ");
      scanf("%d", &X);
      printf("Digite o valor de y (0 - 7): ");
      scanf("%d", &Y);
      printf("\n-----------------------\n");

      if ((X >= 0 && X < 8) && (Y >= 0 && Y < 8)){
      for (int i = 0; i < 8; i++) {
       if (i == X || i == Y){
         soma += vetor[i];
       }
      }
      }else{
        printf("Indices invalidos... tente novamente!");
      }
    }while(X < 0 || X > 7 && Y < 0 || Y > 7); 
    printf("\nA soma de X e Y = %d", soma);
}