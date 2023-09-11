#include<stdio.h>
/*
Criar um algoritmo que informe a quantidade total de 
calorias de uma refeição a partir do usuário que deverá
informar o prato, a sobremesa e a bebida 
*/

main(){
    int prato, sobremesa, bebida, quantPrato, quantSob, quantBeb;
    float calPrato, calSob, calBeb, totalCal;

    printf("----------------- CARDAPIO ------------------\n");
    printf("               PRATO PRINCIPAL               \n");
    printf("    Codigo                         Prato     \n");
    printf("       1   ___________________  Vegetariano  \n");
    printf("       2   ___________________     Peixe     \n");
    printf("       3   ___________________    Frango     \n");
    printf("       4   ___________________    Carne      \n");
    printf("Escolha um prato \n");
    printf("CODIGO: ");
    scanf("%d", &prato);
    printf("QUANTIDADE: ");
    scanf("%d", &quantPrato);
    printf("---------------------------------------------\n");

    printf("                 SOBREMESA                     \n");
    printf("    Codigo                         Prato       \n");
    printf("       1   ___________________    Abacaxi      \n");
    printf("       2   ___________________  Sorvete Diet   \n");
    printf("       3   ___________________   Mouse Diet    \n");
    printf("       4   ___________________ Mouse Chocolate \n");
    printf("Escolha uma sobremesa \n");
    printf("CODIGO: ");
    scanf("%d", &sobremesa);
    printf("QUANTIDADE: ");
    scanf("%d", &quantSob);
    printf("---------------------------------------------\n");

    printf("                   BEBIDA                    \n");
    printf("    Codigo                         Prato     \n");
    printf("       1   ___________________      Cha      \n");
    printf("       2   ___________________ Suco de Laranja\n");
    printf("       3   ___________________ Suco de Melao  \n");
    printf("       4   ___________________ Refrigerante Diet\n");
    printf("Escolha um bebida \n");
    printf("CODIGO: ");
    scanf("%d", &bebida);
    printf("QUANTIDADE: ");
    scanf("%d", &quantBeb);
    printf("---------------------------------------------\n");

    switch (prato) {
    case 1:
        calPrato = (180 * quantPrato);
        printf("\n---> CALORIAS CONSUMIDAS:\n");
        printf("%d - Vegetariano -> %.2f Cal\n", quantPrato, calPrato);
        break;
    case 2:
        calPrato = (230 * quantPrato);
        printf("\n--> CALORIAS CONSUMIDAS:\n");
        printf("%d - Peixe -> %.2f Cal\n", quantPrato, calPrato);
        break;    
    case 3:
        calPrato = (250 * quantPrato);
        printf("\n---> CALORIAS CONSUMIDAS:\n");
        printf("%d - Frango -> %.2f Cal\n", quantPrato, calPrato);
        break;
    case 4:
        calPrato = (350 * quantPrato);
        printf("\n---> CALORIAS CONSUMIDAS:\n");
        printf("%d - Carne -> %.2f Cal\n", quantPrato, calPrato);
        break;
    default:
    printf("PRODUTO NAO CADASTRADO NO CARDAPIO!!");
    printf("\n-----------------------------------------------\n");       
    }

    switch (sobremesa) {
    case 1:
        calSob = (75 * quantSob);
        printf("%d - Abacaxi -> %.2f Cal\n", quantSob, calSob);
        break;
    case 2:
        calSob = (110 * quantSob);
        printf("%d - Sorvete Diet -> %.2f Cal\n", quantSob, calSob);
        break;    
    case 3:
        calSob = (170 * quantSob);
        printf("%d - Mouse Diet -> %.2f Cal\n", quantSob, calSob);
        break;
    case 4:
        calSob = (200 * quantSob);
        printf("%d - Mouse Chocolate -> %.2f Cal\n", quantSob, calSob);
        break;
    default:
    printf("PRODUTO NAO CADASTRADO NO CARDAPIO!!");
    printf("\n-----------------------------------------------\n");       
    }

    switch (bebida) {
    case 1:
        calBeb = (20 * quantBeb);
        printf("%d - Cha -> %.2f Cal\n", quantBeb, calBeb);
        break;
    case 2:
        calBeb = (70 * quantBeb);
        printf("%d - Suco de Laranja -> %.2f Cal\n", quantBeb, calBeb);
        break;    
    case 3:
        calBeb = (100 * quantBeb);
        printf("%d - Suco de Melao -> %.2f Cal\n", quantBeb, calBeb);
        break;
    case 4:
        calBeb = (65 * quantBeb);
        printf("%d - Refrigerante Diet -> %.2f Cal\n", quantBeb, calBeb);
        break;
    default:
    printf("PRODUTO NAO CADASTRADO NO CARDAPIO!!");
    printf("\n-----------------------------------------------\n");       
    } 

    totalCal = (calPrato + calSob + calBeb);
    printf("TOTAL = %.2f Cal", totalCal);
    printf("\n-----------------------------------------------\n");    
}