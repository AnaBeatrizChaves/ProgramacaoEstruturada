#include<stdio.h>
// 2. Faça um programa que leia um número inteiro positivo N e imprima todos os números naturais de 0 até N em ordem decrescente. 

main(){
    int num, contador = 0;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &num);

    while (contador <= num ){
        printf("\n%d", num);
        num--;
    }
}