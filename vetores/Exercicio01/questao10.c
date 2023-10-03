#include<stdio.h>

main(){
float notas[15], media = 0;

   for(int i = 0; i < 15; i++){

     printf("\nDigite a nota do aluno:\n");
     scanf("%f", &notas[i]);
     media+=notas[i];
   }
   media= media/15;
   printf("\nA media geral do alunos são: %.1f",media);
}
