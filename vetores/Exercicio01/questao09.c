#include<stdio.h>
/*
9. Em uma eleição presidencial existem quatro candidatos. Os votos são informados através de códigos. Os dados utilizados para a contagem dos votos obedecem à seguinte codificação:  

- 1,2,3,4 = voto para os respectivos candidatos;

- 5 = voto nulo;

- 6 = voto em branco;

Elabore um algoritmo que leia o código do candidato em um voto. Calcule e escreva:

- total de votos para cada candidato;

- total de votos nulos;

- total de votos em branco;

Como finalizador do conjunto de votos, tem-se o valor 0.
*/

main(){
    int candidato1 = 0, candidato2 = 0, candidato3 = 0, candidato4 = 0, nulo = 0, branco = 0, voto;

    do {
        printf("\n++++++++++++ ELEICAO ++++++++++++\n");
        printf("Caso deseje encerrar, digite a opcao 0.\n");
        printf("VOTE 1 -- Candidato 1\n");
        printf("VOTE 2 -- Candidato 2\n");
        printf("VOTE 3 -- Candidato 3\n");
        printf("VOTE 4 -- Candidato 4\n");
        printf("VOTE 5 -- voto nulo\n");
        printf("VOTE 6 -- voto em branco\n");
        printf("OPCAO: ");
        scanf("%d", &voto);

        if (voto == 1){
            candidato1++;
        }else if (voto == 2) {
            candidato2++;
        }else if (voto == 3) {
            candidato3++;
        }else if (voto == 4) {
            candidato4++;
        }else if (voto == 5) {
            nulo++;
        }else if (voto == 6) {
            branco++;
        }else {
            printf("Opcao invalida, tente novamente!");
        }
    }while(voto != 0);
    printf("\n-------- TOTAL DE VOTOS ---------\n");
    printf("Candidato 1 : %d\n", candidato1);
    printf("Candidato 2 : %d\n", candidato2);
    printf("Candidato 3 : %d\n", candidato3);
    printf("Candidato 4 : %d\n", candidato4);
    printf("Votos Nulos : %d\n", nulo);
    printf("Votos em Branco : %d\n", branco);
}