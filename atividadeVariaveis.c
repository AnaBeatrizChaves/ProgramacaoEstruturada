#include<stdio.h>

main(){
    printf("\n____________________________________________");
    printf("\n=========== CADASTRO DE USUARIOS ===========");
    printf("\n____________________________________________");
    printf("\nPreencha os campos abaixo:\n");

    //declaração de variáveis
    char nome[50];
    int idade;
    char matr[10];
    char endereco[60];
    char curso[50];
    char periodo[50];
    char disciplina[100];
    float ValorMensalidade;

    //entrada de dados
    printf("\n-> Nome: ");
    fgets(nome, 50, stdin);

    printf("-> Idade: ");
    scanf("%d", &idade);

    printf("-> Matricula: ");
    fgets(matr, 10, stdin);

    printf("-> Endereco: ");
    fgets(endereco, 60, stdin);

    printf("-> Curso: ");
    fgets(curso, 50, stdin);

    printf("-> Periodo: ");
    fgets(periodo, 50, stdin);

    printf("-> Disciplina: ");
    fgets(disciplina, 100, stdin);

    printf("-> Valor da Mensalidade: R$");
    scanf("%f", &ValorMensalidade);
    
    printf("\n____________________________________________");
    printf("\n      CADASTRO FINALIZADO COM SUCESSO!      ");
    printf("\n____________________________________________\n");
    
    //saida de dados
    printf("\n============= DADOS CADASTRADOS ============");
    printf("\nNome: %s", nome);
    printf("Idade: %d", idade);
    printf("\nMatricula: %s", matr);
    printf("Endereco: %s", endereco);
    printf("Curso: %s", curso);
    printf("Periodo: %s", periodo);
    printf("Disciplina: %s", disciplina);
    printf("Valor da Mensalidade: R$ %.2f", ValorMensalidade); 
    printf("\n____________________________________________");
}