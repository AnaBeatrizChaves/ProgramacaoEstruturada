#include<stdio.h>
//4. Faça um programa que determine e mostre os cinco primeiros múltiplos de 3 considerando números maiores que 0.

main(){
	int i = 0, contador = 0;

    printf("OS 5 PRIMEIROS MULTIPLOS DE 3 SAO: \n");
	for(i = 0 ; i < 15 ; i++){
		if(i % 3 == 0){
		    contador++;
		    printf("%d\n", i);
		}
	}
}
