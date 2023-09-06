#include<stdio.h>
/*1 -Usando o comando switch, faça um algoritmo que leia o número de DDD e informe a qual cidade pertence, considerando só os seguintes valores: 

61 - Brasília 

71 - Salvador 

11 - São Paulo 

21 - Rio de Janeiro 

32 - Juiz de Fora 

19 - Campinas 

27 - Vitória 

31 - Belo Horizonte 

Qualquer outro - uma cidade no Brasil sem identificação 
*/

main(){
    int ddd;

    printf("---------------------------\n");
    printf("Digite o numero do DDD: ");
    scanf("%d", &ddd);
    printf("---------------------------\n");

    switch (ddd){
        case 61:
            printf("CIDADE: Brasilia!");
            break;
        case 71:
            printf("CIDADE: Salvador!");
            break;
        case 11:
            printf("CIDADE: Sao Paulo!");
            break;
        case 21:
            printf("CIDADE: Rio de Janeiro!");
            break;
        case 32:
            printf("CIDADE: juiz de fora!");
            break;
        case 19:
            printf("CIDADE: Campinas!");
            break;
        case 27:
            printf("CIDADE: Vitoria!");
            break;
        case 31:
            printf("CIDADE: Belo Horizonte!");
            break;
    default:
            printf("Uma cidade no Brasil sem identificacao!");
        break;
    }
}