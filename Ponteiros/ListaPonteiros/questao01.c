/*
1. Escreva um programa que declare um inteiro, um real e um char, e ponteiros para inteiro, real e char. Associe as variáveis aos ponteiros (use &). Modifique os valores de cada variável usando os ponteiros. Imprima os valores das variáveis antes e após a modificação.
*/

#include<stdio.h>
#include<string.h>

main(){
    //variaveis
    int valor_01 = 4;
    float valor_02 = 2.5;
    char letra = 'A';

    //ponteiros
    int *ponteiroInt;
    float *ponteiroFloat;
    char *ponteiroChar;

    //associacao
    ponteiroInt = &valor_01;
    ponteiroFloat = &valor_02;
    ponteiroChar = &letra;

    //antes da acao dos ponteiros
    printf("Valores iniciais:\n");
    printf("Inteiro: %d\n", valor_01);
    printf("Real: %.2f\n", valor_02);
    printf("Char: %c\n", letra);

    //modificacao
    *ponteiroInt = 100;
    *ponteiroFloat = 25.5;
    *ponteiroChar = 'C';

    // apos a acao dos ponteiros
    printf("\nValores após modificação dos ponteiros:\n");
    printf("Inteiro: %d\n", valor_01);
    printf("Real: %.2f\n", valor_02);
    printf("Char: %c\n", letra);
}