#include<stdio.h>

main(){
    int a = 10, b = 15, c = 20;

    if (((a < b) && (b < c)) || (c < a)) { // "||" apenas um dos lados precisa ser verdadeiro
       printf("Verdadeira"); 
    }else{
        printf("Falsa");
    }
}