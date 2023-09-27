#include<stdio.h>
/*
2. Chico tem 1,50 metro e cresce 2 centímetros por ano, enquanto Zé tem 1,10 metro e cresce 3 centímetros por ano. Construa um algoritmo que calcule e imprima quantos anos serão necessários para que Zé seja maior que Chico. 
*/

main(){
    float chico = 1.50, ze = 1.10;
    int ano = 0;

    while (ze < chico){
        ze = ze + 0.03;
        chico = chico + 0.02;
        ano ++; 
        printf("Chico = %.2f\tZe = %.2f\tAno: %d\n", chico, ze, ano);
    }

    printf("===========================================================\n");
    printf("Serao necessarios %d anos para que Ze seja maior que Chico!", ano);
    printf("\n===========================================================");
}