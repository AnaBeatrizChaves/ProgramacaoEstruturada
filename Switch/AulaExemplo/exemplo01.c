#include<stdio.h>

main(){
    int dia;

    printf("Digite um numero correspondente a um dia da semana: ");
    scanf("%d", &dia);

//estrutura switch case
    switch (dia){
        case 1:
            printf("Domingo");     
            break;
        case 2:
            printf("Segunda");   
            break;
        case 3:
            printf("Terca");     
            break;
        case 4:
            printf("Quarta");     
            break;
        case 5:
            printf("Quinta");     
            break;
        case 6:
            printf("Sexta");     
            break;
        case 7:
            printf("Sexta");     
            break;
    default:
            printf("O numero naoo corresponde a um dia da semana!");
    }
}
