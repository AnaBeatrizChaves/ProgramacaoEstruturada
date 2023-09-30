#include<stdio.h>
//4) Faça um algoritmo que leia um número positivo e imprima seus divisores. Exemplo: Os divisores do número 66 são: 1, 2, 3, 6, 11, 22, 33 e 66.

int main() {
    int numero;
    
    printf("Digite um numero positivo: ");
    scanf("%d", &numero);

    if (numero <= 0) {
        printf("O numero inserido nao e positivo.\n");
    } else {
        printf("Os divisores do numero %d sao: ", numero);

        for (int i = 1; i <= numero; i++) {
            if (numero % i == 0) {
                printf("%d", i);
                if (i != numero) {
                    printf(", ");
                }
            }
        }
        printf("\n");
    }
    return 0;
}

