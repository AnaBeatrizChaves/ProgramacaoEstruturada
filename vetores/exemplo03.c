#include<stdio.h>
//Matriz e vetor só usa a estrutura de repeticao FOR
main(){
    int num[5];

    for(int i = 0; i < 5; i++) { //o contador i irá percorrer os índices do vetor
        printf("Digite um numero: ");
        scanf("%d", &num[i]);
    }

    for(int i = 0; i < 5; i++) { //o contador i irá percorrer os índices do vetor
        printf("\n%d %d", i, num[i]);
    }
}