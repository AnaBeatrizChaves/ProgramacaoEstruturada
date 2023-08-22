#include <stdio.h>
/*
10. O custo de um carro novo ao consumidor é a soma do custo de fábrica com a
porcentagem do distribuidor e dos impostos (aplicados ao custo de fábrica). Supondo que o percentual do distribuidor seja de 28% e os impostos de 45%, escrever um algoritmo para ler o custo de fábrica de um carro, calcular e escrever o custo final ao consumidor.
*/

main(){

    float custoFabrica, custoFinal, porcDistri, porcImpost;

    printf("Digite o custo de fabrica do carro: R$ ");
    scanf("%f", &custoFabrica);

    porcDistri = 0.28;
    porcImpost = 0.45;
    custoFinal = custoFabrica + (porcDistri * custoFabrica) + (porcImpost * custoFabrica);

    printf("O custo final do carro ao consumidor e de: R$ %.2f", custoFinal);  
}