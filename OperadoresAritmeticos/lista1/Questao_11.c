#include <stdio.h>
/*
11. Uma revendedora de carros usados paga a seus funcionários vendedores um salário fixo por mês, mais uma comissão também fixa para cada carro vendido e mais 5% do valor das vendas por ele efetuadas. Escrever um algoritmo que leia o número de carros por ele vendidos, o valor total de suas vendas, o salário fixo e o valor que ele recebe por carro vendido. Calcule e escreva o salário final do vendedor.
*/

main(){
    int carrosVend;
    float vendaTotal, salarioFixo, comissao, salarioFinal, percentualSobreVenda;

    printf("Preencha os campos abaixo:");
    printf("\nNumero de carros vendidos: ");
    scanf("%d", &carrosVend);
    printf("Valor total de vendas: R$ ");
    scanf("%f", &vendaTotal);
    printf("Salario Fixo: R$ ");
    scanf("%f", &salarioFixo);
    printf("Comissao por carro vendido: R$ ");
    scanf("%f", &comissao);

    percentualSobreVenda = 0.05;
    salarioFinal = salarioFixo + (carrosVend * comissao) + (percentualSobreVenda * vendaTotal);

    printf("O salario final do vendedor e = R$ %.2f", salarioFinal);
}