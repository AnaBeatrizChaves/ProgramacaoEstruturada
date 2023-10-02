#include<stdio.h>

main(){ 
    int num[6], i;

    for (int i = 0; i < 6; i++) {
        printf("\nDigite um numero inteiro: ");
        scanf("%d", &num[i]);
    }
    for (int i = 0; i < 6; i++) {
        printf("\nVETOR:%d\tNUMERO:%d", i, num[i]);
    }
}


