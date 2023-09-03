#include<stdio.h>
//Construir um algoritmo que leia um número e imprima se ele é igual a 5, a 200, a 400, se está no intervalo entre 500 e 1000, ou se ela está fora dos escopos anteriores. 

main(){
    int num;

    printf("Digite um  numero: ");
    scanf("%d", &num);

    if (num == 5) {
        printf("O numero digitado e igual a 5");
    }else if (num == 200){
        printf("O numero digitado e igual a 200");
    }else if (num == 400){
        printf("O numero digitado e igual a 400");
    }else if ((num >= 500) && (num <= 1000)){
        printf("O numero digitado esta no intervalo entre 500 e 1000");
    }else{
        printf("O numero digitado esta fora dos escopos!!");
    }
}