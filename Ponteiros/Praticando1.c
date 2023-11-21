#include<stdio.h>
#include<string.h>

main(){
    int a = 10, b = 20;
    int *pA, *pB;

    pA = &a; 
    pB = &b;  //endereco de memoria
    *pA = 45; //manipulando o valor por isso usa *

    //ATRIBUINDO UM NOVO VALOR
    //printf("\nConteudo da variavel A => %d", a);
    //*pA = 50;
    //printf("\nConteudo da variavel A apos o ponteiro => %d", a);

    //SOMANDO OS PONTEIROS
    //*pA = *pA + *pB;
    //printf("valor da variavel A apos a soma dos ponteiros => %d", a);
    
    if(*pA > *pB){
        printf("\nA e maior: %d", *pA);
    }else {
        printf("\nB e maior: %d", *pB);
    }
}