/*
3. Escreva um programa que contenha duas variáveis inteiras. Leia essas variáveis do teclado. Em seguida, compare seus endereços e exiba o conteúdo do maior endereço.
*/

#include<stdio.h>
#include<string.h>

main() {
    int var1, var2;
    int *p1, *p2;

    p1 = &var1;
    p2 = &var2;

    printf("Digite o valor da primeira variavel: ");
    scanf("%d", &var1);
    printf("Digite o valor da segunda variavel: ");
    scanf("%d", &var2);

    if (p1 > p2) {
        printf("Conteudo do maior endereco: %d\n", *p1);
    } else {
        printf("Conteudo do maior endereco: %d\n", *p2);
    }
}
