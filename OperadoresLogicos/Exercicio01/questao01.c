#include<stdio.h>
#include<math.h>
//Escreva um algoritmo que leia um número e imprima a raiz quadrada do número caso ele seja positivo ou igual a zero e o quadrado do número caso ele seja negativo.

main(){
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (numero >= 0) {
        printf("A raiz quadrada do numero %d e = %.2f", numero, sqrt(numero));
    }else{
        printf("O quadrado do numero %d e = %.2f", numero, pow(numero, 2));
    }
 
}