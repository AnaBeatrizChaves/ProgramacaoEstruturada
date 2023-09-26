#include<stdio.h>
/*
10. Foi feita uma estatística nas 200 principais cidades brasileiras para coletar dados sobre acidentes de trânsito. Foram obtidos os seguintes dados:  

- código da cidade

- estado (RS, SC, PR, SP, RJ, ...)

- número de veículos de passeio (em 1992)

- número de acidentes de trânsito com vítimas (em 1992)

Deseja-se saber:

a) qual o maior e o menor índice de acidentes de trânsito e a que cidades pertencem

b) qual a média de veículos nas cidades brasileiras

c) qual a média de acidentes com vítimas entre as cidades do Rio Grande do Sul.
*/

main(){

    int codCidade = 0, veiculos, acidentes, opcao, maiorIndice = 0, diferenca, menorIndice = 0, mediaVeiculos, totalVeiculos, mediaAcidentes,totalAcidentes;
    char cidade[15], estado[4], estadoRS[]="RS";

   do{

     fflush(stdin);
     printf("\n++++++++++++ ESTATISTICA ++++++++++++\n");
     printf("\nNome da cidade:");
     fgets(cidade, 15, stdin);
     fflush(stdin);
     printf("UF: ");
     fgets(estado, 4, stdin);
     printf("Numero de veiculos de passeio: ");
     scanf("%d",&veiculos);
     printf("Numero de acidentes com vitima: ");
     scanf("%d",&acidentes);

     totalAcidentes += acidentes;
     totalVeiculos += veiculos;
     codCidade++;

     if(acidentes > maiorIndice){
        maiorIndice = acidentes;
     }

     if(acidentes < menorIndice || codCidade == 1){
       menorIndice = acidentes;
     }

     do{
       printf("\n_________________________________\n");
       printf("Deseja continuar:\n 1-Sim\n 0-Nao\n");
       scanf("%d",&opcao);
       printf("\n_________________________________\n");
       fflush(stdin);

       if(opcao != 0 && opcao != 1){
         printf("\nOpcao invalida, tente novamente...\n");
       }

     //fflush(stdin);
     }while(opcao != 0 && opcao != 1);
     
   }while(opcao == 1);

   if(strcmp(estado, estadoRS ) == 0){
     mediaAcidentes = totalAcidentes / codCidade;
   }

   mediaVeiculos = totalVeiculos / codCidade;

   printf("\n========================== RESULTADO FINAL ====================================\n");
   printf("Cidade com maior indice de acidentes: %s",cidade);
   printf("Media total de veiculos nas cidades brasileiras: %d", mediaVeiculos);
   printf("\nMedia total de acidentes nas cidades no Rio Grande do Sul: %d", mediaAcidentes);
}