#include<stdio.h>
/*
7) Faça um algoritmo em para ler o nome, o sexo ( M ou m para masculino e F ou f para feminino), a altura e o peso de um grupo de 10 pessoas. O programa de deve calcular e exibir: 

o número de homens;
o número de mulheres; 
a altura média dos homens;
 a altura média das mulheres; a altura média do grupo;
o peso médio dos homens;
o peso médio das mulheres;
e o peso médio do grupo
*/ 

main() {
    int idade,contador=0, homens=0, mulheres=0;
    char nome[20], sexo[3], sexom[]="m", sexof[]="f";
    float altura, peso, alturaMulher=0, alturaHomem=0, alturaMediahm, pesoHomem=0, pesoMulher=0, pesoMediohm,mediaPesoH, mediaPesoM,mediaAlturaH, mediaAlturaM;

  do{
    printf("\nDigite o nome do participante:\n");
    fgets(nome,20, stdin);

    printf("\nDigite a idade:\n");
    scanf("%d",&idade);

    printf("Digite:\nm-para masculino\nf-para feminino\n");
    fgets(sexo, 3, stdin);
    fflush(stdin);

    printf("\nDigite a altura:\n");
    scanf("%f",&altura);

    printf("\nDigite o peso:\n");
    scanf("%f",&peso);
    
    contador++;

    if(strcmp(sexo, sexof)==0){
      mulheres++;
      pesoMulher+=peso;
      alturaMulher+=altura;
      
    }else{
      homens++;
      pesoHomem+=peso;
      alturaHomem+=altura;
    }
}
}
    