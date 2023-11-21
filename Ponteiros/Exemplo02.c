#include<stdio.h>
#include<string.h>

main(){
    int numero;
    int *p, *p2;

    p = &numero;
    p2 = p;

    *p = 20;
    (*p2)++;
   
    printf("conteudo da variavel numero visualizado atraves do ponteiro: %d", *p);
    printf("\nNumero: %d", numero);
    printf("\nConteudo visualizado atraves do ponteiro 2: %d", *p2);
}