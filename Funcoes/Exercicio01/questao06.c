#include<stdio.h>
/*
6. Escreva uma função que receba o peso (quilos) e a altura (metros) de uma pessoa. Calcule 
e retorne o IMC (Índice de Massa Corporal) dessa pessoa.
*/

float IMC(float peso, float altura);

main(){
    float peso, altura;
    
    printf("Digite o PESO (quilos): ");
    scanf("%f", &peso);
    printf("Digite o ALTURA (metros): ");
    scanf("%f", &altura);
    float retornoIMC = IMC (peso, altura);
    printf("O valor do volume do esfera e = %.2f", retornoIMC);

}

float IMC(float peso, float altura) {
    float IMC = peso / (altura * altura);
    return IMC; 
}