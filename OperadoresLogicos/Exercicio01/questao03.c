#include<stdio.h>
//Dados três valores A, B e C, construa um algoritmo, que imprima os valores de forma ascendente (do menor para o maior).

main() {
    int a, b, c, num1, num2, num3;

    printf("Digite valores para os campos abaixo: ");
    printf("\nA: ");
    scanf("%d", &a);
    printf("B: ");
    scanf("%d", &b);
    printf("C: ");
    scanf("%d", &c);

    if ((a < b) && (a < c)){
        num1 = a; 
    } else if ((b < a) && (b < c)){
        num1 = b;
    }else{
        num1 = c;
    }

    if ((a > b) && (a > c)){
        num3 = a; 
    } else if ((b > a) && (b > c)){
        num3 = b;
    }else{
        num3 = c;
    }

    if (num2 > num1) && (num2 < num1)

    

 
}