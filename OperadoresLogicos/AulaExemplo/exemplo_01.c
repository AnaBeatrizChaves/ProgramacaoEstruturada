#include<stdio.h>

main(){
    int a = 10, b = 15, c = 20;

    if(!(a > b) && !(b > c)){ // "!" serve para negar 
       printf("Verdadeira"); 
    }else{
        printf("Falsa");
    }
}