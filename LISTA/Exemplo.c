#include<stdio.h>
#include<stdlib.h>
#include<time.h>

typedef struct Pessoa{
    int id;
    char nome[40];
    int idade;
    struct Pessoa *prox;    
}Pessoa;

Pessoa* criarListaVazia(){
    return NULL;
}

Pessoa* criarNovaPessoa(){
    Pessoa *novaPessoa = (Pessoa*)malloc(sizeof(Pessoa)); //alocando um endereco de memoria
    if(novaPessoa == NULL){
        printf("Nao foi possivel alocar memoria");
        exit(EXIT_FAILURE);
    }
    novaPessoa->prox = NULL;
    return novaPessoa;
}

Pessoa* cadastrar(Pessoa *lista){
    Pessoa *novaPessoa = criarNovaPessoa();
    //id automatico
    srand(time(NULL));
    novaPessoa->id = rand() % 100;
    printf("\nDigite o nome: ");
    fflush(stdin);
    fgets(novaPessoa->nome, sizeof(novaPessoa->nome), stdin);
    fflush(stdin);
    printf("\nDigite o idade: ");
    scanf("%d", &novaPessoa->idade);

    if(lista == NULL){
        lista = novaPessoa; //lista deixa de ser vazia e guarda o primeiro endereco cadastrado
    }else{
        Pessoa *atual = lista; //ATUAL aponta para o primeiro elemento...
        while(atual->prox != NULL){
            atual = atual->prox;

        }
        atual->prox = novaPessoa;
    }
    return lista; //retorna a lista atualizada
}

main(){
    Pessoa *lista = criarListaVazia(); //apontar para a PRIMEIRA pessoa da lista ==> (Pessoa *lista = NULL) 

    int opcao;
    do{
        printf("\nDigite 1 para cadastrar uma pessoa");
        printf("\nDigite 2 para Mostrar todas as pessoas");
        printf("\nDigite 3 para Buscar uma pessoa");
        printf("\nDigite 4 para Alterar uma pessoa");
        printf("\nDigite 5 para Excluir uma pessoa");
        printf("\nDigite 0 para Sair");
        scanf("%d", &opcao);

        switch(opcao){
            case 1:
                lista = cadastrar(lista);
            break;

            case 2:
            break;

            case 3:
            break;

            case 4:
            break;

            case 5:
            break;
         
        }
    }while(opcao != 0);
}