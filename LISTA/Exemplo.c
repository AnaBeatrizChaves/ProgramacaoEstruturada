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

//CADASTRAR
Pessoa* cadastrar(Pessoa *lista){
    Pessoa *novaPessoa = criarNovaPessoa();
    //id automatico
    srand(time(NULL));
    novaPessoa->id = rand() % 100;
    printf("\nDigite o nome: ");
    fflush(stdin);
    fgets(novaPessoa->nome, sizeof(novaPessoa->nome), stdin);
    fflush(stdin);
    printf("Digite o idade: ");
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

//MOSTRAR
void mostrar(Pessoa *lista){
    Pessoa *atual = lista;

    if(atual == NULL){
        printf("Lista nula.");
        return;
    }else{
        while(atual != NULL){ // para repetir independente da quantidade
            printf("\nID: %d", atual->id);
            printf("\nNome: %s", atual->nome);
            printf("Idade: %d\n", atual->idade);
            atual = atual->prox; //para ir pegando os próximos da lista
        }
    }
}

//BUSCAR
Pessoa* buscar(Pessoa *lista, int idBusca){
    Pessoa *atual = lista;
    
    if(atual == NULL){
        printf("Lista nula.");
        return;
    }else{
       while(atual != NULL){
            if(atual->id == idBusca){
                printf("\nID: %d", atual->id);
                printf("\nNome: %s", atual->nome);
                printf("Idade: %d\n", atual->idade);
                return atual;
            }
            atual = atual->prox;   //atualiza o ponteiro e verifica o próximo (while roda novamente até achar)
        }
        printf("\nPessoa nao encontrada!\n");
        return NULL;
    }
}

//ALTERAR
void alterar(Pessoa *encontrada){
    printf("\nAlterar o nome: ");
    fflush(stdin);
    fgets(encontrada->nome, sizeof(encontrada->nome), stdin);
    fflush(stdin);
    printf("Altere o idade: ");
    scanf("%d", &encontrada->idade);
}

//EXCLUIR
Pessoa* excluir(Pessoa *lista, int idBusca){
    Pessoa *anterior = NULL;
    Pessoa *atual = lista;
    while(atual != NULL && atual->id != idBusca){
        anterior = atual;
        atual = atual->prox;
    }
    if (atual != NULL){
        if(anterior != NULL){
            //excluir alguem depois do primeiro
            anterior->prox = atual->prox;
        }else{
            //excluir o primeiro
            lista = atual->prox;
        }
        free(atual);
        printf("\nPessoa excluida com sucesso!\n");
    }else{
        printf("\nPessoa nao encontrada!\n");
    }
    return lista;
}


main(){
    Pessoa *lista = criarListaVazia(); //apontar para a PRIMEIRA pessoa da lista ==> (Pessoa *lista = NULL) 
    Pessoa *encontrada; // vai guardar o endereco da pessoa encontrada
    int opcao, idBusca;
    do{
        printf("\nDigite 1 para cadastrar uma pessoa");
        printf("\nDigite 2 para Mostrar todas as pessoas");
        printf("\nDigite 3 para Buscar uma pessoa");
        printf("\nDigite 4 para Alterar uma pessoa");
        printf("\nDigite 5 para Excluir uma pessoa");
        printf("\nDigite 0 para Sair");
        printf("\nOPCAO:");
        scanf("%d", &opcao);

        switch(opcao){
            case 1:
                lista = cadastrar(lista);
            break;

            case 2:
                mostrar(lista);
            break;

            case 3:
                printf("Digite o ID para busca: ");
                scanf("%d", &idBusca);
                encontrada = buscar(lista, idBusca);
            break;

            case 4:
                printf("Digite o ID para alterar: ");
                scanf("%d", &idBusca);
                encontrada = buscar(lista, idBusca);
                if(encontrada != NULL){
                    alterar(encontrada);
                }
            break;

            case 5:
                printf("Digite o ID para excluir: ");
                scanf("%d", &idBusca);
                lista = excluir(lista, idBusca);
            break;
         
        }
    }while(opcao != 0);
}