#include<stdio.h>
//3. Leia a altura e imprima se é maior que 1.8m
main(){
    float altura;

    printf("Digite a sua altura: ");
    scanf("%f", &altura);

    if(altura > 1.8){
        printf("Voce e maior que 1.80m");
    }else{
        printf("Voce e menor que 1.80m");
    }
}
