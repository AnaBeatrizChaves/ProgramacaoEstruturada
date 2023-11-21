/*
Implemente um algoritmo que:

Edite um usuário;
Exclua um usuário;
Id (int) => preenchido automaticamente por números randômicos e não podem ser repetir.   PERGUNTAR////

*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define  MAX 3 

//registro
typedef struct{
    int id;
    char nomeCompleto[20];
    char email[50];
    char sexo[20];
    char endereco[50];
    double altura;
    int vacina;
}Usuario;

void cadastrar(Usuario a[], int indice){
    int achou;
    int opcaoVacina;
    

    a[indice].id = indice + 1; // vai criar um numero aleatorio de 0 ate 10
    printf("\n--------------------------");
    printf("\n         CADASTRO         \n");
    printf("\nPreencha os campos abaixo:");
    printf("\nNome completo: ");
    fflush(stdin);
    fgets(a[indice].nomeCompleto, sizeof(a[indice].nomeCompleto), stdin);
    fflush(stdin);

    //VALIDACAO PARA O CAMPO EMAIL
        do{
            printf("\nEmail: ");
            fflush(stdin);
            fgets(a[indice].email, sizeof(a[indice].email), stdin);
            fflush(stdin);
            if(strchr(a[indice].email, '@') == NULL){
                printf("\nATENCAO: Email invalido... tente novamente! (Exemplo: xxxx@gmail.com)\n");
                fflush(stdin);
                achou = 0;
            }else{
                achou = 1;
            } 
        }while(achou == 0);

    //VALIDACAO PARA O CAMPO SEXO
        do{
            printf("Sexo (Feminino, Masculino e Indiferente): ");
            fflush(stdin);
            fgets(a[indice].sexo, sizeof(a[indice].sexo), stdin);
            fflush(stdin);
            a[indice].sexo[strcspn(a[indice].sexo, "\n")] = '\0';    // Removendo caracteres de nova linha (\n) do final da entrada
            if(strcmp(a[indice].sexo, "Feminino") != 0 && strcmp(a[indice].sexo, "Masculino") != 0 && strcmp(a[indice].sexo, "Indiferente") != 0){
                printf("\nATENCAO: Entrada invalida... tente novamente!\n\n");
                fflush(stdin);
                achou = 0;
            }else{
                achou = 1;
            }
        }while(achou == 0);
    printf("Endereco: ");
    fflush(stdin);
    fgets(a[indice].endereco, sizeof(a[indice].endereco), stdin);
    fflush(stdin);

    //VALIDACAO PARA O CAMPO ALTURA
        do{
            printf("Altura (1m a 2m): ");
            fflush(stdin);
            scanf("%lf", &a[indice].altura);
            if(a[indice].altura < 1 || a[indice].altura > 2){
                printf("\nATENCAO: Entrada invalida... tente novamente!\n\n");
                fflush(stdin);
                achou = 0;
            }else{
                achou = 1;
            }
        }while(achou == 0);
    
    //VALIDACAO PARA O CAMPO VACINA
        do{
            printf("Vacina -> 1 - sim / 0 - nao: ");
            fflush(stdin);
            scanf("%d", &a[indice].vacina);
            if (a[indice].vacina != 1 && a[indice].vacina != 0) {
                printf("\nATENCAO: Entrada invalida... tente novamente!\n\n");
                opcaoVacina = 0;
            } else {
                opcaoVacina = 1;
            }
        }while(opcaoVacina == 0);
}


void listarUsuarios(Usuario a[], int indice){
    printf("\n--------------------------");
    printf("\n  USUARIOS CADASTARDOS    \n");
    if (indice == 0){
        printf("\nNenhum registro encontrado!");
    }else{
        for(int i = 0; i < indice; i++){
            printf("\nID: %d", a[i].id);
            printf("\nNome Completo: %s", a[i].nomeCompleto);
            printf("Email: %s", a[i].email);
            printf("Sexo: %s\n", a[i].sexo);
            printf("Endereco: %s", a[i].endereco);
            printf("Altura: %.2lf metros\n", a[i].altura);
            if (a[i].vacina == 1){
                printf("Vacina: SIM");
                printf("\n");
            }else{
                printf("Vacina: NAO");
                printf("\n");
            }
        }
    }  
}

void buscar(Usuario a[], int indice, char emailBusca[]){
    for(int i = 0; i < indice; i++){
        if (strcmp(a[i].email, emailBusca) == 0){
            printf("\nID: %d", a[i].id);
            printf("\nNome Completo: %s", a[i].nomeCompleto);
            printf("Email: %s", a[i].email);
            printf("Sexo: %s\n", a[i].sexo);
            printf("Endereco: %s", a[i].endereco);
            printf("Altura: %.2lf metros\n", a[i].altura);
            if (a[i].vacina == 1){
                printf("Vacina: SIM");
                printf("\n");
            }else{
                printf("Vacina: NAO");
                printf("\n");
            }
            return;
        }else {
            printf("Registro nao cadastrado!");
        }
    }
}
/*
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
    int totalCadastros = 0, opcao;
    char email[50];
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
        fflush(stdin);

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
            case 2:
                listarUsuarios(a, totalCadastros);
                printf("\n");
                printf("\n--------------------------\n");
                break;
            
            case 3:
                printf("\n--------------------------");
                printf("\n         BUSCAR         \n");
                printf("Digite o email do usuario que deseja buscar: ");
                fgets(email, sizeof(email), stdin);
                buscar(a, totalCadastros, email);
                printf("\n--------------------------\n");
                break;
            /*
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