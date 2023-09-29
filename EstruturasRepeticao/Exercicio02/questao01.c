#include<stdio.h>
/*1) Um cinema possui capacidade de 100 lugares e está sempre com ocupação total. Certo dia, cada espectador respondeu a um questionário, no qual constava:

- sua idade;

- sua opinião em relação ao filme, segundo as seguintes notas:

Nota        Significado

A              Ótimo

B              Bom

C             Regular

D             Ruim

E              Péssimo

Elabore um algoritmo que, lendo estes dados, calcule e imprima:

a quantidade de respostas ótimo;
a diferença percentual entre respostas bom e regular;
a média de idade das pessoas que responderam ruim;
a percentagem de respostas péssimo e a maior idade que utilizou esta opção;
a diferença de idade entre a maior idade que respondeu ótimo e a maior idade que respondeu ruim. 
*/

main() {
    float  porcentual, mediaIdadeRespRuim = 0, percPessimo;
    int idade, cont = 0, otimo = 0, bom = 0, regular = 0, ruim = 0, pessimo = 0, diferenca, maiorIdadePes = 0, maiorIdadeOtim = 0, maiorIdadeRuim = 0, difIdade;
    char nota;


    do {
        printf("\n\n=========== PESQUISA - AVALIACAO =========\n");
        cont++;
        printf("REGISTRO %d", cont);
        printf("\nPreencha os campos abaixo\n");
        printf("Idade: ");
        scanf("%d", &idade);
        printf("Nota\tSignificado\n");
        printf("A\tOtimo\n");
        printf("B\tBom\n");
        printf("C\tRegular\n");
        printf("D\tRuim\n");
        printf("E\tPessimo\n");
        printf("NOTA: ");
        fflush(stdin);
        scanf("%c", &nota);
            if(nota == 'A'){ 
                otimo++;
                if(idade > maiorIdadeOtim){
                    maiorIdadeOtim = idade;
                } 
            }else if(nota == 'B'){
                bom++;    
            }else if(nota == 'C'){
                regular++;    
            }else if(nota == 'D'){
                ruim++;
                mediaIdadeRespRuim += idade;
                if(idade > maiorIdadeRuim){
                    maiorIdadeRuim = idade;
                } 
            }else if(nota == 'E'){
                pessimo++;
                if(idade > maiorIdadePes){
                    maiorIdadePes = idade;
                }    
            }

    }while (cont <= 2);
        diferenca = (bom - regular);
        porcentual = (diferenca * 100.0) / cont;
        mediaIdadeRespRuim /= ruim;
        percPessimo = (pessimo * 100.0) / cont;
        difIdade = (maiorIdadeOtim - maiorIdadeRuim);
        
        printf("\n\n_______________ RESULTADOS ________________\n");
        printf("Quantidade de respostas otimo: %d", otimo);
        printf("\nDiferenca percentual entre respostas bom e regular: %.2f %%", porcentual);
        printf("\nMedia de idade das pessoas que responderam ruim: %.2f", mediaIdadeRespRuim);
        printf("\nPercentual de respostas pessimo e a maior idade que utilizou esta opcao: %.2f %% e %d", percPessimo, maiorIdadePes);
        printf("\nDiferença de idade entre a maior idade que respondeu otimo e a maior idade que respondeu ruim: %.2f", difIdade);
}
        