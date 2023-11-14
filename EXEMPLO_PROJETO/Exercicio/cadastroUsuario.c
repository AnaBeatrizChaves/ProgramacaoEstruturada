/*
Implemente um algoritmo que:

Inclua até 1000 usuários;   MUDAR DE 3 PARA 1000///////////
Edite um usuário;
Exclua um usuário;
Busque um usuário pelo e-mail;
Imprima todos os usuários cadastrados;


Obrigatório uso de struct, vetor e função. OK//////////

Obrigatório uso de switch case com char para escolha da opção desejada.  OK/////////////

ATENÇÃO: (1) NA CRIAÇÃO DE NOMECompletoS DE IDENTIFICADORES; (2) NOS TEXTOS DE INTERAÇÃO COM USUÁRIOS – ENTRADA E SAÍDA; (3) NA ORGANIZAÇÃO DO CÓDIGO.

Dados do usuário:

Id (int) => preenchido automaticamente por números randômicos e não podem ser repetir.   PERGUNTAR////
Nome completo (string)
Email (string) => validação do campo: verificar se o caractere "@" aparece
Sexo (string) => validação do campo: aceitar somente as palavras Feminino, Masculino e Indiferente.
Endereço (string)
Altura (double) => validação do campo: aceitar valores entre 1 e 2 m.
Vacina (int) => validação de 1 para sim e 0 para não 
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define  MAX 3 

//registro
typedef struct{
    int id;
    char nomeCompleto[20];
    char email[20];
    char sexo[20];
    char endereco[50];
    double altura;
    int vacina;
}Usuario;

void cadastrar(Usuario a[], int indice){
    char *caractere;
    int achou;
    

    a[indice].id = indice + 1; // vai criar um numero aleatorio de 0 ate 10
    printf("\n--------------------------");
    printf("\n         CADASTRO         \n");
    printf("\nPreencha os campos abaixo:");
    printf("\nNome completo: ");
    fflush(stdin);
    fgets(a[indice].nomeCompleto, sizeof(a[indice].nomeCompleto), stdin);
    fflush(stdin);
        do{
            printf("\nEmail: ");
            fflush(stdin);
            fgets(a[indice].email, sizeof(a[indice].email), stdin);
            fflush(stdin);
      //     caractere = strchr(a[indice].email, '@');
            if(strchr(a[indice].email, '@') == NULL){
                printf("Email invalido... tente novamente!\n");
                fflush(stdin);
                achou = 0;
            }else{
                achou = 1;
            } 
        }while(achou == 0);


        do{
            printf("\nSexo (Feminino, Masculino e Indiferente): ");
            fflush(stdin);
            fgets(a[indice].sexo, sizeof(a[indice].sexo), stdin);
            fflush(stdin);
            if(a[indice].sexo != 'Feminino' || a[indice].sexo != 'Masculino' || a[indice].sexo != 'Indiferente'){
                printf("Valor invalido... tente novamente!\n");
            }
        }while(a[indice].email != caractere);
    printf("\nEndereco: ");
    fflush(stdin);
    fgets(a[indice].endereco, sizeof(a[indice].endereco), stdin);
    fflush(stdin);
    printf("Altura: ");
    fflush(stdin);
    scanf("%lf", &a[indice].altura);
    printf("Vacina: ");
    fflush(stdin);
    scanf("%d", &a[indice].vacina);
}

/*
void listarUsuarios(Usuario a[], int indice){
    printf("\n--------------------------");
    printf("\n        LISTAGEM       \n");
    if (indice == 0){
        printf("\nNenhum registro encontrado!");
    }else{
        for(int i = 0; i < indice; i++){
            printf("\nID: %d", a[i].id);
            printf("\nNome Completo: %s", a[i].nomeCompleto);
            printf("Idade: %d\n", a[i].idade);
            if (a[i].status == 1){
                printf("Status: Ativado");
            }else{
                 printf("Status: Desativado");
            }
        }
    }  
}

void buscar(Usuario a[], int indice, int idBuscar){
    printf("\n--------------------------");
    printf("\n         BUSCA         \n");
    for(int i = 0; i < indice; i++){
        if (idBuscar == a[i].id){
            printf("\nID: %d", a[i].id);
            printf("\nNome Completo: %s", a[i].nomeCompleto);
            printf("Idade: %d", a[i].idade);
            return;
        }
    }
    printf("Registro nao cadastrado!");
}

void alterar(Usuario a[], int indice, int idBuscar){
    int opcao;
    printf("\n--------------------------");
    printf("\n         ALTERACAO         \n");
    for(int i = 0; i < indice; i++){
        if (idBuscar == a[i].id){
            printf("\nID: %d", a[i].id);
            printf("\nNome Completo: %s", a[i].nomeCompleto);
            printf("Idade: %d", a[i].idade);
            printf("\n------------------------\n");
            printf("1 - Alterar nome Completo \n2 - Alterar idade \n3 - Alterar status \n4 - Alterar todos\n");
            fflush(stdin);
            printf("OPCAO: ");
            fflush(stdin);
            scanf("%d", &opcao);
            fflush(stdin);
            if (opcao == 1){
                printf("ALTERACAO DO NOMECompleto:");
                fgets(a[i].nomeCompleto, sizeof(a[i].nomeCompleto), stdin);
                fflush(stdin);
            }else if(opcao == 2){
                printf("ALTERACAO DA IDADE:");
                scanf("%d", &a[i].idade);
                fflush(stdin);
            }else if(opcao == 3){
                printf("ALTERACAO DO STATUS:");
                scanf("%d", &a[i].status);
                fflush(stdin);
            }else if(opcao == 4){
                printf("ALTERACAO DO NOME COMPLETO:");
                fgets(a[i].nomeCompleto, sizeof(a[i].nomeCompleto), stdin);
                printf("ALTERACAO DA IDADE:");
                scanf("%d", &a[i].idade);
                printf("ALTERACAO DO STATUS:");
                scanf("%d", &a[i].status);
                fflush(stdin);
            }else{
                printf("Opcao invalida!");
            }
            return;
        }
    }
    printf("Registro nao cadastrado!");
}

void excluir(Usuario a[], int indice, int idBuscar){
    printf("\n--------------------------");
    printf("\n         EXCLUSAO       \n");
    for(int i = 0; i < indice; i++){
        if (idBuscar == a[i].id){
            for(int j = i; j < indice - 1; j++){
                a[j] = a[j + 1];
            }
            printf("Excluido com sucesso!");
            return;
        }
    }
    printf("Registro nao encontrado!");
}

*/

