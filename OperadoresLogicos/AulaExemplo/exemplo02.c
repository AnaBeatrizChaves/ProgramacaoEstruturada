#include<stdio.h>

main(){
    float salario;

    printf("Digite o valor de seu salario: R$ ");
    scanf("%f", &salario);

    if (salario >= 1320){
        printf("Voce ganha um salario minimo!!");
    }else{
        printf("Voce nao ganha um salario minimo!!");
    }
}