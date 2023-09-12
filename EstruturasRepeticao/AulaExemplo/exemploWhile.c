#include<stdio.h>

main () {
   

    /*
    int = 0;
    while( n <= 10) {
        printf("\n%d", n);
        n++;
    }
    //encerra a execucao do bloco de repeticao
    
    */

    /*
    int = 0;
    while( n <= 10) {
        if (n < 5 ){
            printf("\n%d", n);
        }
        n++;
    }
    */

    //TABUADA
    int n = 2, contador = 0, resultado;

    while(contador <= 10) {
        resultado = n * contador;
        printf("\n%d X %d = %d", n, contador, resultado);
        contador++;
    }


}