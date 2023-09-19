#include <stdio.h>
/*
6. Elabore um algoritmo que permita ao usuário realizar a compra de frutas.
Assim, apresente a lista de frutas disponíveis, abaixo, com seus respectivos valores.
O algoritmo deve permitir ao usuário retomar o menu frutas quantas vezes quiser, e solicitar a quantidade de frutas.
Ao final, apresente o valor total da compra.
1 => ABACAXI – 5,00 a unidade / 2 => MAÇA – 1,00 a unidade / 3 => PERA – 4,00 a unidade.
*/

main(){
    int fruta, quant, opcao;
    float total;

    do{
        printf("----------------- CARDAPIO ------------------\n");
        printf("Codigo     Produto         Preco Unit.\n");
        printf("1 ________ Abacaxi ________ R$ 5,00\n");
        printf("2 ________  Maca   ________ R$ 1,00\n");
        printf("3 ________  Pera   ________ R$ 4,00\n");
        printf("-----------------------------------------------\n");
        printf("Preencha os campos abaixo: \n");
        printf("CODIGO DO PRODUTO: ");
        scanf("%d", &fruta);
        printf("QUANTIDADE: ");
        scanf("%d", &quant);

        switch (fruta) {
    case 1:
        total = total + (5 * quant);
        printf("--> TOTAL DA COMPRA\n");
        printf("TOTAL = R$ %.2f", total);
        printf("\n-----------------------------------------------\n");
        break;
    case 2:
        total = total + (1 * quant);
        printf("--> TOTAL DA COMPRA\n");
        printf("TOTAL = R$ %.2f", total);
        printf("\n-----------------------------------------------\n");
        break;
    case 3:
        total = total + (4* quant);
        printf("--> TOTAL DA COMPRA\n");
        printf("TOTAL = R$ %.2f", total);
        printf("\n-----------------------------------------------\n");
        break;
        }

        printf("\nDeseja realizar um novo pedido?\n1 - Sim\n0 - Nao");
        printf("\nOpcao: ");
        scanf("%d", &opcao);
    } while (opcao != 0);
        printf("\n-----------------------------------------------\n");
        printf("Obrigada e volte sempre :)");
        printf("\n-----------------------------------------------\n");
}
