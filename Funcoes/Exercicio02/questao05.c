#include<stdio.h>
/*
5. Faça uma função que recebe a data de nascimento
de uma pessoa em apresente sua idade expressa em dias,
meses e anos.
*/

int diasMes(int mes){
    int diasMes[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    return diasMes[mes - 1];
}



main(){
    int dia, mes, ano;
    int diaAtual, mesAtual, anoAtual;

    printf("Digite sua data de Nascimento: ");
    scanf("%d / %d / %d", &dia, &mes, &ano);

    printf("Digite a data atual: ");
    scanf("%d / %d / %d", &diaAtual, &mesAtual, &anoAtual);
}