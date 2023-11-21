#include<stdio.h>
#include<stdlib.h>

main(){
    /*
    alocacao estatica:
    int x;
    */

    //alocacao dinamica - malloc
    int *p; //void *p(quando nao tem um tipo definido)
    char *letra;

    p = (int*)malloc(sizeof(int)); //faz com que aloque um espaço do tamanho indicado entre parenteses
    if (p == NULL){
        printf("Memoria cheia!");
        return;
    }
    
    letra = (char*)malloc(sizeof(char));

    printf("\nO enderco alocado para P: %d", p);

    *p = 10;
    *letra = 'A';

    printf("\nO CONTEUDO armazenado no endereco alocado e apontado por p: %d", *p);
    printf("\nO CONTEUDO armazenado no endereco alocado e apontado por letra: %c", *letra);

    //UTILIZADO NO FINAL DO PROGRAMA OU APOS A EXCLUSAO DE ALGUM ELEMENTO
    free(p); //para liberar o espaço nao utilizado, para ser utilizado posteriormente
    free(letra); //para liberar o espaço nao utilizado, para ser utilizado posteriormente


}