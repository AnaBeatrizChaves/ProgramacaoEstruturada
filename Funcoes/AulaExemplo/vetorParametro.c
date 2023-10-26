//como passar um vetor como paramentro

#include <stdio.h>
#define TAM 5

void imprimir(int vetor[TAM]){
     for(int i = 0; i < TAM; i++){
        printf("\n%d", vetor[i]);
    }
}

main(){
    int vetor[5] = {1,2,6,4,10};
    imprimir(vetor);
}