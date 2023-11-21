#include<stdio.h>
#include<stdlib.h>

typedef struct{
    char nome[20];
    int idade;
    float nota;
}Aluno;

main(){
    Aluno *a;
    a = (Aluno*)malloc(sizeof(Aluno));

    printf("Digite o nome: ");
    fgets(a->nome, sizeof(a->nome), stdin);
    printf("Digite a idade: ");
    scanf("%d", &a->idade);
    printf("Digite a nota: ");
    scanf("%f", &a->nota);

    //visualizacao
    printf("Nome: %s", a->nome);
    printf("Idade: %d", a->idade);
    printf("\nNota: %f", a->nota);

    free(a);
}