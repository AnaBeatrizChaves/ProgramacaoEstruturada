#include<stdio.h>
/* 
1. Escreva um programa que receba dois números e 
mostre a soma, a subtração, a multiplicação e a 
divisão desses números.
*/

main(){
    int num1, num2, soma, subtracao, mult;
    float div;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero:" );
    scanf("%d", &num2);

    soma = (num1 + num2);
    subtracao = (num1 - num2);
    div = ((float)num1 / (float)num2); // realizando o quest para alterar o tipo numerico de int para float
    mult = (num1 * num2);

    printf("O valor da soma e = %d", soma);
    printf("\nO valor da subtracao e = %d", subtracao);
    printf("\nO valor da divisao e = %2.f", div);
    printf("\nO valor da multiplicacao e = %d", mult);
}