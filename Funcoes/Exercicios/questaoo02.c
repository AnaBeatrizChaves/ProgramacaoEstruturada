#include<stdio.h>
/*
2. Faça uma função que receba um número inteiro entre 1 a 12 e imprima em tela o mês e a 
sua quantidade de dias de acordo com o número digitado pelo usuário. Exemplo: 
Entrada = 4. Saída = abril.
*/

void mes(int num);

main(){
    int num;
    
    do{
        printf("\nDigite um numero de 1 a 12: ");
        scanf("%d", &num);
        mes(num);
    }while(num <=1 && num >= 12); 
}

void mes (int num) {
    if (num == 1) {
        printf("Janeiro");
    }else if (num == 2){
       printf("Fevereiro");
    }else if (num == 3){
       printf("Marco");
    }else if (num == 4){
       printf("Abril");
    }else if (num == 5){
       printf("Maio");
    }else if (num == 6){
       printf("Junho");
    }else if (num == 7){
       printf("Julho");
    }else if (num == 8){
       printf("Agosto");
    }else if (num == 9){
       printf("Setembro");
    }else if (num == 10){
       printf("Outubro");
    }else if (num == 11){
       printf("Novembro");
    }else if (num == 12){
       printf("Dezembro");
    }else{
        printf("Numero invalido!");
    }
}