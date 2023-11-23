#include<stdio.h>
#include<string.h>

void mudaValor(int *ponteiroNumero){
    *ponteiroNumero = 20;
}

void mudaLetra(char *ponteiroLetra){
    *ponteiroLetra = 'S';

}
main(){
    int numero;
    char letra;

    //passagem de parametro por referencia
    mudaValor(&numero);
    mudaLetra(&letra);

    printf("\nO valor do numero e : %d", numero);
    printf("\nO valor de letra e : %c", letra);
}