/*
Para o controle dos veículos que circulam em uma determinada cidade, a Secretaria dos Transportes criou o seguinte registro padrão:

Proprietário:__________________________ Combustível:____________________

Modelo: _____________________________ Cor: __________________________

Nº chassi: _________________________ Ano: __________ Placa: ____________

Em que:

• Combustível pode ser álcool, diesel ou gasolina;

• Placa possui os três primeiros valores alfabéticos e os quatro restantes valores numéricos.

Sabendo que não temos uma definição do número máximo de veículos da cidade e que é preciso armazenar todos os valores em uma lista encadeada simples, construa:

a. Uma função que liste todos os proprietários cujos carros são do ano de 2010 ou posterior e que sejam movidos a diesel. (1,0 ponto)

b. Uma função que liste todas as placas que comecem com a letra J e terminem com 0, 2, 4 ou 7 e seus respectivos proprietários. (1,0 ponto)

c. Uma função que liste o modelo e a cor dos veículos cujas placas possuem como segunda letra uma vogal e cuja soma dos valores numéricos fornece um número par. (1,0 ponto)

d. Uma função que permita a troca de proprietário com o fornecimento do número do chassi apenas para carros com placas que não possuam nenhum dígito igual a zero. (1,0 ponto)
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

typedef struct Veiculo{
    char proprietario[120];
    char combustivel[80];
    char modelo[80];
    char cor[80];
    int numChassi;
    int ano;
    char placa[20];
    struct Veiculo *prox;    
}Veiculo;

Veiculo* criarListaVazia(){
    return NULL;
}

Veiculo* criarNovoVeiculo(){
    Veiculo *novoVeiculo = (Veiculo*)malloc(sizeof(Veiculo)); 
    if(novoVeiculo == NULL){
        printf("Nao foi possivel alocar memoria");
        exit(EXIT_FAILURE);
    }
    novoVeiculo->prox = NULL;
    return novoVeiculo;
}

//CADASTRAR
Veiculo* cadastrar(Veiculo *lista){
    Veiculo *novoVeiculo = criarNovoVeiculo();
    printf("\n--------------------------------------------");
    printf("\n=========== CADASTRO DE VeiculoS ===========");
    printf("\nPreencha os campos abaixo:\n");
    printf("\nCODIGO DO Veiculo: ");
    scanf("%d", &novoVeiculo->codigo);
    fflush(stdin);
    printf("DESCRICAO: ");
    fflush(stdin);
    fgets(novoVeiculo->descricao, sizeof(novoVeiculo->descricao), stdin);
    fflush(stdin);
    printf("\nQUANTIDADE: ");
    scanf("%d", &novoVeiculo->quantidade);
    printf("VALOR: R$");
    scanf("%f", &novoVeiculo->valor);

    if(lista == NULL){
        lista = novoVeiculo; 
    }else{
        Veiculo *atual = lista; 
        while(atual->prox != NULL){
            atual = atual->prox;
        }
        atual->prox = novoVeiculo;
    }
    return lista; 
}

//MOSTRAR
void mostrar(Veiculo *lista){
    Veiculo *atual = lista;
    printf("\n--------------------------------------------");
    printf("\n========== RELATORIO DOS VeiculoS ==========");

    if(atual == NULL){
        printf("Lista nula.");
        return;
    }else{
        while(atual != NULL){
            printf("\n\nCODIGO DO Veiculo: %d", atual->codigo);
            printf("\nDESCRICAO: %s", atual->descricao);
            printf("QUANTIDADE: %d", atual->quantidade);
            printf("\nVALOR: R$%.2f", atual->valor);
            atual = atual->prox; 
        }
    }
}

//BUSCAR
Veiculo* buscar(Veiculo *lista, int codigoBusca){
    Veiculo *atual = lista;
    
    if(atual == NULL){
        printf("Lista nula.");
        return;
    }else{
       while(atual != NULL){
            if(atual->codigo == codigoBusca){
                printf("\nCODIGO DO Veiculo: %d", atual->codigo);
                printf("\nDESCRICAO: %s", atual->descricao);
                printf("QUANTIDADE: %d", atual->quantidade);
                printf("VALOR: R$%.2f", atual->valor);
                return atual;
            }
            atual = atual->prox;  
        }
        printf("\nVeiculo nao encontrado!\n");
        return NULL;
    }
}

//EXCLUIR
Veiculo* excluir(Veiculo *lista, int codigoBusca){
    Veiculo *anterior = NULL;
    Veiculo *atual = lista;
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
        printf("\nVeiculo excluido com sucesso!\n");
    }else{
        printf("\nVeiculo nao cadastrado!\n");
    }
    return lista;
}

//LIBERAR LISTA
void liberarLista(Veiculo *lista){
    Veiculo *atual = lista;
    Veiculo *prox;
    while(atual != NULL){
        prox = atual->prox;
        free(atual);
        atual = prox;
    }
}

main(){
    Veiculo *lista = criarListaVazia();
    Veiculo *encontrada; 
    int opcao, codigoBusca;

    do{
        printf("\n\n============================================");
        printf("\n================== SISTEMA =================");
        printf("\nDigite 1 --> cadastrar Veiculo");
        printf("\nDigite 2 --> mostrar Veiculos(RELATORIO)");
        printf("\nDigite 3 --> consultar Veiculo");
        printf("\nDigite 4 --> remover Veiculo");
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
                printf("\n============ CONSULTA DE Veiculo ===========");
                printf("\nDigite o codigo para consulta: ");
                scanf("%d", &codigoBusca);
                encontrada = buscar(lista, codigoBusca);
            break;

            case 4:
                printf("\n--------------------------------------------");
                printf("\n=========== EXCLUSAO DE VeiculoS ===========");
                printf("\nDigite o codigo para excluir: ");
                scanf("%d", &codigoBusca);
                lista = excluir(lista, codigoBusca);
            break;
        }
    }while(opcao != 0);
    printf("\n\n============== VOLTE SEMPRE ================");

    liberarLista(lista);    
}
