#include<stdio.h>
#include<string.h>

main(){
    //definição de ponteiros
    //variavel que armazena o endereço de outra variável ou um endereço de memoria
    //atraves do endereco de memoria que ele armazena ele acessa a variavel e MODIFICA

    /*

    IMPORTANTE:
    ° int *p -> declaracao do ponteiro
    ° p -> manipulação do CONTEÚDO do ponteiro
    ° *p -> manipular a VARIÁVEL para a qual o ponteiro de REFERE
    ° &p -> visualizar o endereco de memoria ALOCADO para o PONTEIRO

    */

    int valor;
    int *ponteiro; //ira apontar para uma variavel do tipo inteira
    //float *p2;
    //double *p3;
    //struct pessoa *p;
    //char *nome;

    //visualizacao do endereco de memoria
    printf("Endereco de memoria da variavel valor: %d", &valor); 
    printf("\nEndereco de memoria do ponteiro: %d", &ponteiro); 

    //inicializacao da variavel
    valor = 10; //CONTEUDO do valor => 10
    ponteiro = &valor; // sem * pois vou manipular o CONTEUDO do ponteiro => endereco de memoria da variavel valor
    //ponteiro = NULL ---> nao atribui valor nenhum ao ponteiro

    //OBSERVAÇÃO: Quando o ponteiro aponto para NULO, quer dizer que ele é o último elemento da fila

    printf("\nO conteudo da variavel valor: %d", valor);
    printf("\nO conteudo do ponteiro: %d", ponteiro);
}