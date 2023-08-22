#include <stdio.h>
/*
5. Dado um valor em reais e a cotação 
do dólar, converta esse valor para dólares.
*/

main(){
    float valor, conversao;

    printf("Digite o valor em reais: R$ ");
    scanf("%f", &valor);

    conversao = (valor / 4.98);
    
    printf("O valor R$ %.2f em dolares e = US$ %.2f", valor, conversao);
}