#include<stdio.h>
/*
Escrever um algoritmo que leia o código do item pedido, a quantidade e calcule o valor a ser pago por aquele lanche. Considere que a cada execução somente será calculado um item.
*/

main(){
    int produto, quant;
    float total;

    printf("----------------- LANCHONETE ------------------\n");
    printf("                   CARDAPIO                    \n");
    printf("Codigo          Produto               Preco Unit.\n");
    printf("100 ________ Cachorro quente _________ R$ 10,10\n");
    printf("101 ________ Bauru simples   _________ R$ 8,30\n");
    printf("102 ________ Bauru c/ovo     _________ R$ 8,50\n");
    printf("103 ________ Hamburguer      _________ R$ 12,50\n");
    printf("104 ________ Cheeseburguer   _________ R$ 13,25\n");
    printf("-----------------------------------------------\n");
    printf("Preencha os campos abaixo: \n");
    printf("CODIGO DO PRODUTO: ");
    scanf("%d", &produto);
    printf("QUANTIDADE: ");
    scanf("%d", &quant);

    switch (produto) {
    case 100:
        total = (10.10 * quant);
        printf("--> RESUMO DO PEDIDO\n");
        printf("%d - Cachorro(s) quente(s)\n", quant);
        printf("TOTAL = R$ %.2f", total);
        printf("\n-----------------------------------------------\n");
        break;
    case 101:
        total = (8.30 * quant);
        printf("--> RESUMO DO PEDIDO\n");
        printf("%d - Bauru simples\n", quant);
        printf("TOTAL = R$ %.2f", total);
        printf("\n-----------------------------------------------\n");
        break;
    case 102:
        total = (8.50 * quant);
        printf("--> RESUMO DO PEDIDO\n");
        printf("%d - Bauru c/ ovo\n", quant);
        printf("TOTAL = R$ %.2f", total);
        printf("\n-----------------------------------------------\n");
        break;
    case 103:
        total = (12.50 * quant);
        printf("--> RESUMO DO PEDIDO\n");
        printf("%d - Hamburguer\n", quant);
        printf("TOTAL = R$ %.2f", total);
        printf("\n-----------------------------------------------\n");
        break;
       
    case 104:
        total = (13.25 * quant);
        printf("--> RESUMO DO PEDIDO\n");
        printf("%d - Cheeseburguer\n", quant);
        printf("TOTAL = R$ %.2f", total);
        printf("\n-----------------------------------------------\n");
        break;
    default:
    printf("PRODUTO NAO CADASTRADO NO CARDAPIO!!");
    printf("\n-----------------------------------------------\n");       
    }   
}