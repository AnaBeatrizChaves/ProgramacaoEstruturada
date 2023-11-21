#include<stdio.h>
#include<stdlib.h>

typedef struct{
    char nome[20];
    int idade;
    float nota;
}Aluno;

Aluno* cadastrar(){
    //alocar o endereco para gravar aluno
    Aluno *aluno = (Aluno*)malloc(sizeof(Aluno)); //funcao vai retornar um endereco de memoria para um aluno
    printf("Digite o nome do aluno: ");
    fflush(stdin);
    fgets(aluno->nome, sizeof(aluno->nome), stdin);
    fflush(stdin);
    printf("Digite a idade: ");
    fflush(stdin);
    scanf("%d", &aluno->idade);
    fflush(stdin);
    printf("Digite a nota: ");
    fflush(stdin);
    scanf("%f", &aluno->nota);
    fflush(stdin);
    
    return aluno; //o retorno da funcao é o endereco de memoria que foi alocado
}

main(){
    Aluno *a;

    a = cadastrar();
    
    printf("Nome: %s", a->nome);
    printf("Idade: %d", a->idade);
    printf("\nNota: %f", a->nota);
}