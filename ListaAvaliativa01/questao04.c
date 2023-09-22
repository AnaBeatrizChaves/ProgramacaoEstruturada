#include<stdio.h>
/*
4. Dados três valores A, B e C, construa um algoritmo para verificar se estes valores podem ser valores dos lados de um triângulo, e se for classificá-los (imprimi-los) segundo os ângulos. (Triângulo Retângulo = 90º, Triângulo Obtusângulo > 90º, Triângulo Acutângulo < 90º)
*/

main(){
     float A, B, C;
     int somaAng;

    printf("Preencha os campos abaixo:\n");
    printf("ANGULOS DO TRIANGULO\n");
    printf("A: ");
    scanf("%f", &A);
    printf("B: ");
    scanf("%f", &B);
    printf("C: ");
    scanf("%f", &C);

    somaAng = A + B + C;

    if (somaAng == 180){
        printf("TRIANGULO DO TIPO:\n");
        if (A < 90 && B < 90 && C < 90) {
            printf("-- Acutangulo.");
        }else if(A == 90 || B == 90 || C == 90) {
            printf("-- Retangulo.");
        }else{
            printf("-- Obtusangulo.");
        }
    }else{
        printf("Os valores dos medidas dos angulos, não correspondem a um triangulo!");
    }
}