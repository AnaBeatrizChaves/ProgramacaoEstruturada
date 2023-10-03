#Include<stdio.h>

main(){
  int vetor[5], menor=0, maior=0, media=0;

   for(int i = 0; i<5; i++){
     
     printf("\nDigite um numero:\n");
     scanf("%d", &vetor[i]);

     if(vetor[i]>maior){
        maior = vetor[i];
     }

     if(vetor[i]<menor || vetor[i]==vetor[0]){
       menor = vetor[i];
     }

     media+= vetor[i];
 }

   media= media/5;

   for(int i = 0; i<5; i++){
     printf("\n%d",vetor[i]);
   }
  
   printf("\nO maior valor é: %d",maior);
   printf("\nO menor valor é: %d",menor);
   printf("\nA media de valores é: %d",media);
}
