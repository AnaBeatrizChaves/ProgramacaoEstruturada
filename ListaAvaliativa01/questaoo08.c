#include<stdio.h>
/*
8. A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando dados sobre o salário e número de filhos. A prefeitura deseja saber:  

a) média do salário da população;

b) média do número de filhos;

c) maior salário;

d) percentual de pessoas com salário até R$100,00.

O final da leitura de dados se dará com a entrada de um salário negativo. (Use o comando do - while) .
*/

main() {
    float sal, mediaSal = 0, mediaFilhos = 0, maiorSal = 0, porcentagem;
    int filhos, registro = 1, cont = 0, contSalMenor100 = 0;


    do {
        printf("\n\n=========== PESQUISA - HABITANTES =========\n");
        printf("Caso deseje encerrar a pesquisa, digite um salario negativo)\n");
        printf("REGISTRO %d", registro);
        printf("\nPreencha os campos abaixo\n");
        printf("Salario: R$ ");
        scanf("%f", &sal);
            if(sal >= 0){ 
                registro++;
                cont++;   
                printf("Numero de Filhos: ");
                scanf("%d", &filhos);
                mediaFilhos += filhos;
                mediaSal += sal;
                if(sal > maiorSal){
                    maiorSal = sal;
                }
                if(sal <= 100){
                    contSalMenor100++;
                }
            }

    }while (sal >= 0);
        mediaFilhos /= cont;
        mediaSal /= cont;
        porcentagem = (contSalMenor100 * 100.0) / cont;
        printf("\n\n_______________ RESULTADOS ________________\n");
        printf("Media salarial: %.2f", mediaSal);
        printf("\nMedia de filhos: %.2f", mediaFilhos);
        printf("\nMaior salario: R$ %.2f", maiorSal);
        printf("\nPercentual de pessoas com salario ate R$100,00: %.2f %%", porcentagem);
}