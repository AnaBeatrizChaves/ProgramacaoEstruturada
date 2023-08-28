#include <stdio.h>
/*
6. Faça um programa em que o usuário digite
o custo de uma determinada mercadoria, em seguida,
adiciona-se ao custo o valor do frete e despesas
eventuais (também solicitadas pelo teclado).
Para concluir, o programa pergunta qual o valor
de venda e indica a percentagem de lucro da mercadoria.
*/

main(){
    float custo, frete, despesas, valorVenda, totalGasto, lucro, percentual;

    printf("Digite o custo da Mercadoria: R$");
    scanf("%f", &custo);
    printf("Digite o valor do frete: R$");
    scanf("%f", &frete);
    printf("Digite o valor das despesas eventuais: R$");
    scanf("%f", &despesas);
    printf("Digite o valor da venda: R$");
    scanf("%f", &valorVenda);

    totalGasto = (custo + frete + despesas);
    lucro = (valorVenda - totalGasto);
    percentual = (lucro * 100)/valorVenda;

    printf("A porcentagem de lucro da mercadoria e = %.2f%%", percentual);                                     
}