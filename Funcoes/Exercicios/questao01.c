#include<stdio.h>
//1. Escreva uma função que receba por parâmetro dois números e retorne o maior deles.

int maior(int num1, int num2);

main(){
    int numero1, numero2;
    
    printf("Digite dois numeros: ");
    scanf("%d %d", &numero1, &numero2);
    int retornoMaior = maior (numero1, numero2);
    printf("O retorno da funcao MAIOR e = %d", retornoMaior);

}

int maior(int num1, int num2) {
    if (num1 > num2) {
        return num1;
    }else {
        return num2;
    }
}