#include<stdio.h>
//5. Faça um programa que calcule e mostre a soma dos 50 primeiros números pares. 

main(){
	int i, soma = 0;

    printf("50 primeiros numeros pares: \n\n");
	for(i = 1 ; i <= 100 ; i++){
		if(i % 2 == 0){
		    printf("%d, ", i);
			soma += i;        
		}
	}
	printf("\n\nSOMA = %d", soma);
}
