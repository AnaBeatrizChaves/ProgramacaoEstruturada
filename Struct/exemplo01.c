#include<stdio.h>
#include<string.h>

//definicao da struct/registro
struct pessoa{
    char nome[10];
    int idade;
    int cpf;
    float salario;
};
//OU
typedef struct{  //TYPEDEF: pegar essa struct e dar outro nome para esse tipo
    char rua[20];
    int numero;
}Endereco;       //nome da struct

main(){
    //criar uma variavel do tipo da struct
    struct pessoa p1;
    Endereco end; // com o typedef so precisa colocar a variavel end e o tipo Endereco;
    
    //inserir informações no registro PESSOA
    p1.idade = 25;
    strcpy(p1.nome, "Maria"); //funcao para receber campo do tipo string
    p1.cpf = 123456;
    p1.salario = 1000.0;

    //mostrando os dados do registro
    printf("Nome: %s", p1.nome);
    printf("\nIdade: %d", p1.idade);
    printf("\nCPF: %d", p1.cpf);
    printf("\nSalario: R$ %.2f", p1.salario);

    //PEDINDO informações no registro ENDEREÇO
    printf("\nDigite a rua: ");
    fgets(end.rua, sizeof(end.rua), stdin); //sizeof() é uma função que bsuca o tamanho da string automaticamente
    printf("Digite o numero: ");
    scanf("%d", &end.numero);
    fflush(stdin);

    //mostrando os dados do registro
    printf("\nRua: %s", end.rua);
    printf("Numero: %d", end.numero);




}