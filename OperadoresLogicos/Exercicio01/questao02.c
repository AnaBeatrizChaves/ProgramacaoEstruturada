#include<stdio.h>
//Construa um algoritmo que dado quatro valores, A, B, C e D, o algoritmo imprima o maior e o menor valor. 

main(){
    int a, b, c, d, maior, menor;

    printf("Digite valores para os campos abaixo: ");
    printf("\nA: ");
    scanf("%d", &a);
    printf("B: ");
    scanf("%d", &b);
    printf("C: ");
    scanf("%d", &c);
    printf("D: ");
    scanf("%d", &d);

    if ((a > b) && (a > c) && (a > d)){
        maior = a;
    }else if ((b > a) && (b > c) && (b > d)){
        maior = b;
    }else if ((c > a) && (c > b) && (c > d)){
        maior = c;
    }else{
        maior = d;
    }

    if ((a < b) && (a < c) && (a < d)){
        menor = a;
    }else if ((b < a) && (b < c) && (b < d)){
        menor = b;
    }else if ((c < a) && (c < b) && (c < d)){
        menor = c;
    }else{
        menor = d;
    }

    printf("MAIOR numero = %d \nMENOR numero = %d", maior, menor);
}