/*
6. Elaborar um programa que leia dois valores inteiros (A e B). Em seguida, faça uma função que retorne a soma do dobro dos dois números lidos. A função deverá armazenar o dobro de A na própria variável A e o dobro de B na própria variável B.
*/

#include<stdio.h>
#include<string.h>

int somaDobro(int *a, int *b) {
    int resultado = 2 * (*a) + 2 * (*b);
    *a = 2 * (*a);
    *b = 2 * (*b);
    return resultado;
}

main(){
    int A, B;
    
    printf("Digite o valor de A: ");
    scanf("%d", &A);
    printf("Digite o valor de B: ");
    scanf("%d", &B);

    int resultado = somaDobro(&A, &B);

    printf("Soma do dobro de A e B: %d\n", resultado);
    printf("Novo valor de A: %d\n", A);
    printf("Novo valor de B: %d\n", B);
}