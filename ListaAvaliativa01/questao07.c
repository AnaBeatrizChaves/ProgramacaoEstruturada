#include<stdio.h>
/*
7. Faça um algoritmo que leia as três notas de 30 alunos de uma turma. Para cada aluno, calcule a média ponderada, como segue: MP = ( n1*2 + n2*4 + n3*3 ) / 10
*/

main() {
    float nota1, nota2, nota3, media, somaMedia, mediaGeral;
    int alunos = 1;

    do{
        printf("\n\n=========== NOTAS =========\n");
        printf("ALUNO(A) = %d", alunos);
        printf("\nPreencha os campos abaixo\n");
        printf("NOTA 1 : ");
        scanf("%f", &nota1);
        printf("NOTA 2 : ");
        scanf("%f", &nota2);
        printf("NOTA 3 : ");
        scanf("%f", &nota3);

        media = ((nota1 * 2) + (nota2 * 4) + (nota3 * 3)) / 10;
        somaMedia += media;
        printf("A media final equivale a: %.2f", media);
        
        if (media >= 7){
            printf("\nAluno(a) Aprovado(a)!!");
        } else {
            printf("\nAluno(a) Reprovado(a)!!");
        }
        alunos ++;

    }while(alunos <= 30);

        mediaGeral = somaMedia / 30; 
        printf("\n\n----------- MEDIA GERAL DA TURMA -----------\n");
        printf("A media geral da turma equivale a: %.2f", mediaGeral);
        printf("\n\n--------------------------------------------\n");
}