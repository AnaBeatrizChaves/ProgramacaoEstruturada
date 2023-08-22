#include <stdio.h>
/*
2. Escreva um programa que receba um 
número qualquer e mostre o seu dobro.
*/

main(){
    float numero, dobro;

    printf("Digite um numero: ");
    scanf("%f", &numero);

    dobro = (numero * 2);

    printf("O dobro do numero %.1f e = %.1f",numero,dobro);  
}