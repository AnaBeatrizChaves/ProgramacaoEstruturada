#include<stdio.h>
/*
3. Dado três valores, A, B e C, construa um algoritmo para verificar se estes valores podem ser valores dos lados de um triângulo, e se for, se é um triangulo escaleno, um triangulo equilátero ou um triangulo isósceles.
*/

main(){
    float A, B, C;

    printf("Preencha os campos abaixo:\n");
    printf("LADOS DO TRIANGULO\n");
    printf("A: ");
    scanf("%f", &A);
    printf("B: ");
    scanf("%f", &B);
    printf("C: ");
    scanf("%f", &C);

    if (A + B > C && A + C > B && B + C > A){
        printf("TRIANGULO DO TIPO:\n");
        if (A == B && B == C) {
            printf("-- Equilatero.");
        }else if(A != B && B != C){
            printf("-- Escaleno.");
        }else{
            printf("-- Isosceles.");
        }
    }else{
        printf("Os valores dos medidas dos lados, não correspondem a um triangulo!");
    }
}
    