#include <stdio.h>
/*
8. Faça um algoritmo que leia a idade de
uma pessoa expressa em anos, meses e dias e
escreva a idade dessa pessoa expressa apenas em dias.
Considerar ano com 365 dias e mês com 30 dias.
*/
main(){

    int idadeAno, idadeMes, idadeDias, valorIdade, idadeMesTotal, idadeAnoTotal, idadeTotal;
    printf("Preencha a sua idade abaixo, levando em consideração o ano, mes e dias, respectivamente:");
    printf("\nAno: ");
    scanf("%d", &idadeAno);
    printf("Mes: ");
    scanf("%d", &idadeMes);
    printf("Dias: ");
    scanf("%d", &idadeDias);

    idadeAnoTotal = idadeAno * 365;
    idadeMesTotal = idadeMes * 30;
    idadeTotal = idadeAnoTotal + idadeMesTotal + idadeDias;

    printf("Sua idade expressa em dias equivalem a = %d dias", idadeTotal);




    
    
}