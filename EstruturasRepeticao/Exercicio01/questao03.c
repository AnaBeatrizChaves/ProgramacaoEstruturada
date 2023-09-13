#include<stdio.h>
//3. Faça um programa que leia um número inteiro N e depois imprima os N primeiros números naturais ímpares (sem usar comando condicional). 

main(){
    int num , res = 0, impares = 1;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    while (num > impares){
        printf("\n%d", impares);
        impares+=2;
    }

  /* while(res < num){
        res = contador * 2 + 1;
        printf("\n%d", res);
        res++;
        contador++; 
   }*/
}