/*
5. Faça um programa que leia dois valores inteiros e chame uma função que receba estes 2 valores de entrada e retorne o maior valor na primeira variável e o menor valor na segunda variável. Escreva o conteúdo das 2 variáveis na tela.
*/

#include<stdio.h>
#include<string.h>

void encontrarMaiorMenor(int *a, int *b) {
    int temp;
    if (*a < *b) {
        temp = *a;
        *a = *b;
        *b = temp;
    }
}

main(){
    int valor1, valor2;

    printf("Digite o valor 1: ");
    scanf("%d", &valor1);
    printf("Digite o valor 2: ");
    scanf("%d", &valor2);

    encontrarMaiorMenor(&valor1, &valor2);

    printf("Maior valor: %d\n", valor1);
    printf("Menor valor: %d\n", valor2);
}