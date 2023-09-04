#include<stdio.h>
#include<math.h>
//Escreva um algoritmo que leia um número e imprima a raiz quadrada do número caso ele seja positivo ou igual a zero e o quadrado do número caso ele seja negativo.

main(){
    float numero, resultado;

    printf("Digite um numero: ");
    scanf("%f", &numero);

    if (numero >= 0) {
        resultado = sqrt(numero);
        printf("A raiz quadrada do numero %.2f e = %.2f", numero, resultado);
    }else{
        resultado = pow(numero, 2);
        printf("O quadrado do numero %.2f e = %.2f", numero, resultado);
    }
 
}