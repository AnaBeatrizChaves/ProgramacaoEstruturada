#include<stdio.h>
#include<string.h>
#define TAM 3

//definicao da struct/registro
typedef struct{
    //campos
    char nome[25];
    char matricula[15];
    int turma;
}Aluno;

main(){
    //criar uma variavel do tipo Aluno
    Aluno a[TAM];

    //recebe dados no VETOR
    for(int i = 0; i < TAM; i++){
        printf("Digite o nome do aluno: ");
        fgets(a[i].nome, sizeof(a[i].nome), stdin);
        fflush(stdin);
        printf("Digite a matricula: ");
        fgets(a[i].matricula, sizeof(a[i].matricula), stdin);
        fflush(stdin);
        printf("Digite a turma: ");
        scanf("%d", &a[i].turma);
        fflush(stdin);
        printf("\n");
    }

    //mostrar VETOR
    for(int i = 0; i < TAM; i++){
        printf("Aluno: %s", a[i].nome);
        printf("Matricula: %s", a[i].matricula);
        printf("Turma: %d", a[i].turma);
        printf("\n");
    }
}
