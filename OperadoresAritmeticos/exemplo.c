#include<stdio.h>
//#include<locale.h>

main(){
    //setlocale(LC_ALL, "portuguese");
    //operador soma

    int num1, num2, soma, subtracao, divisao, mult;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero:" );
    scanf("%d", &num2);

    soma = (num1 + num2);
    subtracao = (num1 - num2);
    divisao = (num1 / num2);
    mult = (num1 * num2);

    printf("O valor da soma e = %d", soma);
    printf("\nO valor da subtracao e = %d", subtracao);
    printf("\nO valor da divisao e = %d", divisao);
    printf("\nO valor da multiplicacao e = %d", mult);


}