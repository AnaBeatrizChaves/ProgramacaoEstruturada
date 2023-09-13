#include<stdio.h>
//5. Faça um programa que calcule e mostre a soma dos 50 primeiros números pares. 

main(){
    main(){
	int i = 0, soma = 0;

    printf("A soma dos 50 primeiros numeros pares é = \n");
	for(i = 0 ; i <= 50 ; i++){
		if(i % 2 == 0){
            soma = soma + i;
		    printf("%d , ", i);
            printf("SOMA TOTAL = %d", soma);
		}
	}
}

}
