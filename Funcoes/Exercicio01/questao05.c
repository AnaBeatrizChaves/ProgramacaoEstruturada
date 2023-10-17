#include<stdio.h>
#include<math.h>
/*
5. Escreva uma função para o cálculo do volume de uma esfera
em que π = 3.1414592 valor do raio r deve ser passado por parâmetro.
*/

float volumeEsfera(float raio);

main(){
    float raio;
    
    printf("Digite o valor do raio do esfera: ");
    scanf("%f", &raio);
    float retornoVolumeEsfera = volumeEsfera (raio);
    printf("O valor do volume do esfera e = %.2f", retornoVolumeEsfera);

}

float volumeEsfera(float raio) {
    float volumeEsfera = ((4 * 3.1414592 * pow(raio, 3)) / 3);
    return volumeEsfera; 
}