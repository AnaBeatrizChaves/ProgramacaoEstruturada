#include<stdio.h>
/*
4. Escreva uma função que receba por parâmetro a altura e o raio de um cilindro circular e 
retorne o volume desse cilindro. O volume de um cilindro circular é calculado por meio da 
seguinte fórmula: em que π = 3.1414592
*/

float volumeCil(float altura, float raio);

main(){
    float altura, raio;
    
    printf("Digite o valor da altura do cilindro: ");
    scanf("%f", &altura);
    printf("Digite o valor do raio do cilindro: ");
    scanf("%f", &raio);
    float retornoVolumeCil = volumeCil (altura, raio);
    printf("O valor do volume do cilindro e = %.2f", retornoVolumeCil);

}

float volumeCil(float altura, float raio) {
    float volumeCil = (3.1414592 * (raio * raio) * altura);
    return volumeCil; 
}