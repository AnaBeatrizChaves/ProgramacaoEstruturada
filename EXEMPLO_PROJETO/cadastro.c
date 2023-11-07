#include<stdio.h>
#define  MAX 3 //CONSTANTE TAMANHO VETOR

//registro
typedef struct{
    char nome[20];
    int idade;
    int id;
}Aluno;

void cadastrar(Aluno a[], int indice){
    a[indice].id = indice + 1; // vai criar um numero aleatorio de 0 ate 10
    printf("\nDigite o nome do aluno: ");
    fflush(stdin);
    fgets(a[indice].nome, sizeof(a[indice].nome), stdin);
    fflush(stdin);
    printf("Digite a idade: ");
    fflush(stdin);
    scanf("%d", &a[indice].idade);
}

void listarAlunos(Aluno a[], int indice){
    if (indice == 0){
        printf("\nNenhum registro encontrado!");
    }else{
        for(int i = 0; i < indice; i++){
            printf("\nID: %d", a[i].id);
            printf("\nNome: %s", a[i].nome);
            printf("Idade: %d\n", a[i].idade);
        }
    }
}

void buscar(Aluno a[], int indice, int idBuscar){
    for(int i = 0; i < indice; i++){
        if (idBuscar == a[i].id){
            printf("\nID: %d", a[i].id);
            printf("\nNome: %s", a[i].nome);
            printf("Idade: %d", a[i].idade);
            return;
        }
    }
    printf("Registro nao cadastrado!");
}

void alterar(Aluno a[], int indice, int idBuscar){
    int opcao;
    for(int i = 0; i < indice; i++){
        if (idBuscar == a[i].id){
            printf("\nID: %d", a[i].id);
            printf("\nNome: %s", a[i].nome);
            printf("Idade: %d", a[i].idade);
            printf("\n-----------------\n");
            printf("1 - Alterar nome / 2 - Alterar idade / 3 - Alterar todos\n");
            fflush(stdin);
            printf("OPCAO: ");
            fflush(stdin);
            scanf("%d", &opcao);
            fflush(stdin);
            if (opcao == 1){
                printf("ALTERACAO DO NOME:");
                fgets(a[i].nome, sizeof(a[i].nome), stdin);
                fflush(stdin);
            }else if(opcao == 2){
                printf("ALTERACAO DA IDADE:");
                scanf("%d", &a[i].idade);
                fflush(stdin);
            }else if(opcao == 3){
                printf("ALTERACAO DO NOME:");
                fgets(a[i].nome, sizeof(a[i].nome), stdin);
                printf("ALTERACAO DA IDADE:");
                scanf("%d", &a[i].idade);
            }else{
                printf("Opcao invalida!");
            }
            return;
        }
    }
    printf("Registro nao cadastrado!");
}



main(){

    Aluno a[MAX];
    int totalCadastros = 0, opcao, id;

    //repetir o MENU
    do{
        printf("\n======== OPCOES ========\n");
        printf("1 -- Cadastrar");
        printf("\n2 -- Listar");
        printf("\n3 -- Buscar");
        printf("\n4 -- Alterar");
        printf("\n5 -- Excluir");
        printf("\n0 -- Sair");
        printf("\nDigite a opcao escolhida: ");
        scanf("%d", &opcao);

        switch(opcao){
            case 1:
                //if para fazer com que sejam cadastrados so a quantidade que o vetor suporta
                if(totalCadastros < MAX){
                    cadastrar(a, totalCadastros);
                    totalCadastros++;
                    printf("\nCadastro realizado com sucesso!\n");
                }else{
                    printf("\nCapacidade maxima de cadastros atingidas!");
                    printf("\n");
                    //opcao = 0; //sair do sistema
                }
                break;
            case 2:
                listarAlunos(a, totalCadastros);
                printf("\n");
                break;
            case 3:
                printf("-- BUSCAR\n");
                printf("id: ");
                scanf("%d", &id);
                buscar(a, totalCadastros, id);
                break;
            case 4:
                printf("-- BUSCAR\n");
                printf("id: ");
                scanf("%d", &id);
                alterar(a, totalCadastros, id);
                break;
        }
    }while(opcao != 0);
}