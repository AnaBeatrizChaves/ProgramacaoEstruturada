#include<stdio.h>
/*
- só é considerado matriz se tiver mais de uma linha
    Primeiro colchete = linha 
    Segundo colchete = coluna

- CHAR NOME [3][20]; 
    (Primeiro será considerado a quantidade de alunos
     O segundo será considerado a quantidade de caracter - letras de cada aluno)

- FLOAT NOTAS[3][3]; 
    (Primeiro será considerado a quantidade de notas
     O segundo será considerado a quantidade de notas para cada aluno)
*/

main(){
    char nomes[3][20];
    float notas[3][3], soma, media;


    //for para os nomes
    for (int i = 0; i < 3; i++){
        printf("Digite os nomes dos alunos: ");
        fgets(nomes[i], 20, stdin); // (nome, tamanho, tipo de entrada)
    }

    //for para as notas
    //percorre as linhas)
    for (int i = 0; i < 3; i++){
        soma = 0; //para ele não somar o da linha anterior, a chamada soma incrementada

        //percorre as colunas
       for(int j = 0; j < 3; j++){
        printf("\nDigite as notas: ");
        scanf("%f", &notas[i][j]); // [i]= linha [j] = coluna
        soma += notas[i][j];
       }
       media = soma / 3;
       printf("Aluno: %s", nomes[i]);
       printf("Media: %.2f", media);
       printf("\n");
    }
}