main(){

    Usuario a[MAX];
    int totalCadastros = 0, opcao; //id;
    //char decisao;

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
                    printf("\n--------------------------\n");
                }else{
                    printf("\nCapacidade maxima de cadastros atingidas!");
                    printf("\n--------------------------\n");
                    printf("\n");
                    opcao = 0; //sair do sistema
                }
                break;
                /*
            case 2:
                listarUsuarios(a, totalCadastros);
                printf("\n");
                printf("\n--------------------------\n");
                break;
            case 3:
                printf("Digite o email do usuario que deseja buscar: ");
                scanf("%d", &id);
                buscar(a, totalCadastros, id);
                printf("\n--------------------------\n");
                break;
            case 4:
                printf("Digite o id que deseja alterar: ");
                scanf("%d", &id);
                alterar(a, totalCadastros, id);
                printf("\n--------------------------\n");
                break;
            case 5:
                printf("Digite o id que deseja excluir: ");
                scanf("%d", &id);
                fflush(stdin);
                printf("Deseja realmente excluir? s / n\n");
                scanf("%c", &decisao);
                if (decisao == 's'){
                    excluir(a, totalCadastros, id);
                    totalCadastros--;
                    printf("\n--------------------------\n");
                }else{
                    printf("Exclusao Cancelada!");
                    printf("\n--------------------------\n");
                }
                break;*/
        }
    }while(opcao != 0);
}