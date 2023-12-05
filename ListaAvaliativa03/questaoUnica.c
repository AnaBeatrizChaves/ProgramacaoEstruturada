/*
Implementar um sistema de controle de estoque com as funcionalidades de cadastrar produtos, consultar produtos, gerar relatório de produtos e remover produtos do estoque. Funções que deverão estar presentes no código:

    Função que inicializa uma lista vazia; (0,5 ponto)
    Função que adiciona um novo produto à lista de estoque. Ela solicita ao usuário informações como código, descrição, quantidade e valor do produto. (0,5 ponto)
    Função que percorre a lista de estoque e imprime um relatório com as informações de cada produto, incluindo código, descrição, quantidade e valor. (0,5 ponto)
    Função que permite ao usuário pesquisar um produto pelo código. (0,5 ponto)
    Função que permite ao usuário remover um produto do estoque. Ela solicita o código do produto a ser removido e busca na lista o produto correspondente. Se encontrar o produto, o remove da lista. Caso contrário, exibe uma mensagem informando que o produto não está cadastrado. (1,0 ponto)

O sistema deverá exibir um menu com as opções disponíveis e realizar as chamadas correspondentes às funções acima, de acordo com a escolha do usuário. O loop deverá continuar até que o usuário escolha sair do programa.
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

typedef struct Produto{
    int codigo;
    char descricao[120];
    int quantidade;
    float valor;
    struct Produto *prox;    
}Produto;

Produto* criarListaVazia(){
    return NULL;
}

Produto* criarNovoProduto(){
    Produto *novoProduto = (Produto*)malloc(sizeof(Produto)); 
    if(novoProduto == NULL){
        printf("Nao foi possivel alocar memoria");
        exit(EXIT_FAILURE);
    }
    novoProduto->prox = NULL;
    return novoProduto;
}

//CADASTRAR
Produto* cadastrar(Produto *lista){
    Produto *novoProduto = criarNovoProduto();
    printf("\n--------------------------------------------");
    printf("\n=========== CADASTRO DE PRODUTOS ===========");
    printf("\nPreencha os campos abaixo:\n");
    printf("\nCODIGO DO PRODUTO: ");
    scanf("%d", &novoProduto->codigo);
    fflush(stdin);
    printf("DESCRICAO: ");
    fflush(stdin);
    fgets(novoProduto->descricao, sizeof(novoProduto->descricao), stdin);
    fflush(stdin);
    printf("\nQUANTIDADE: ");
    scanf("%d", &novoProduto->quantidade);
    printf("VALOR: R$");
    scanf("%f", &novoProduto->valor);

    if(lista == NULL){
        lista = novoProduto; 
    }else{
        Produto *atual = lista; 
        while(atual->prox != NULL){
            atual = atual->prox;
        }
        atual->prox = novoProduto;
    }
    return lista; 
}

//MOSTRAR
void mostrar(Produto *lista){
    Produto *atual = lista;
    printf("\n--------------------------------------------");
    printf("\n========== RELATORIO DOS PRODUTOS ==========");

    if(atual == NULL){
        printf("Lista nula.");
        return;
    }else{
        while(atual != NULL){
            printf("\n\nCODIGO DO PRODUTO: %d", atual->codigo);
            printf("\nDESCRICAO: %s", atual->descricao);
            printf("QUANTIDADE: %d", atual->quantidade);
            printf("\nVALOR: R$%.2f", atual->valor);
            atual = atual->prox; 
        }
    }
}

//BUSCAR
Produto* buscar(Produto *lista, int codigoBusca){
    Produto *atual = lista;
    
    if(atual == NULL){
        printf("Lista nula.");
        return;
    }else{
       while(atual != NULL){
            if(atual->codigo == codigoBusca){
                printf("\nCODIGO DO PRODUTO: %d", atual->codigo);
                printf("\nDESCRICAO: %s", atual->descricao);
                printf("QUANTIDADE: %d", atual->quantidade);
                printf("VALOR: R$%.2f", atual->valor);
                return atual;
            }
            atual = atual->prox;  
        }
        printf("\nProduto nao encontrado!\n");
        return NULL;
    }
}

//EXCLUIR
Produto* excluir(Produto *lista, int codigoBusca){
    Produto *anterior = NULL;
    Produto *atual = lista;
    while(atual != NULL && atual->codigo != codigoBusca){
        anterior = atual;
        atual = atual->prox;
    }
    if (atual != NULL){
        if(anterior != NULL){
            anterior->prox = atual->prox;
        }else{
            lista = atual->prox;
        }
        free(atual);
        printf("\nProduto excluido com sucesso!\n");
    }else{
        printf("\nProduto nao cadastrado!\n");
    }
    return lista;
}

//LIBERAR LISTA
void liberarLista(Produto *lista){
    Produto *atual = lista;
    Produto *prox;
    while(atual != NULL){
        prox = atual->prox;
        free(atual);
        atual = prox;
    }
}

main(){
    Produto *lista = criarListaVazia();
    Produto *encontrada; 
    int opcao, codigoBusca;

    do{
        printf("\n\n============================================");
        printf("\n================== SISTEMA =================");
        printf("\nDigite 1 --> cadastrar produto");
        printf("\nDigite 2 --> mostrar produtos(RELATORIO)");
        printf("\nDigite 3 --> consultar produto");
        printf("\nDigite 4 --> remover produto");
        printf("\nDigite 0 --> sair");
        printf("\n\nOPCAO:");
        scanf("%d", &opcao);

        switch(opcao){
            case 1:
                lista = cadastrar(lista);
            break;

            case 2:
                mostrar(lista);
            break;

            case 3:
                printf("\n--------------------------------------------");
                printf("\n============ CONSULTA DE PRODUTO ===========");
                printf("\nDigite o codigo para consulta: ");
                scanf("%d", &codigoBusca);
                encontrada = buscar(lista, codigoBusca);
            break;

            case 4:
                printf("\n--------------------------------------------");
                printf("\n=========== EXCLUSAO DE PRODUTOS ===========");
                printf("\nDigite o codigo para excluir: ");
                scanf("%d", &codigoBusca);
                lista = excluir(lista, codigoBusca);
            break;
        }
    }while(opcao != 0);
    printf("\n\n============== VOLTE SEMPRE ================");

    liberarLista(lista);    
}
