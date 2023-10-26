#include<stdio.h>
#define TAM 3

void imprimirNomes(char lista[TAM][20]){
    for (int i = 0; i < TAM; i++){
        printf("\n%s", lista[i]);
    }
}

main(){
    char nomes[3][20] = {"Ana", "Beatriz", "Pedro"};
    imprimirNomes(nomes);
}
