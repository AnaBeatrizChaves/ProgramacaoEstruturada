#include<stdio.h>
//Dados três valores A, B e C, construa um algoritmo, que imprima os valores de forma descendente (do maior para o menor).

main() {
    int a, b, c, num1, num2, num3;

    printf("Digite valores para os campos abaixo: ");
    printf("\nA: ");
    scanf("%d", &a);
    printf("B: ");
    scanf("%d", &b);
    printf("C: ");
    scanf("%d", &c);

    if ((a > b) && (a > c)){
        num1 = a; 
    } else if ((b > a) && (b > c)){
        num1 = b;
    }else{
        num1 = c;
    }

    if ((a < b) && (a > c)){
        num2 = a; 
    } else if ((b < a) && (b > c)){
        num2 = b;
    }else{
        num2 = c;
    }

    if ((a < b) && (a < c)){
        num3 = a; 
    } else if ((b < a) && (b < c)){
        num3 = b;
    }else{
        num3 = c;
    }
    
    printf("A ordem dos numeros em forma descendente e = %d, %d, %d", num1, num2, num3); 
}