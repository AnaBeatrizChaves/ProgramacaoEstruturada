#include<stdio.h>

main(){
    int n = 0;
    
    printf("\nValor : %d", n);
    // incrementando UMA unidade
    n++;
    printf("\nvalor : %d", n);
    n = n + 1;
    printf("\nvalor : %d", n);
    n += 1;
    printf("\nvalor : %d", n);
    // incrementando DUAS unidade
    n += 2;
    printf("\nvalor : %d", n);


    // decrementando UMA unidade
    n--;
    printf("\nvalor : %d", n);
    // decrementando DUAS unidade
    n -= 2;
    printf("\nvalor : %d", n);

}