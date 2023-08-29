#include<stdio.h>
//1. Leia a idade e imprima se a pessoa é maior
main(){
    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if(idade >= 18){
        printf("Voce e maior de idade!");
    }else{
        printf("Voce e menor de idade!");
    }
}
