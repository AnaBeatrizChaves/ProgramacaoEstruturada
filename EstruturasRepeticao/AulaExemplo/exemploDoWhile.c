#include<stdio.h>

main() {
    
    int num1, num2, soma, opcao;

    do {
        printf("\nDigite dois numeros: ");
        printf("\nNumero 1: ");
        scanf("%d", &num1);
        printf("Numero 2: ");
        scanf("%d", &num2);

        soma = num1 + num2;

        printf("Soma = %d", soma);

        printf("\nDeseja fazer uma nova soma? 1 - Sim / 0 - Nao");
        printf("\nOpcao: ");
        scanf("%d", &opcao);
    }while(opcao != 0);


    /*
    int n1 = 2, resultado, contador = 0;

    do {
        resultado = n1 * contador;
        printf("\n%d X %d = %d", n1 , contador, resultado);
        contador++;
    }while(contador <= 10);
    */
}