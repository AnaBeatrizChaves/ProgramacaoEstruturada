#include <stdio.h>
#include <math.h>
/*
7. Escreva um programa que pergunte qual 
o raio de um círculo e imprima a sua área. 
*/
main(){
    float pi, raio, area;

    printf("Digite o valor do raio: ");
    scanf("%f", &raio);

    pi= 3.14;
    area = pi * pow(raio,2); // pow(base, potencia)
    
    printf("O valor da area e = %.2f", area);
}