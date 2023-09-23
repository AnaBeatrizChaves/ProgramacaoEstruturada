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
    float sal, somaSal, somaFilhos, mediaSal, mediaFilhos, maiorSal;
    int filhos, registro = 1, sal_ate_100 = 1, porcentagem;


    do {
        printf("\n\n=========== PESQUISA - HABITANTES =========\n");
        printf("Caso deseje encerrar a pesquisa, digite um salario negativo)\n");
        printf("REGISTRO %d", registro);
        printf("\nPreencha os campos abaixo\n");
        printf("Salario: R$ ");
        scanf("%f", &sal);
        printf("Numero de Filhos: ");
        scanf("%d", &filhos);
        
        somaSal += sal;
        mediaSal = somaSal / registro;

        somaFilhos += filhos;
        mediaFilhos = somaFilhos / registro;

        if (sal > maiorSal){
            maiorSal = sal;
        }

        if (sal <= 100) {
            sal_ate_100++;
        }

        porcentagem = (sal_ate_100 * 100) / registro;
        
        registro++;

    }while (sal > 0);
        printf("\n\n_______________ RESULTADOS ________________\n");
        printf("Media do salario da populacao: %.2f", mediaSal);
        printf("\nMedia do numero de filhos: %.2f", mediaFilhos);
        printf("\nValor do maior salario: R$ %.2f", maiorSal);
        printf("\nPercentual de pessoas com salario ate R$100,00: %.2f", porcentagem);
}