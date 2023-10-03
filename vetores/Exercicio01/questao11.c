#include<stdio.h>

main(){
  int vetor[10], negativo = 0, positivo = 0;

   for(int i = 0; i < 10; i++){

     printf("\nDigite um numero real negativo ou positivo:\n");
     scanf("%d", &vetor[i]);

     if(vetor[i]<0){
        negativo++;
     }

     if(vetor[i]>0){
       positivo+=vetor[i];
     }
   }
   printf("\nA quantidade de numero negativos é: %d",negativo);
   printf("\nA soma dos positivos é: %d",positivo);
}
