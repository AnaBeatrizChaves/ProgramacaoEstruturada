#include<stdio.h>
#define  MAX 3 //CONSTANTE TAMANHO VETOR

//registro
typedef struct{
    char nome[20];
    int idade;
    int id;
}Aluno;

void cadastrar(Aluno a[], int indice){
    printf("\nDigite o nome do aluno: ");
    fflush(stdin);
    fgets(a[indice].nome, sizeof(a[indice].nome), stdin);
    fflush(stdin);
    printf("Digite a idade: ");
    fflush(stdin);
    scanf("%d", &a[indice].idade);
    printf("Digite o id: ");
    fflush(stdin);
    scanf("%d", &a[indice].id);
}

void listarAlunos(Aluno a[], int indice){
    if (indice == 0){
        printf("\nNenhum registro encontrado!");
    }else{
        for(int i = 0; i < indice; i++){
            printf("\nNome: %s", a[i].nome);
            printf("Idade: %d", a[i].idade);
        }
        printf("\n");
    }
}

void buscar(Aluno a[], int indice, int idBuscar){
    int achou = 0;
    for(int i = 0; i < indice; i++){
        if(idBuscar == a[i].id){
            printf("\nNome: %s", a[i].nome);
            printf("Idade: %d", a[i].idade);
            achou++;
        }
     }
     if (achou == 0){
        printf("Registro nao escontrado!");
     }
}

main(){

    Aluno a[MAX];
    int totalCadastros = 0, opcao, id;

    //repetir o MENU
    do{
        printf("\nDigite 1 para cadastrar");
        printf("\nDigite 2 para listar");
        printf("\nDigite 3 para buscar");
        printf("\nDigite 0 para sair do sistema");
        printf("\nDigite a opcao escolhida:");
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
   
                printf("BUSCAR-----\n");
                printf("id: ");
                scanf("%d", &id);
                buscar(a, totalCadastros, id);
                break;
        }
    }while(opcao != 0);
}