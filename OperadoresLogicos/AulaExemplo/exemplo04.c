#include<stdio.h>

main(){
    float peso;

    printf("Digite o peso: ");
    scanf("%f", &peso);

    if (peso  < 60) {
        printf("O respectivo peso e menor que 60kg");
    }else{
        printf("O respectivo peso e maior que 60kg");
    }
}