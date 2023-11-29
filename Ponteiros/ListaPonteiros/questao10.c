/*
10. Crie um programa que contenha um array de inteiros contendo 5 elementos. Utilizando apenas aritmética de ponteiros, leia esse array do teclado e imprima o dobro de cada valor lido.
*/

#include<stdio.h>
#include<string.h>

main(){
    int array[5];

    printf("Digite 5 valores inteiros:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &array[i]);
    }

    printf("Dobro de cada valor:\n");
    for (int i = 0; i < 5; i++) {
        int *ptr = &array[i];
        printf("%d\n", (*ptr) * 2);
    }
}