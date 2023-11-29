/*
2. Escreva um programa que contenha duas variáveis inteiras. Compare seus endereços e exiba o maior endereço.
*/

#include<stdio.h>
#include<string.h>

main(){
    int *ponteiro1;
    int *ponteiro2;

    printf("\nEndereco de memoria do ponteiro 1: %d", &ponteiro1); 
    printf("\nEndereco de memoria do ponteiro 2: %d", &ponteiro2); 

    if (&ponteiro1 > &ponteiro2){
       printf("\nO maior endereco de memoria e o ponteiro 1 : %d", &ponteiro1);  
    }else{
        printf("\nO maior endereco de memoria e o ponteiro 2 : %d", &ponteiro2); 
    }
}